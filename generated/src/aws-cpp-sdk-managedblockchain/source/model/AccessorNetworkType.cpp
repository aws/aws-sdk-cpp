/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/AccessorNetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace AccessorNetworkTypeMapper
      {

        static const int ETHEREUM_GOERLI_HASH = HashingUtils::HashString("ETHEREUM_GOERLI");
        static const int ETHEREUM_MAINNET_HASH = HashingUtils::HashString("ETHEREUM_MAINNET");
        static const int ETHEREUM_MAINNET_AND_GOERLI_HASH = HashingUtils::HashString("ETHEREUM_MAINNET_AND_GOERLI");
        static const int POLYGON_MAINNET_HASH = HashingUtils::HashString("POLYGON_MAINNET");
        static const int POLYGON_MUMBAI_HASH = HashingUtils::HashString("POLYGON_MUMBAI");


        AccessorNetworkType GetAccessorNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ETHEREUM_GOERLI_HASH)
          {
            return AccessorNetworkType::ETHEREUM_GOERLI;
          }
          else if (hashCode == ETHEREUM_MAINNET_HASH)
          {
            return AccessorNetworkType::ETHEREUM_MAINNET;
          }
          else if (hashCode == ETHEREUM_MAINNET_AND_GOERLI_HASH)
          {
            return AccessorNetworkType::ETHEREUM_MAINNET_AND_GOERLI;
          }
          else if (hashCode == POLYGON_MAINNET_HASH)
          {
            return AccessorNetworkType::POLYGON_MAINNET;
          }
          else if (hashCode == POLYGON_MUMBAI_HASH)
          {
            return AccessorNetworkType::POLYGON_MUMBAI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessorNetworkType>(hashCode);
          }

          return AccessorNetworkType::NOT_SET;
        }

        Aws::String GetNameForAccessorNetworkType(AccessorNetworkType enumValue)
        {
          switch(enumValue)
          {
          case AccessorNetworkType::NOT_SET:
            return {};
          case AccessorNetworkType::ETHEREUM_GOERLI:
            return "ETHEREUM_GOERLI";
          case AccessorNetworkType::ETHEREUM_MAINNET:
            return "ETHEREUM_MAINNET";
          case AccessorNetworkType::ETHEREUM_MAINNET_AND_GOERLI:
            return "ETHEREUM_MAINNET_AND_GOERLI";
          case AccessorNetworkType::POLYGON_MAINNET:
            return "POLYGON_MAINNET";
          case AccessorNetworkType::POLYGON_MUMBAI:
            return "POLYGON_MUMBAI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessorNetworkTypeMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
