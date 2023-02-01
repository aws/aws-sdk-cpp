/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/Sentiment.h>
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
      namespace SentimentMapper
      {

        static const int POSITIVE_HASH = HashingUtils::HashString("POSITIVE");
        static const int NEGATIVE_HASH = HashingUtils::HashString("NEGATIVE");
        static const int MIXED_HASH = HashingUtils::HashString("MIXED");
        static const int NEUTRAL_HASH = HashingUtils::HashString("NEUTRAL");


        Sentiment GetSentimentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POSITIVE_HASH)
          {
            return Sentiment::POSITIVE;
          }
          else if (hashCode == NEGATIVE_HASH)
          {
            return Sentiment::NEGATIVE;
          }
          else if (hashCode == MIXED_HASH)
          {
            return Sentiment::MIXED;
          }
          else if (hashCode == NEUTRAL_HASH)
          {
            return Sentiment::NEUTRAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Sentiment>(hashCode);
          }

          return Sentiment::NOT_SET;
        }

        Aws::String GetNameForSentiment(Sentiment enumValue)
        {
          switch(enumValue)
          {
          case Sentiment::POSITIVE:
            return "POSITIVE";
          case Sentiment::NEGATIVE:
            return "NEGATIVE";
          case Sentiment::MIXED:
            return "MIXED";
          case Sentiment::NEUTRAL:
            return "NEUTRAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SentimentMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
