/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringAlertStatus.h>
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
      namespace MonitoringAlertStatusMapper
      {

        static const int InAlert_HASH = HashingUtils::HashString("InAlert");
        static const int OK_HASH = HashingUtils::HashString("OK");


        MonitoringAlertStatus GetMonitoringAlertStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InAlert_HASH)
          {
            return MonitoringAlertStatus::InAlert;
          }
          else if (hashCode == OK_HASH)
          {
            return MonitoringAlertStatus::OK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringAlertStatus>(hashCode);
          }

          return MonitoringAlertStatus::NOT_SET;
        }

        Aws::String GetNameForMonitoringAlertStatus(MonitoringAlertStatus enumValue)
        {
          switch(enumValue)
          {
          case MonitoringAlertStatus::InAlert:
            return "InAlert";
          case MonitoringAlertStatus::OK:
            return "OK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitoringAlertStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
