/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/FraudDetectionAction.h>
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
      namespace FraudDetectionActionMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");


        FraudDetectionAction GetFraudDetectionActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return FraudDetectionAction::IGNORE;
          }
          else if (hashCode == FAIL_HASH)
          {
            return FraudDetectionAction::FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FraudDetectionAction>(hashCode);
          }

          return FraudDetectionAction::NOT_SET;
        }

        Aws::String GetNameForFraudDetectionAction(FraudDetectionAction enumValue)
        {
          switch(enumValue)
          {
          case FraudDetectionAction::NOT_SET:
            return {};
          case FraudDetectionAction::IGNORE:
            return "IGNORE";
          case FraudDetectionAction::FAIL:
            return "FAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FraudDetectionActionMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
