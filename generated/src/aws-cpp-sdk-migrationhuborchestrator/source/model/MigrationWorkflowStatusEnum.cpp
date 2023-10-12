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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t WORKFLOW_FAILED_HASH = ConstExprHashingUtils::HashString("WORKFLOW_FAILED");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");
        static constexpr uint32_t PAUSING_HASH = ConstExprHashingUtils::HashString("PAUSING");
        static constexpr uint32_t PAUSING_FAILED_HASH = ConstExprHashingUtils::HashString("PAUSING_FAILED");
        static constexpr uint32_t USER_ATTENTION_REQUIRED_HASH = ConstExprHashingUtils::HashString("USER_ATTENTION_REQUIRED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETION_FAILED_HASH = ConstExprHashingUtils::HashString("DELETION_FAILED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");


        MigrationWorkflowStatusEnum GetMigrationWorkflowStatusEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case MigrationWorkflowStatusEnum::NOT_SET:
            return {};
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
