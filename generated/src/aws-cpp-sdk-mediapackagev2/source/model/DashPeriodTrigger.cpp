/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashPeriodTrigger.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace DashPeriodTriggerMapper
      {

        static const int AVAILS_HASH = HashingUtils::HashString("AVAILS");
        static const int DRM_KEY_ROTATION_HASH = HashingUtils::HashString("DRM_KEY_ROTATION");
        static const int SOURCE_CHANGES_HASH = HashingUtils::HashString("SOURCE_CHANGES");
        static const int SOURCE_DISRUPTIONS_HASH = HashingUtils::HashString("SOURCE_DISRUPTIONS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        DashPeriodTrigger GetDashPeriodTriggerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILS_HASH)
          {
            return DashPeriodTrigger::AVAILS;
          }
          else if (hashCode == DRM_KEY_ROTATION_HASH)
          {
            return DashPeriodTrigger::DRM_KEY_ROTATION;
          }
          else if (hashCode == SOURCE_CHANGES_HASH)
          {
            return DashPeriodTrigger::SOURCE_CHANGES;
          }
          else if (hashCode == SOURCE_DISRUPTIONS_HASH)
          {
            return DashPeriodTrigger::SOURCE_DISRUPTIONS;
          }
          else if (hashCode == NONE_HASH)
          {
            return DashPeriodTrigger::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashPeriodTrigger>(hashCode);
          }

          return DashPeriodTrigger::NOT_SET;
        }

        Aws::String GetNameForDashPeriodTrigger(DashPeriodTrigger enumValue)
        {
          switch(enumValue)
          {
          case DashPeriodTrigger::NOT_SET:
            return {};
          case DashPeriodTrigger::AVAILS:
            return "AVAILS";
          case DashPeriodTrigger::DRM_KEY_ROTATION:
            return "DRM_KEY_ROTATION";
          case DashPeriodTrigger::SOURCE_CHANGES:
            return "SOURCE_CHANGES";
          case DashPeriodTrigger::SOURCE_DISRUPTIONS:
            return "SOURCE_DISRUPTIONS";
          case DashPeriodTrigger::NONE:
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

      } // namespace DashPeriodTriggerMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
