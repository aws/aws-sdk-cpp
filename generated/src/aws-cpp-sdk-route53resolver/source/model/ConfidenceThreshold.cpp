/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ConfidenceThreshold.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ConfidenceThresholdMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        ConfidenceThreshold GetConfidenceThresholdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return ConfidenceThreshold::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ConfidenceThreshold::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return ConfidenceThreshold::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfidenceThreshold>(hashCode);
          }

          return ConfidenceThreshold::NOT_SET;
        }

        Aws::String GetNameForConfidenceThreshold(ConfidenceThreshold enumValue)
        {
          switch(enumValue)
          {
          case ConfidenceThreshold::NOT_SET:
            return {};
          case ConfidenceThreshold::LOW:
            return "LOW";
          case ConfidenceThreshold::MEDIUM:
            return "MEDIUM";
          case ConfidenceThreshold::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfidenceThresholdMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
