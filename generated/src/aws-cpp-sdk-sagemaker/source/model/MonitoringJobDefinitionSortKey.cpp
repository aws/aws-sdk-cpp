/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringJobDefinitionSortKey.h>
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
      namespace MonitoringJobDefinitionSortKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        MonitoringJobDefinitionSortKey GetMonitoringJobDefinitionSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return MonitoringJobDefinitionSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return MonitoringJobDefinitionSortKey::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringJobDefinitionSortKey>(hashCode);
          }

          return MonitoringJobDefinitionSortKey::NOT_SET;
        }

        Aws::String GetNameForMonitoringJobDefinitionSortKey(MonitoringJobDefinitionSortKey enumValue)
        {
          switch(enumValue)
          {
          case MonitoringJobDefinitionSortKey::NOT_SET:
            return {};
          case MonitoringJobDefinitionSortKey::Name:
            return "Name";
          case MonitoringJobDefinitionSortKey::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitoringJobDefinitionSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
