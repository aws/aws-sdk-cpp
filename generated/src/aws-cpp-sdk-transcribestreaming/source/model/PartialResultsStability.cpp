/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/PartialResultsStability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace PartialResultsStabilityMapper
      {

        static const int high_HASH = HashingUtils::HashString("high");
        static const int medium_HASH = HashingUtils::HashString("medium");
        static const int low_HASH = HashingUtils::HashString("low");


        PartialResultsStability GetPartialResultsStabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == high_HASH)
          {
            return PartialResultsStability::high;
          }
          else if (hashCode == medium_HASH)
          {
            return PartialResultsStability::medium;
          }
          else if (hashCode == low_HASH)
          {
            return PartialResultsStability::low;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartialResultsStability>(hashCode);
          }

          return PartialResultsStability::NOT_SET;
        }

        Aws::String GetNameForPartialResultsStability(PartialResultsStability enumValue)
        {
          switch(enumValue)
          {
          case PartialResultsStability::NOT_SET:
            return {};
          case PartialResultsStability::high:
            return "high";
          case PartialResultsStability::medium:
            return "medium";
          case PartialResultsStability::low:
            return "low";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartialResultsStabilityMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
