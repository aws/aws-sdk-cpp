/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/HistoryEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace HistoryEventTypeMapper
      {

        static constexpr uint32_t ActivityFailed_HASH = ConstExprHashingUtils::HashString("ActivityFailed");
        static constexpr uint32_t ActivityScheduled_HASH = ConstExprHashingUtils::HashString("ActivityScheduled");
        static constexpr uint32_t ActivityScheduleFailed_HASH = ConstExprHashingUtils::HashString("ActivityScheduleFailed");
        static constexpr uint32_t ActivityStarted_HASH = ConstExprHashingUtils::HashString("ActivityStarted");
        static constexpr uint32_t ActivitySucceeded_HASH = ConstExprHashingUtils::HashString("ActivitySucceeded");
        static constexpr uint32_t ActivityTimedOut_HASH = ConstExprHashingUtils::HashString("ActivityTimedOut");
        static constexpr uint32_t ChoiceStateEntered_HASH = ConstExprHashingUtils::HashString("ChoiceStateEntered");
        static constexpr uint32_t ChoiceStateExited_HASH = ConstExprHashingUtils::HashString("ChoiceStateExited");
        static constexpr uint32_t ExecutionAborted_HASH = ConstExprHashingUtils::HashString("ExecutionAborted");
        static constexpr uint32_t ExecutionFailed_HASH = ConstExprHashingUtils::HashString("ExecutionFailed");
        static constexpr uint32_t ExecutionStarted_HASH = ConstExprHashingUtils::HashString("ExecutionStarted");
        static constexpr uint32_t ExecutionSucceeded_HASH = ConstExprHashingUtils::HashString("ExecutionSucceeded");
        static constexpr uint32_t ExecutionTimedOut_HASH = ConstExprHashingUtils::HashString("ExecutionTimedOut");
        static constexpr uint32_t FailStateEntered_HASH = ConstExprHashingUtils::HashString("FailStateEntered");
        static constexpr uint32_t LambdaFunctionFailed_HASH = ConstExprHashingUtils::HashString("LambdaFunctionFailed");
        static constexpr uint32_t LambdaFunctionScheduled_HASH = ConstExprHashingUtils::HashString("LambdaFunctionScheduled");
        static constexpr uint32_t LambdaFunctionScheduleFailed_HASH = ConstExprHashingUtils::HashString("LambdaFunctionScheduleFailed");
        static constexpr uint32_t LambdaFunctionStarted_HASH = ConstExprHashingUtils::HashString("LambdaFunctionStarted");
        static constexpr uint32_t LambdaFunctionStartFailed_HASH = ConstExprHashingUtils::HashString("LambdaFunctionStartFailed");
        static constexpr uint32_t LambdaFunctionSucceeded_HASH = ConstExprHashingUtils::HashString("LambdaFunctionSucceeded");
        static constexpr uint32_t LambdaFunctionTimedOut_HASH = ConstExprHashingUtils::HashString("LambdaFunctionTimedOut");
        static constexpr uint32_t MapIterationAborted_HASH = ConstExprHashingUtils::HashString("MapIterationAborted");
        static constexpr uint32_t MapIterationFailed_HASH = ConstExprHashingUtils::HashString("MapIterationFailed");
        static constexpr uint32_t MapIterationStarted_HASH = ConstExprHashingUtils::HashString("MapIterationStarted");
        static constexpr uint32_t MapIterationSucceeded_HASH = ConstExprHashingUtils::HashString("MapIterationSucceeded");
        static constexpr uint32_t MapStateAborted_HASH = ConstExprHashingUtils::HashString("MapStateAborted");
        static constexpr uint32_t MapStateEntered_HASH = ConstExprHashingUtils::HashString("MapStateEntered");
        static constexpr uint32_t MapStateExited_HASH = ConstExprHashingUtils::HashString("MapStateExited");
        static constexpr uint32_t MapStateFailed_HASH = ConstExprHashingUtils::HashString("MapStateFailed");
        static constexpr uint32_t MapStateStarted_HASH = ConstExprHashingUtils::HashString("MapStateStarted");
        static constexpr uint32_t MapStateSucceeded_HASH = ConstExprHashingUtils::HashString("MapStateSucceeded");
        static constexpr uint32_t ParallelStateAborted_HASH = ConstExprHashingUtils::HashString("ParallelStateAborted");
        static constexpr uint32_t ParallelStateEntered_HASH = ConstExprHashingUtils::HashString("ParallelStateEntered");
        static constexpr uint32_t ParallelStateExited_HASH = ConstExprHashingUtils::HashString("ParallelStateExited");
        static constexpr uint32_t ParallelStateFailed_HASH = ConstExprHashingUtils::HashString("ParallelStateFailed");
        static constexpr uint32_t ParallelStateStarted_HASH = ConstExprHashingUtils::HashString("ParallelStateStarted");
        static constexpr uint32_t ParallelStateSucceeded_HASH = ConstExprHashingUtils::HashString("ParallelStateSucceeded");
        static constexpr uint32_t PassStateEntered_HASH = ConstExprHashingUtils::HashString("PassStateEntered");
        static constexpr uint32_t PassStateExited_HASH = ConstExprHashingUtils::HashString("PassStateExited");
        static constexpr uint32_t SucceedStateEntered_HASH = ConstExprHashingUtils::HashString("SucceedStateEntered");
        static constexpr uint32_t SucceedStateExited_HASH = ConstExprHashingUtils::HashString("SucceedStateExited");
        static constexpr uint32_t TaskFailed_HASH = ConstExprHashingUtils::HashString("TaskFailed");
        static constexpr uint32_t TaskScheduled_HASH = ConstExprHashingUtils::HashString("TaskScheduled");
        static constexpr uint32_t TaskStarted_HASH = ConstExprHashingUtils::HashString("TaskStarted");
        static constexpr uint32_t TaskStartFailed_HASH = ConstExprHashingUtils::HashString("TaskStartFailed");
        static constexpr uint32_t TaskStateAborted_HASH = ConstExprHashingUtils::HashString("TaskStateAborted");
        static constexpr uint32_t TaskStateEntered_HASH = ConstExprHashingUtils::HashString("TaskStateEntered");
        static constexpr uint32_t TaskStateExited_HASH = ConstExprHashingUtils::HashString("TaskStateExited");
        static constexpr uint32_t TaskSubmitFailed_HASH = ConstExprHashingUtils::HashString("TaskSubmitFailed");
        static constexpr uint32_t TaskSubmitted_HASH = ConstExprHashingUtils::HashString("TaskSubmitted");
        static constexpr uint32_t TaskSucceeded_HASH = ConstExprHashingUtils::HashString("TaskSucceeded");
        static constexpr uint32_t TaskTimedOut_HASH = ConstExprHashingUtils::HashString("TaskTimedOut");
        static constexpr uint32_t WaitStateAborted_HASH = ConstExprHashingUtils::HashString("WaitStateAborted");
        static constexpr uint32_t WaitStateEntered_HASH = ConstExprHashingUtils::HashString("WaitStateEntered");
        static constexpr uint32_t WaitStateExited_HASH = ConstExprHashingUtils::HashString("WaitStateExited");
        static constexpr uint32_t MapRunAborted_HASH = ConstExprHashingUtils::HashString("MapRunAborted");
        static constexpr uint32_t MapRunFailed_HASH = ConstExprHashingUtils::HashString("MapRunFailed");
        static constexpr uint32_t MapRunStarted_HASH = ConstExprHashingUtils::HashString("MapRunStarted");
        static constexpr uint32_t MapRunSucceeded_HASH = ConstExprHashingUtils::HashString("MapRunSucceeded");


        HistoryEventType GetHistoryEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivityFailed_HASH)
          {
            return HistoryEventType::ActivityFailed;
          }
          else if (hashCode == ActivityScheduled_HASH)
          {
            return HistoryEventType::ActivityScheduled;
          }
          else if (hashCode == ActivityScheduleFailed_HASH)
          {
            return HistoryEventType::ActivityScheduleFailed;
          }
          else if (hashCode == ActivityStarted_HASH)
          {
            return HistoryEventType::ActivityStarted;
          }
          else if (hashCode == ActivitySucceeded_HASH)
          {
            return HistoryEventType::ActivitySucceeded;
          }
          else if (hashCode == ActivityTimedOut_HASH)
          {
            return HistoryEventType::ActivityTimedOut;
          }
          else if (hashCode == ChoiceStateEntered_HASH)
          {
            return HistoryEventType::ChoiceStateEntered;
          }
          else if (hashCode == ChoiceStateExited_HASH)
          {
            return HistoryEventType::ChoiceStateExited;
          }
          else if (hashCode == ExecutionAborted_HASH)
          {
            return HistoryEventType::ExecutionAborted;
          }
          else if (hashCode == ExecutionFailed_HASH)
          {
            return HistoryEventType::ExecutionFailed;
          }
          else if (hashCode == ExecutionStarted_HASH)
          {
            return HistoryEventType::ExecutionStarted;
          }
          else if (hashCode == ExecutionSucceeded_HASH)
          {
            return HistoryEventType::ExecutionSucceeded;
          }
          else if (hashCode == ExecutionTimedOut_HASH)
          {
            return HistoryEventType::ExecutionTimedOut;
          }
          else if (hashCode == FailStateEntered_HASH)
          {
            return HistoryEventType::FailStateEntered;
          }
          else if (hashCode == LambdaFunctionFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionFailed;
          }
          else if (hashCode == LambdaFunctionScheduled_HASH)
          {
            return HistoryEventType::LambdaFunctionScheduled;
          }
          else if (hashCode == LambdaFunctionScheduleFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionScheduleFailed;
          }
          else if (hashCode == LambdaFunctionStarted_HASH)
          {
            return HistoryEventType::LambdaFunctionStarted;
          }
          else if (hashCode == LambdaFunctionStartFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionStartFailed;
          }
          else if (hashCode == LambdaFunctionSucceeded_HASH)
          {
            return HistoryEventType::LambdaFunctionSucceeded;
          }
          else if (hashCode == LambdaFunctionTimedOut_HASH)
          {
            return HistoryEventType::LambdaFunctionTimedOut;
          }
          else if (hashCode == MapIterationAborted_HASH)
          {
            return HistoryEventType::MapIterationAborted;
          }
          else if (hashCode == MapIterationFailed_HASH)
          {
            return HistoryEventType::MapIterationFailed;
          }
          else if (hashCode == MapIterationStarted_HASH)
          {
            return HistoryEventType::MapIterationStarted;
          }
          else if (hashCode == MapIterationSucceeded_HASH)
          {
            return HistoryEventType::MapIterationSucceeded;
          }
          else if (hashCode == MapStateAborted_HASH)
          {
            return HistoryEventType::MapStateAborted;
          }
          else if (hashCode == MapStateEntered_HASH)
          {
            return HistoryEventType::MapStateEntered;
          }
          else if (hashCode == MapStateExited_HASH)
          {
            return HistoryEventType::MapStateExited;
          }
          else if (hashCode == MapStateFailed_HASH)
          {
            return HistoryEventType::MapStateFailed;
          }
          else if (hashCode == MapStateStarted_HASH)
          {
            return HistoryEventType::MapStateStarted;
          }
          else if (hashCode == MapStateSucceeded_HASH)
          {
            return HistoryEventType::MapStateSucceeded;
          }
          else if (hashCode == ParallelStateAborted_HASH)
          {
            return HistoryEventType::ParallelStateAborted;
          }
          else if (hashCode == ParallelStateEntered_HASH)
          {
            return HistoryEventType::ParallelStateEntered;
          }
          else if (hashCode == ParallelStateExited_HASH)
          {
            return HistoryEventType::ParallelStateExited;
          }
          else if (hashCode == ParallelStateFailed_HASH)
          {
            return HistoryEventType::ParallelStateFailed;
          }
          else if (hashCode == ParallelStateStarted_HASH)
          {
            return HistoryEventType::ParallelStateStarted;
          }
          else if (hashCode == ParallelStateSucceeded_HASH)
          {
            return HistoryEventType::ParallelStateSucceeded;
          }
          else if (hashCode == PassStateEntered_HASH)
          {
            return HistoryEventType::PassStateEntered;
          }
          else if (hashCode == PassStateExited_HASH)
          {
            return HistoryEventType::PassStateExited;
          }
          else if (hashCode == SucceedStateEntered_HASH)
          {
            return HistoryEventType::SucceedStateEntered;
          }
          else if (hashCode == SucceedStateExited_HASH)
          {
            return HistoryEventType::SucceedStateExited;
          }
          else if (hashCode == TaskFailed_HASH)
          {
            return HistoryEventType::TaskFailed;
          }
          else if (hashCode == TaskScheduled_HASH)
          {
            return HistoryEventType::TaskScheduled;
          }
          else if (hashCode == TaskStarted_HASH)
          {
            return HistoryEventType::TaskStarted;
          }
          else if (hashCode == TaskStartFailed_HASH)
          {
            return HistoryEventType::TaskStartFailed;
          }
          else if (hashCode == TaskStateAborted_HASH)
          {
            return HistoryEventType::TaskStateAborted;
          }
          else if (hashCode == TaskStateEntered_HASH)
          {
            return HistoryEventType::TaskStateEntered;
          }
          else if (hashCode == TaskStateExited_HASH)
          {
            return HistoryEventType::TaskStateExited;
          }
          else if (hashCode == TaskSubmitFailed_HASH)
          {
            return HistoryEventType::TaskSubmitFailed;
          }
          else if (hashCode == TaskSubmitted_HASH)
          {
            return HistoryEventType::TaskSubmitted;
          }
          else if (hashCode == TaskSucceeded_HASH)
          {
            return HistoryEventType::TaskSucceeded;
          }
          else if (hashCode == TaskTimedOut_HASH)
          {
            return HistoryEventType::TaskTimedOut;
          }
          else if (hashCode == WaitStateAborted_HASH)
          {
            return HistoryEventType::WaitStateAborted;
          }
          else if (hashCode == WaitStateEntered_HASH)
          {
            return HistoryEventType::WaitStateEntered;
          }
          else if (hashCode == WaitStateExited_HASH)
          {
            return HistoryEventType::WaitStateExited;
          }
          else if (hashCode == MapRunAborted_HASH)
          {
            return HistoryEventType::MapRunAborted;
          }
          else if (hashCode == MapRunFailed_HASH)
          {
            return HistoryEventType::MapRunFailed;
          }
          else if (hashCode == MapRunStarted_HASH)
          {
            return HistoryEventType::MapRunStarted;
          }
          else if (hashCode == MapRunSucceeded_HASH)
          {
            return HistoryEventType::MapRunSucceeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HistoryEventType>(hashCode);
          }

          return HistoryEventType::NOT_SET;
        }

        Aws::String GetNameForHistoryEventType(HistoryEventType enumValue)
        {
          switch(enumValue)
          {
          case HistoryEventType::NOT_SET:
            return {};
          case HistoryEventType::ActivityFailed:
            return "ActivityFailed";
          case HistoryEventType::ActivityScheduled:
            return "ActivityScheduled";
          case HistoryEventType::ActivityScheduleFailed:
            return "ActivityScheduleFailed";
          case HistoryEventType::ActivityStarted:
            return "ActivityStarted";
          case HistoryEventType::ActivitySucceeded:
            return "ActivitySucceeded";
          case HistoryEventType::ActivityTimedOut:
            return "ActivityTimedOut";
          case HistoryEventType::ChoiceStateEntered:
            return "ChoiceStateEntered";
          case HistoryEventType::ChoiceStateExited:
            return "ChoiceStateExited";
          case HistoryEventType::ExecutionAborted:
            return "ExecutionAborted";
          case HistoryEventType::ExecutionFailed:
            return "ExecutionFailed";
          case HistoryEventType::ExecutionStarted:
            return "ExecutionStarted";
          case HistoryEventType::ExecutionSucceeded:
            return "ExecutionSucceeded";
          case HistoryEventType::ExecutionTimedOut:
            return "ExecutionTimedOut";
          case HistoryEventType::FailStateEntered:
            return "FailStateEntered";
          case HistoryEventType::LambdaFunctionFailed:
            return "LambdaFunctionFailed";
          case HistoryEventType::LambdaFunctionScheduled:
            return "LambdaFunctionScheduled";
          case HistoryEventType::LambdaFunctionScheduleFailed:
            return "LambdaFunctionScheduleFailed";
          case HistoryEventType::LambdaFunctionStarted:
            return "LambdaFunctionStarted";
          case HistoryEventType::LambdaFunctionStartFailed:
            return "LambdaFunctionStartFailed";
          case HistoryEventType::LambdaFunctionSucceeded:
            return "LambdaFunctionSucceeded";
          case HistoryEventType::LambdaFunctionTimedOut:
            return "LambdaFunctionTimedOut";
          case HistoryEventType::MapIterationAborted:
            return "MapIterationAborted";
          case HistoryEventType::MapIterationFailed:
            return "MapIterationFailed";
          case HistoryEventType::MapIterationStarted:
            return "MapIterationStarted";
          case HistoryEventType::MapIterationSucceeded:
            return "MapIterationSucceeded";
          case HistoryEventType::MapStateAborted:
            return "MapStateAborted";
          case HistoryEventType::MapStateEntered:
            return "MapStateEntered";
          case HistoryEventType::MapStateExited:
            return "MapStateExited";
          case HistoryEventType::MapStateFailed:
            return "MapStateFailed";
          case HistoryEventType::MapStateStarted:
            return "MapStateStarted";
          case HistoryEventType::MapStateSucceeded:
            return "MapStateSucceeded";
          case HistoryEventType::ParallelStateAborted:
            return "ParallelStateAborted";
          case HistoryEventType::ParallelStateEntered:
            return "ParallelStateEntered";
          case HistoryEventType::ParallelStateExited:
            return "ParallelStateExited";
          case HistoryEventType::ParallelStateFailed:
            return "ParallelStateFailed";
          case HistoryEventType::ParallelStateStarted:
            return "ParallelStateStarted";
          case HistoryEventType::ParallelStateSucceeded:
            return "ParallelStateSucceeded";
          case HistoryEventType::PassStateEntered:
            return "PassStateEntered";
          case HistoryEventType::PassStateExited:
            return "PassStateExited";
          case HistoryEventType::SucceedStateEntered:
            return "SucceedStateEntered";
          case HistoryEventType::SucceedStateExited:
            return "SucceedStateExited";
          case HistoryEventType::TaskFailed:
            return "TaskFailed";
          case HistoryEventType::TaskScheduled:
            return "TaskScheduled";
          case HistoryEventType::TaskStarted:
            return "TaskStarted";
          case HistoryEventType::TaskStartFailed:
            return "TaskStartFailed";
          case HistoryEventType::TaskStateAborted:
            return "TaskStateAborted";
          case HistoryEventType::TaskStateEntered:
            return "TaskStateEntered";
          case HistoryEventType::TaskStateExited:
            return "TaskStateExited";
          case HistoryEventType::TaskSubmitFailed:
            return "TaskSubmitFailed";
          case HistoryEventType::TaskSubmitted:
            return "TaskSubmitted";
          case HistoryEventType::TaskSucceeded:
            return "TaskSucceeded";
          case HistoryEventType::TaskTimedOut:
            return "TaskTimedOut";
          case HistoryEventType::WaitStateAborted:
            return "WaitStateAborted";
          case HistoryEventType::WaitStateEntered:
            return "WaitStateEntered";
          case HistoryEventType::WaitStateExited:
            return "WaitStateExited";
          case HistoryEventType::MapRunAborted:
            return "MapRunAborted";
          case HistoryEventType::MapRunFailed:
            return "MapRunFailed";
          case HistoryEventType::MapRunStarted:
            return "MapRunStarted";
          case HistoryEventType::MapRunSucceeded:
            return "MapRunSucceeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HistoryEventTypeMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
