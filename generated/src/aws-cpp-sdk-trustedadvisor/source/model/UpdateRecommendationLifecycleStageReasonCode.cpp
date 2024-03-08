/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleStageReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TrustedAdvisor
  {
    namespace Model
    {
      namespace UpdateRecommendationLifecycleStageReasonCodeMapper
      {

        static const int non_critical_account_HASH = HashingUtils::HashString("non_critical_account");
        static const int temporary_account_HASH = HashingUtils::HashString("temporary_account");
        static const int valid_business_case_HASH = HashingUtils::HashString("valid_business_case");
        static const int other_methods_available_HASH = HashingUtils::HashString("other_methods_available");
        static const int low_priority_HASH = HashingUtils::HashString("low_priority");
        static const int not_applicable_HASH = HashingUtils::HashString("not_applicable");
        static const int other_HASH = HashingUtils::HashString("other");


        UpdateRecommendationLifecycleStageReasonCode GetUpdateRecommendationLifecycleStageReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == non_critical_account_HASH)
          {
            return UpdateRecommendationLifecycleStageReasonCode::non_critical_account;
          }
          else if (hashCode == temporary_account_HASH)
          {
            return UpdateRecommendationLifecycleStageReasonCode::temporary_account;
          }
          else if (hashCode == valid_business_case_HASH)
          {
            return UpdateRecommendationLifecycleStageReasonCode::valid_business_case;
          }
          else if (hashCode == other_methods_available_HASH)
          {
            return UpdateRecommendationLifecycleStageReasonCode::other_methods_available;
          }
          else if (hashCode == low_priority_HASH)
          {
            return UpdateRecommendationLifecycleStageReasonCode::low_priority;
          }
          else if (hashCode == not_applicable_HASH)
          {
            return UpdateRecommendationLifecycleStageReasonCode::not_applicable;
          }
          else if (hashCode == other_HASH)
          {
            return UpdateRecommendationLifecycleStageReasonCode::other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateRecommendationLifecycleStageReasonCode>(hashCode);
          }

          return UpdateRecommendationLifecycleStageReasonCode::NOT_SET;
        }

        Aws::String GetNameForUpdateRecommendationLifecycleStageReasonCode(UpdateRecommendationLifecycleStageReasonCode enumValue)
        {
          switch(enumValue)
          {
          case UpdateRecommendationLifecycleStageReasonCode::NOT_SET:
            return {};
          case UpdateRecommendationLifecycleStageReasonCode::non_critical_account:
            return "non_critical_account";
          case UpdateRecommendationLifecycleStageReasonCode::temporary_account:
            return "temporary_account";
          case UpdateRecommendationLifecycleStageReasonCode::valid_business_case:
            return "valid_business_case";
          case UpdateRecommendationLifecycleStageReasonCode::other_methods_available:
            return "other_methods_available";
          case UpdateRecommendationLifecycleStageReasonCode::low_priority:
            return "low_priority";
          case UpdateRecommendationLifecycleStageReasonCode::not_applicable:
            return "not_applicable";
          case UpdateRecommendationLifecycleStageReasonCode::other:
            return "other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateRecommendationLifecycleStageReasonCodeMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
