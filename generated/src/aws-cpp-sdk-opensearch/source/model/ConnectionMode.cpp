/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ConnectionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace ConnectionModeMapper
      {

        static constexpr uint32_t DIRECT_HASH = ConstExprHashingUtils::HashString("DIRECT");
        static constexpr uint32_t VPC_ENDPOINT_HASH = ConstExprHashingUtils::HashString("VPC_ENDPOINT");


        ConnectionMode GetConnectionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECT_HASH)
          {
            return ConnectionMode::DIRECT;
          }
          else if (hashCode == VPC_ENDPOINT_HASH)
          {
            return ConnectionMode::VPC_ENDPOINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionMode>(hashCode);
          }

          return ConnectionMode::NOT_SET;
        }

        Aws::String GetNameForConnectionMode(ConnectionMode enumValue)
        {
          switch(enumValue)
          {
          case ConnectionMode::NOT_SET:
            return {};
          case ConnectionMode::DIRECT:
            return "DIRECT";
          case ConnectionMode::VPC_ENDPOINT:
            return "VPC_ENDPOINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionModeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
