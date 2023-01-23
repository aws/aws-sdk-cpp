/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace MigrationWorkflowStatusEnumMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int WORKFLOW_FAILED_HASH = HashingUtils::HashString("WORKFLOW_FAILED");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int PAUSING_HASH = HashingUtils::HashString("PAUSING");
        static const int PAUSING_FAILED_HASH = HashingUtils::HashString("PAUSING_FAILED");
        static const int USER_ATTENTION_REQUIRED_HASH = HashingUtils::HashString("USER_ATTENTION_REQUIRED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        MigrationWorkflowStatusEnum GetMigrationWorkflowStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return MigrationWorkflowStatusEnum::CREATING;
          }
          else if (hashCode == NOT_STARTED_HASH)
          {
            return MigrationWorkflowStatusEnum::NOT_STARTED;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return MigrationWorkflowStatusEnum::CREATION_FAILED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return MigrationWorkflowStatusEnum::STARTING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return MigrationWorkflowStatusEnum::IN_PROGRESS;
          }
          else if (hashCode == WORKFLOW_FAILED_HASH)
          {
            return MigrationWorkflowStatusEnum::WORKFLOW_FAILED;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return MigrationWorkflowStatusEnum::PAUSED;
          }
          else if (hashCode == PAUSING_HASH)
          {
            return MigrationWorkflowStatusEnum::PAUSING;
          }
          else if (hashCode == PAUSING_FAILED_HASH)
          {
            return MigrationWorkflowStatusEnum::PAUSING_FAILED;
          }
          else if (hashCode == USER_ATTENTION_REQUIRED_HASH)
          {
            return MigrationWorkflowStatusEnum::USER_ATTENTION_REQUIRED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MigrationWorkflowStatusEnum::DELETING;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return MigrationWorkflowStatusEnum::DELETION_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return MigrationWorkflowStatusEnum::DELETED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MigrationWorkflowStatusEnum::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationWorkflowStatusEnum>(hashCode);
          }

          return MigrationWorkflowStatusEnum::NOT_SET;
        }

        Aws::String GetNameForMigrationWorkflowStatusEnum(MigrationWorkflowStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case MigrationWorkflowStatusEnum::CREATING:
            return "CREATING";
          case MigrationWorkflowStatusEnum::NOT_STARTED:
            return "NOT_STARTED";
          case MigrationWorkflowStatusEnum::CREATION_FAILED:
            return "CREATION_FAILED";
          case MigrationWorkflowStatusEnum::STARTING:
            return "STARTING";
          case MigrationWorkflowStatusEnum::IN_PROGRESS:
            return "IN_PROGRESS";
          case MigrationWorkflowStatusEnum::WORKFLOW_FAILED:
            return "WORKFLOW_FAILED";
          case MigrationWorkflowStatusEnum::PAUSED:
            return "PAUSED";
          case MigrationWorkflowStatusEnum::PAUSING:
            return "PAUSING";
          case MigrationWorkflowStatusEnum::PAUSING_FAILED:
            return "PAUSING_FAILED";
          case MigrationWorkflowStatusEnum::USER_ATTENTION_REQUIRED:
            return "USER_ATTENTION_REQUIRED";
          case MigrationWorkflowStatusEnum::DELETING:
            return "DELETING";
          case MigrationWorkflowStatusEnum::DELETION_FAILED:
            return "DELETION_FAILED";
          case MigrationWorkflowStatusEnum::DELETED:
            return "DELETED";
          case MigrationWorkflowStatusEnum::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationWorkflowStatusEnumMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws
