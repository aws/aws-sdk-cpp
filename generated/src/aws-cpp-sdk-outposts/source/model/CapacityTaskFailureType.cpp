/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CapacityTaskFailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace CapacityTaskFailureTypeMapper
      {

        static const int UNSUPPORTED_CAPACITY_CONFIGURATION_HASH = HashingUtils::HashString("UNSUPPORTED_CAPACITY_CONFIGURATION");
        static const int UNEXPECTED_ASSET_STATE_HASH = HashingUtils::HashString("UNEXPECTED_ASSET_STATE");
        static const int BLOCKING_INSTANCES_NOT_EVACUATED_HASH = HashingUtils::HashString("BLOCKING_INSTANCES_NOT_EVACUATED");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");


        CapacityTaskFailureType GetCapacityTaskFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNSUPPORTED_CAPACITY_CONFIGURATION_HASH)
          {
            return CapacityTaskFailureType::UNSUPPORTED_CAPACITY_CONFIGURATION;
          }
          else if (hashCode == UNEXPECTED_ASSET_STATE_HASH)
          {
            return CapacityTaskFailureType::UNEXPECTED_ASSET_STATE;
          }
          else if (hashCode == BLOCKING_INSTANCES_NOT_EVACUATED_HASH)
          {
            return CapacityTaskFailureType::BLOCKING_INSTANCES_NOT_EVACUATED;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return CapacityTaskFailureType::INTERNAL_SERVER_ERROR;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return CapacityTaskFailureType::RESOURCE_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityTaskFailureType>(hashCode);
          }

          return CapacityTaskFailureType::NOT_SET;
        }

        Aws::String GetNameForCapacityTaskFailureType(CapacityTaskFailureType enumValue)
        {
          switch(enumValue)
          {
          case CapacityTaskFailureType::NOT_SET:
            return {};
          case CapacityTaskFailureType::UNSUPPORTED_CAPACITY_CONFIGURATION:
            return "UNSUPPORTED_CAPACITY_CONFIGURATION";
          case CapacityTaskFailureType::UNEXPECTED_ASSET_STATE:
            return "UNEXPECTED_ASSET_STATE";
          case CapacityTaskFailureType::BLOCKING_INSTANCES_NOT_EVACUATED:
            return "BLOCKING_INSTANCES_NOT_EVACUATED";
          case CapacityTaskFailureType::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          case CapacityTaskFailureType::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityTaskFailureTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
