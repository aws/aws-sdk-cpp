/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/SoftwareSetUpdateSchedule.h>
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
      namespace SoftwareSetUpdateScheduleMapper
      {

        static const int USE_MAINTENANCE_WINDOW_HASH = HashingUtils::HashString("USE_MAINTENANCE_WINDOW");
        static const int APPLY_IMMEDIATELY_HASH = HashingUtils::HashString("APPLY_IMMEDIATELY");


        SoftwareSetUpdateSchedule GetSoftwareSetUpdateScheduleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_MAINTENANCE_WINDOW_HASH)
          {
            return SoftwareSetUpdateSchedule::USE_MAINTENANCE_WINDOW;
          }
          else if (hashCode == APPLY_IMMEDIATELY_HASH)
          {
            return SoftwareSetUpdateSchedule::APPLY_IMMEDIATELY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SoftwareSetUpdateSchedule>(hashCode);
          }

          return SoftwareSetUpdateSchedule::NOT_SET;
        }

        Aws::String GetNameForSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule enumValue)
        {
          switch(enumValue)
          {
          case SoftwareSetUpdateSchedule::NOT_SET:
            return {};
          case SoftwareSetUpdateSchedule::USE_MAINTENANCE_WINDOW:
            return "USE_MAINTENANCE_WINDOW";
          case SoftwareSetUpdateSchedule::APPLY_IMMEDIATELY:
            return "APPLY_IMMEDIATELY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SoftwareSetUpdateScheduleMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
