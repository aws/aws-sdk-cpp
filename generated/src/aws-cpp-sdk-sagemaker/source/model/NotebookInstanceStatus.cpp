/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookInstanceStatus.h>
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
      namespace NotebookInstanceStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InService_HASH = ConstExprHashingUtils::HashString("InService");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");


        NotebookInstanceStatus GetNotebookInstanceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return NotebookInstanceStatus::Pending;
          }
          else if (hashCode == InService_HASH)
          {
            return NotebookInstanceStatus::InService;
          }
          else if (hashCode == Stopping_HASH)
          {
            return NotebookInstanceStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return NotebookInstanceStatus::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return NotebookInstanceStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return NotebookInstanceStatus::Deleting;
          }
          else if (hashCode == Updating_HASH)
          {
            return NotebookInstanceStatus::Updating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookInstanceStatus>(hashCode);
          }

          return NotebookInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForNotebookInstanceStatus(NotebookInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case NotebookInstanceStatus::NOT_SET:
            return {};
          case NotebookInstanceStatus::Pending:
            return "Pending";
          case NotebookInstanceStatus::InService:
            return "InService";
          case NotebookInstanceStatus::Stopping:
            return "Stopping";
          case NotebookInstanceStatus::Stopped:
            return "Stopped";
          case NotebookInstanceStatus::Failed:
            return "Failed";
          case NotebookInstanceStatus::Deleting:
            return "Deleting";
          case NotebookInstanceStatus::Updating:
            return "Updating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookInstanceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
