/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace MaintenanceWindowResourceTypeMapper
      {

        static constexpr uint32_t INSTANCE_HASH = ConstExprHashingUtils::HashString("INSTANCE");
        static constexpr uint32_t RESOURCE_GROUP_HASH = ConstExprHashingUtils::HashString("RESOURCE_GROUP");


        MaintenanceWindowResourceType GetMaintenanceWindowResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_HASH)
          {
            return MaintenanceWindowResourceType::INSTANCE;
          }
          else if (hashCode == RESOURCE_GROUP_HASH)
          {
            return MaintenanceWindowResourceType::RESOURCE_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowResourceType>(hashCode);
          }

          return MaintenanceWindowResourceType::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowResourceType(MaintenanceWindowResourceType enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowResourceType::NOT_SET:
            return {};
          case MaintenanceWindowResourceType::INSTANCE:
            return "INSTANCE";
          case MaintenanceWindowResourceType::RESOURCE_GROUP:
            return "RESOURCE_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceWindowResourceTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
