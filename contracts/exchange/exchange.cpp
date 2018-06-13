#include <eosiolib/eosio.hpp>
#include "exchange.hpp"

using namespace eosio;

class exchange : public eosio::contract {
  public:
      using contract::contract;

      /// @abi action 
      void exec() {
         print("Output from exchange");
      }
};

EOSIO_ABI( exchange, (exec) )
