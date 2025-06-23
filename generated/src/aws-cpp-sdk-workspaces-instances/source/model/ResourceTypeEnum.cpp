/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/ResourceTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace ResourceTypeEnumMapper
      {

        static const int instance_HASH = HashingUtils::HashString("instance");
        static const int volume_HASH = HashingUtils::HashString("volume");
        static const int spot_instances_request_HASH = HashingUtils::HashString("spot-instances-request");
        static const int network_interface_HASH = HashingUtils::HashString("network-interface");


        ResourceTypeEnum GetResourceTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == instance_HASH)
          {
            return ResourceTypeEnum::instance;
          }
          else if (hashCode == volume_HASH)
          {
            return ResourceTypeEnum::volume;
          }
          else if (hashCode == spot_instances_request_HASH)
          {
            return ResourceTypeEnum::spot_instances_request;
          }
          else if (hashCode == network_interface_HASH)
          {
            return ResourceTypeEnum::network_interface;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeEnum>(hashCode);
          }

          return ResourceTypeEnum::NOT_SET;
        }

        Aws::String GetNameForResourceTypeEnum(ResourceTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeEnum::NOT_SET:
            return {};
          case ResourceTypeEnum::instance:
            return "instance";
          case ResourceTypeEnum::volume:
            return "volume";
          case ResourceTypeEnum::spot_instances_request:
            return "spot-instances-request";
          case ResourceTypeEnum::network_interface:
            return "network-interface";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
