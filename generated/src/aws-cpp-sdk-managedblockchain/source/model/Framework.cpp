/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/Framework.h>
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
      namespace FrameworkMapper
      {

        static constexpr uint32_t HYPERLEDGER_FABRIC_HASH = ConstExprHashingUtils::HashString("HYPERLEDGER_FABRIC");
        static constexpr uint32_t ETHEREUM_HASH = ConstExprHashingUtils::HashString("ETHEREUM");


        Framework GetFrameworkForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HYPERLEDGER_FABRIC_HASH)
          {
            return Framework::HYPERLEDGER_FABRIC;
          }
          else if (hashCode == ETHEREUM_HASH)
          {
            return Framework::ETHEREUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Framework>(hashCode);
          }

          return Framework::NOT_SET;
        }

        Aws::String GetNameForFramework(Framework enumValue)
        {
          switch(enumValue)
          {
          case Framework::NOT_SET:
            return {};
          case Framework::HYPERLEDGER_FABRIC:
            return "HYPERLEDGER_FABRIC";
          case Framework::ETHEREUM:
            return "ETHEREUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrameworkMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
