/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InstanceMetadataTagsEnum.h>
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
      namespace InstanceMetadataTagsEnumMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        InstanceMetadataTagsEnum GetInstanceMetadataTagsEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return InstanceMetadataTagsEnum::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return InstanceMetadataTagsEnum::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetadataTagsEnum>(hashCode);
          }

          return InstanceMetadataTagsEnum::NOT_SET;
        }

        Aws::String GetNameForInstanceMetadataTagsEnum(InstanceMetadataTagsEnum enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetadataTagsEnum::NOT_SET:
            return {};
          case InstanceMetadataTagsEnum::enabled:
            return "enabled";
          case InstanceMetadataTagsEnum::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceMetadataTagsEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
