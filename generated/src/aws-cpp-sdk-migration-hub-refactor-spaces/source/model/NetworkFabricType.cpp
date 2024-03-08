/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/NetworkFabricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    namespace Model
    {
      namespace NetworkFabricTypeMapper
      {

        static const int TRANSIT_GATEWAY_HASH = HashingUtils::HashString("TRANSIT_GATEWAY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        NetworkFabricType GetNetworkFabricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSIT_GATEWAY_HASH)
          {
            return NetworkFabricType::TRANSIT_GATEWAY;
          }
          else if (hashCode == NONE_HASH)
          {
            return NetworkFabricType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkFabricType>(hashCode);
          }

          return NetworkFabricType::NOT_SET;
        }

        Aws::String GetNameForNetworkFabricType(NetworkFabricType enumValue)
        {
          switch(enumValue)
          {
          case NetworkFabricType::NOT_SET:
            return {};
          case NetworkFabricType::TRANSIT_GATEWAY:
            return "TRANSIT_GATEWAY";
          case NetworkFabricType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkFabricTypeMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
