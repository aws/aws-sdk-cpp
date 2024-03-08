/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AssessmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace AssessmentStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Success_HASH = HashingUtils::HashString("Success");


        AssessmentStatus GetAssessmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return AssessmentStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AssessmentStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return AssessmentStatus::Failed;
          }
          else if (hashCode == Success_HASH)
          {
            return AssessmentStatus::Success;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentStatus>(hashCode);
          }

          return AssessmentStatus::NOT_SET;
        }

        Aws::String GetNameForAssessmentStatus(AssessmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AssessmentStatus::NOT_SET:
            return {};
          case AssessmentStatus::Pending:
            return "Pending";
          case AssessmentStatus::InProgress:
            return "InProgress";
          case AssessmentStatus::Failed:
            return "Failed";
          case AssessmentStatus::Success:
            return "Success";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentStatusMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
