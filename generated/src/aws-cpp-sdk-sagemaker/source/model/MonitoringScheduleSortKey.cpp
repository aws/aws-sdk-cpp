/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringScheduleSortKey.h>
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
      namespace MonitoringScheduleSortKeyMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");
        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");


        MonitoringScheduleSortKey GetMonitoringScheduleSortKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return MonitoringScheduleSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return MonitoringScheduleSortKey::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return MonitoringScheduleSortKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringScheduleSortKey>(hashCode);
          }

          return MonitoringScheduleSortKey::NOT_SET;
        }

        Aws::String GetNameForMonitoringScheduleSortKey(MonitoringScheduleSortKey enumValue)
        {
          switch(enumValue)
          {
          case MonitoringScheduleSortKey::NOT_SET:
            return {};
          case MonitoringScheduleSortKey::Name:
            return "Name";
          case MonitoringScheduleSortKey::CreationTime:
            return "CreationTime";
          case MonitoringScheduleSortKey::Status:
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

      } // namespace MonitoringScheduleSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
