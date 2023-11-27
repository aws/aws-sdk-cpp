/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/MaintenanceWindowType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesThinClient
  {
    namespace Model
    {
      namespace MaintenanceWindowTypeMapper
      {

        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        MaintenanceWindowType GetMaintenanceWindowTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_HASH)
          {
            return MaintenanceWindowType::SYSTEM;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return MaintenanceWindowType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowType>(hashCode);
          }

          return MaintenanceWindowType::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowType(MaintenanceWindowType enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowType::NOT_SET:
            return {};
          case MaintenanceWindowType::SYSTEM:
            return "SYSTEM";
          case MaintenanceWindowType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceWindowTypeMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
