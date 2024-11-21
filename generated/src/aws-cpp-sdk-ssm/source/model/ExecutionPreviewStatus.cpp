/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ExecutionPreviewStatus.h>
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
      namespace ExecutionPreviewStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ExecutionPreviewStatus GetExecutionPreviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ExecutionPreviewStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ExecutionPreviewStatus::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return ExecutionPreviewStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return ExecutionPreviewStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionPreviewStatus>(hashCode);
          }

          return ExecutionPreviewStatus::NOT_SET;
        }

        Aws::String GetNameForExecutionPreviewStatus(ExecutionPreviewStatus enumValue)
        {
          switch(enumValue)
          {
          case ExecutionPreviewStatus::NOT_SET:
            return {};
          case ExecutionPreviewStatus::Pending:
            return "Pending";
          case ExecutionPreviewStatus::InProgress:
            return "InProgress";
          case ExecutionPreviewStatus::Success:
            return "Success";
          case ExecutionPreviewStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionPreviewStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
