/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobReportScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace JobReportScopeMapper
      {

        static const int AllTasks_HASH = HashingUtils::HashString("AllTasks");
        static const int FailedTasksOnly_HASH = HashingUtils::HashString("FailedTasksOnly");


        JobReportScope GetJobReportScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AllTasks_HASH)
          {
            return JobReportScope::AllTasks;
          }
          else if (hashCode == FailedTasksOnly_HASH)
          {
            return JobReportScope::FailedTasksOnly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobReportScope>(hashCode);
          }

          return JobReportScope::NOT_SET;
        }

        Aws::String GetNameForJobReportScope(JobReportScope enumValue)
        {
          switch(enumValue)
          {
          case JobReportScope::AllTasks:
            return "AllTasks";
          case JobReportScope::FailedTasksOnly:
            return "FailedTasksOnly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobReportScopeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
