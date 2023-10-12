/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AutomationExecutionFilterKey.h>
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
      namespace AutomationExecutionFilterKeyMapper
      {

        static constexpr uint32_t DocumentNamePrefix_HASH = ConstExprHashingUtils::HashString("DocumentNamePrefix");
        static constexpr uint32_t ExecutionStatus_HASH = ConstExprHashingUtils::HashString("ExecutionStatus");
        static constexpr uint32_t ExecutionId_HASH = ConstExprHashingUtils::HashString("ExecutionId");
        static constexpr uint32_t ParentExecutionId_HASH = ConstExprHashingUtils::HashString("ParentExecutionId");
        static constexpr uint32_t CurrentAction_HASH = ConstExprHashingUtils::HashString("CurrentAction");
        static constexpr uint32_t StartTimeBefore_HASH = ConstExprHashingUtils::HashString("StartTimeBefore");
        static constexpr uint32_t StartTimeAfter_HASH = ConstExprHashingUtils::HashString("StartTimeAfter");
        static constexpr uint32_t AutomationType_HASH = ConstExprHashingUtils::HashString("AutomationType");
        static constexpr uint32_t TagKey_HASH = ConstExprHashingUtils::HashString("TagKey");
        static constexpr uint32_t TargetResourceGroup_HASH = ConstExprHashingUtils::HashString("TargetResourceGroup");
        static constexpr uint32_t AutomationSubtype_HASH = ConstExprHashingUtils::HashString("AutomationSubtype");
        static constexpr uint32_t OpsItemId_HASH = ConstExprHashingUtils::HashString("OpsItemId");


        AutomationExecutionFilterKey GetAutomationExecutionFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DocumentNamePrefix_HASH)
          {
            return AutomationExecutionFilterKey::DocumentNamePrefix;
          }
          else if (hashCode == ExecutionStatus_HASH)
          {
            return AutomationExecutionFilterKey::ExecutionStatus;
          }
          else if (hashCode == ExecutionId_HASH)
          {
            return AutomationExecutionFilterKey::ExecutionId;
          }
          else if (hashCode == ParentExecutionId_HASH)
          {
            return AutomationExecutionFilterKey::ParentExecutionId;
          }
          else if (hashCode == CurrentAction_HASH)
          {
            return AutomationExecutionFilterKey::CurrentAction;
          }
          else if (hashCode == StartTimeBefore_HASH)
          {
            return AutomationExecutionFilterKey::StartTimeBefore;
          }
          else if (hashCode == StartTimeAfter_HASH)
          {
            return AutomationExecutionFilterKey::StartTimeAfter;
          }
          else if (hashCode == AutomationType_HASH)
          {
            return AutomationExecutionFilterKey::AutomationType;
          }
          else if (hashCode == TagKey_HASH)
          {
            return AutomationExecutionFilterKey::TagKey;
          }
          else if (hashCode == TargetResourceGroup_HASH)
          {
            return AutomationExecutionFilterKey::TargetResourceGroup;
          }
          else if (hashCode == AutomationSubtype_HASH)
          {
            return AutomationExecutionFilterKey::AutomationSubtype;
          }
          else if (hashCode == OpsItemId_HASH)
          {
            return AutomationExecutionFilterKey::OpsItemId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationExecutionFilterKey>(hashCode);
          }

          return AutomationExecutionFilterKey::NOT_SET;
        }

        Aws::String GetNameForAutomationExecutionFilterKey(AutomationExecutionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AutomationExecutionFilterKey::NOT_SET:
            return {};
          case AutomationExecutionFilterKey::DocumentNamePrefix:
            return "DocumentNamePrefix";
          case AutomationExecutionFilterKey::ExecutionStatus:
            return "ExecutionStatus";
          case AutomationExecutionFilterKey::ExecutionId:
            return "ExecutionId";
          case AutomationExecutionFilterKey::ParentExecutionId:
            return "ParentExecutionId";
          case AutomationExecutionFilterKey::CurrentAction:
            return "CurrentAction";
          case AutomationExecutionFilterKey::StartTimeBefore:
            return "StartTimeBefore";
          case AutomationExecutionFilterKey::StartTimeAfter:
            return "StartTimeAfter";
          case AutomationExecutionFilterKey::AutomationType:
            return "AutomationType";
          case AutomationExecutionFilterKey::TagKey:
            return "TagKey";
          case AutomationExecutionFilterKey::TargetResourceGroup:
            return "TargetResourceGroup";
          case AutomationExecutionFilterKey::AutomationSubtype:
            return "AutomationSubtype";
          case AutomationExecutionFilterKey::OpsItemId:
            return "OpsItemId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationExecutionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
