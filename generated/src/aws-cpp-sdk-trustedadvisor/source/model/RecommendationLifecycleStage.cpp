/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationLifecycleStage.h>
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
      namespace RecommendationLifecycleStageMapper
      {

        static const int in_progress_HASH = HashingUtils::HashString("in_progress");
        static const int pending_response_HASH = HashingUtils::HashString("pending_response");
        static const int dismissed_HASH = HashingUtils::HashString("dismissed");
        static const int resolved_HASH = HashingUtils::HashString("resolved");


        RecommendationLifecycleStage GetRecommendationLifecycleStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == in_progress_HASH)
          {
            return RecommendationLifecycleStage::in_progress;
          }
          else if (hashCode == pending_response_HASH)
          {
            return RecommendationLifecycleStage::pending_response;
          }
          else if (hashCode == dismissed_HASH)
          {
            return RecommendationLifecycleStage::dismissed;
          }
          else if (hashCode == resolved_HASH)
          {
            return RecommendationLifecycleStage::resolved;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationLifecycleStage>(hashCode);
          }

          return RecommendationLifecycleStage::NOT_SET;
        }

        Aws::String GetNameForRecommendationLifecycleStage(RecommendationLifecycleStage enumValue)
        {
          switch(enumValue)
          {
          case RecommendationLifecycleStage::NOT_SET:
            return {};
          case RecommendationLifecycleStage::in_progress:
            return "in_progress";
          case RecommendationLifecycleStage::pending_response:
            return "pending_response";
          case RecommendationLifecycleStage::dismissed:
            return "dismissed";
          case RecommendationLifecycleStage::resolved:
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

      } // namespace RecommendationLifecycleStageMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
