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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Updating_HASH = HashingUtils::HashString("Updating");


        NotebookInstanceStatus GetNotebookInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
