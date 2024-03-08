/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationStatus.h>
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
      namespace RecommendationStatusMapper
      {

        static const int ok_HASH = HashingUtils::HashString("ok");
        static const int warning_HASH = HashingUtils::HashString("warning");
        static const int error_HASH = HashingUtils::HashString("error");


        RecommendationStatus GetRecommendationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ok_HASH)
          {
            return RecommendationStatus::ok;
          }
          else if (hashCode == warning_HASH)
          {
            return RecommendationStatus::warning;
          }
          else if (hashCode == error_HASH)
          {
            return RecommendationStatus::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationStatus>(hashCode);
          }

          return RecommendationStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationStatus(RecommendationStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationStatus::NOT_SET:
            return {};
          case RecommendationStatus::ok:
            return "ok";
          case RecommendationStatus::warning:
            return "warning";
          case RecommendationStatus::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationStatusMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
