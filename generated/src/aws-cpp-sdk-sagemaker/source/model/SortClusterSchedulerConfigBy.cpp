/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortClusterSchedulerConfigBy.h>
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
      namespace SortClusterSchedulerConfigByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        SortClusterSchedulerConfigBy GetSortClusterSchedulerConfigByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortClusterSchedulerConfigBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortClusterSchedulerConfigBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return SortClusterSchedulerConfigBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortClusterSchedulerConfigBy>(hashCode);
          }

          return SortClusterSchedulerConfigBy::NOT_SET;
        }

        Aws::String GetNameForSortClusterSchedulerConfigBy(SortClusterSchedulerConfigBy enumValue)
        {
          switch(enumValue)
          {
          case SortClusterSchedulerConfigBy::NOT_SET:
            return {};
          case SortClusterSchedulerConfigBy::Name:
            return "Name";
          case SortClusterSchedulerConfigBy::CreationTime:
            return "CreationTime";
          case SortClusterSchedulerConfigBy::Status:
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

      } // namespace SortClusterSchedulerConfigByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
