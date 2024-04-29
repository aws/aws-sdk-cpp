/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsSkippedReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace CallAnalyticsSkippedReasonCodeMapper
      {

        static const int INSUFFICIENT_CONVERSATION_CONTENT_HASH = HashingUtils::HashString("INSUFFICIENT_CONVERSATION_CONTENT");
        static const int FAILED_SAFETY_GUIDELINES_HASH = HashingUtils::HashString("FAILED_SAFETY_GUIDELINES");


        CallAnalyticsSkippedReasonCode GetCallAnalyticsSkippedReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSUFFICIENT_CONVERSATION_CONTENT_HASH)
          {
            return CallAnalyticsSkippedReasonCode::INSUFFICIENT_CONVERSATION_CONTENT;
          }
          else if (hashCode == FAILED_SAFETY_GUIDELINES_HASH)
          {
            return CallAnalyticsSkippedReasonCode::FAILED_SAFETY_GUIDELINES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallAnalyticsSkippedReasonCode>(hashCode);
          }

          return CallAnalyticsSkippedReasonCode::NOT_SET;
        }

        Aws::String GetNameForCallAnalyticsSkippedReasonCode(CallAnalyticsSkippedReasonCode enumValue)
        {
          switch(enumValue)
          {
          case CallAnalyticsSkippedReasonCode::NOT_SET:
            return {};
          case CallAnalyticsSkippedReasonCode::INSUFFICIENT_CONVERSATION_CONTENT:
            return "INSUFFICIENT_CONVERSATION_CONTENT";
          case CallAnalyticsSkippedReasonCode::FAILED_SAFETY_GUIDELINES:
            return "FAILED_SAFETY_GUIDELINES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallAnalyticsSkippedReasonCodeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
