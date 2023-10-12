/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RuleEvaluationStatus.h>
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
      namespace RuleEvaluationStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t NoIssuesFound_HASH = ConstExprHashingUtils::HashString("NoIssuesFound");
        static constexpr uint32_t IssuesFound_HASH = ConstExprHashingUtils::HashString("IssuesFound");
        static constexpr uint32_t Error_HASH = ConstExprHashingUtils::HashString("Error");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        RuleEvaluationStatus GetRuleEvaluationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return RuleEvaluationStatus::InProgress;
          }
          else if (hashCode == NoIssuesFound_HASH)
          {
            return RuleEvaluationStatus::NoIssuesFound;
          }
          else if (hashCode == IssuesFound_HASH)
          {
            return RuleEvaluationStatus::IssuesFound;
          }
          else if (hashCode == Error_HASH)
          {
            return RuleEvaluationStatus::Error;
          }
          else if (hashCode == Stopping_HASH)
          {
            return RuleEvaluationStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return RuleEvaluationStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleEvaluationStatus>(hashCode);
          }

          return RuleEvaluationStatus::NOT_SET;
        }

        Aws::String GetNameForRuleEvaluationStatus(RuleEvaluationStatus enumValue)
        {
          switch(enumValue)
          {
          case RuleEvaluationStatus::NOT_SET:
            return {};
          case RuleEvaluationStatus::InProgress:
            return "InProgress";
          case RuleEvaluationStatus::NoIssuesFound:
            return "NoIssuesFound";
          case RuleEvaluationStatus::IssuesFound:
            return "IssuesFound";
          case RuleEvaluationStatus::Error:
            return "Error";
          case RuleEvaluationStatus::Stopping:
            return "Stopping";
          case RuleEvaluationStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleEvaluationStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
