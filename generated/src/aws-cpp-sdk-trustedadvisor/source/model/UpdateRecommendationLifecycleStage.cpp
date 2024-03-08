/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleStage.h>
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
      namespace UpdateRecommendationLifecycleStageMapper
      {

        static const int pending_response_HASH = HashingUtils::HashString("pending_response");
        static const int in_progress_HASH = HashingUtils::HashString("in_progress");
        static const int dismissed_HASH = HashingUtils::HashString("dismissed");
        static const int resolved_HASH = HashingUtils::HashString("resolved");


        UpdateRecommendationLifecycleStage GetUpdateRecommendationLifecycleStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_response_HASH)
          {
            return UpdateRecommendationLifecycleStage::pending_response;
          }
          else if (hashCode == in_progress_HASH)
          {
            return UpdateRecommendationLifecycleStage::in_progress;
          }
          else if (hashCode == dismissed_HASH)
          {
            return UpdateRecommendationLifecycleStage::dismissed;
          }
          else if (hashCode == resolved_HASH)
          {
            return UpdateRecommendationLifecycleStage::resolved;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateRecommendationLifecycleStage>(hashCode);
          }

          return UpdateRecommendationLifecycleStage::NOT_SET;
        }

        Aws::String GetNameForUpdateRecommendationLifecycleStage(UpdateRecommendationLifecycleStage enumValue)
        {
          switch(enumValue)
          {
          case UpdateRecommendationLifecycleStage::NOT_SET:
            return {};
          case UpdateRecommendationLifecycleStage::pending_response:
            return "pending_response";
          case UpdateRecommendationLifecycleStage::in_progress:
            return "in_progress";
          case UpdateRecommendationLifecycleStage::dismissed:
            return "dismissed";
          case UpdateRecommendationLifecycleStage::resolved:
            return "resolved";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateRecommendationLifecycleStageMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
