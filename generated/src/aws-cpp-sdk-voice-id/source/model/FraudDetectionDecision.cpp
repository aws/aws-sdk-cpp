/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/FraudDetectionDecision.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace FraudDetectionDecisionMapper
      {

        static const int HIGH_RISK_HASH = HashingUtils::HashString("HIGH_RISK");
        static const int LOW_RISK_HASH = HashingUtils::HashString("LOW_RISK");
        static const int NOT_ENOUGH_SPEECH_HASH = HashingUtils::HashString("NOT_ENOUGH_SPEECH");


        FraudDetectionDecision GetFraudDetectionDecisionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_RISK_HASH)
          {
            return FraudDetectionDecision::HIGH_RISK;
          }
          else if (hashCode == LOW_RISK_HASH)
          {
            return FraudDetectionDecision::LOW_RISK;
          }
          else if (hashCode == NOT_ENOUGH_SPEECH_HASH)
          {
            return FraudDetectionDecision::NOT_ENOUGH_SPEECH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FraudDetectionDecision>(hashCode);
          }

          return FraudDetectionDecision::NOT_SET;
        }

        Aws::String GetNameForFraudDetectionDecision(FraudDetectionDecision enumValue)
        {
          switch(enumValue)
          {
          case FraudDetectionDecision::NOT_SET:
            return {};
          case FraudDetectionDecision::HIGH_RISK:
            return "HIGH_RISK";
          case FraudDetectionDecision::LOW_RISK:
            return "LOW_RISK";
          case FraudDetectionDecision::NOT_ENOUGH_SPEECH:
            return "NOT_ENOUGH_SPEECH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FraudDetectionDecisionMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
