/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringAlertHistorySortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace MonitoringAlertHistorySortKeyMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        MonitoringAlertHistorySortKey GetMonitoringAlertHistorySortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return MonitoringAlertHistorySortKey::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return MonitoringAlertHistorySortKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringAlertHistorySortKey>(hashCode);
          }

          return MonitoringAlertHistorySortKey::NOT_SET;
        }

        Aws::String GetNameForMonitoringAlertHistorySortKey(MonitoringAlertHistorySortKey enumValue)
        {
          switch(enumValue)
          {
          case MonitoringAlertHistorySortKey::CreationTime:
            return "CreationTime";
          case MonitoringAlertHistorySortKey::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitoringAlertHistorySortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
