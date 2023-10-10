/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ExcludeRecommendationReason.h>
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
      namespace ExcludeRecommendationReasonMapper
      {

        static const int AlreadyImplemented_HASH = HashingUtils::HashString("AlreadyImplemented");
        static const int NotRelevant_HASH = HashingUtils::HashString("NotRelevant");
        static const int ComplexityOfImplementation_HASH = HashingUtils::HashString("ComplexityOfImplementation");


        ExcludeRecommendationReason GetExcludeRecommendationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AlreadyImplemented_HASH)
          {
            return ExcludeRecommendationReason::AlreadyImplemented;
          }
          else if (hashCode == NotRelevant_HASH)
          {
            return ExcludeRecommendationReason::NotRelevant;
          }
          else if (hashCode == ComplexityOfImplementation_HASH)
          {
            return ExcludeRecommendationReason::ComplexityOfImplementation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExcludeRecommendationReason>(hashCode);
          }

          return ExcludeRecommendationReason::NOT_SET;
        }

        Aws::String GetNameForExcludeRecommendationReason(ExcludeRecommendationReason enumValue)
        {
          switch(enumValue)
          {
          case ExcludeRecommendationReason::NOT_SET:
            return {};
          case ExcludeRecommendationReason::AlreadyImplemented:
            return "AlreadyImplemented";
          case ExcludeRecommendationReason::NotRelevant:
            return "NotRelevant";
          case ExcludeRecommendationReason::ComplexityOfImplementation:
            return "ComplexityOfImplementation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExcludeRecommendationReasonMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
