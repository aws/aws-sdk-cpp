/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/KeywordFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace KeywordFilterNameMapper
      {

        static const int keyword_action_HASH = HashingUtils::HashString("keyword-action");


        KeywordFilterName GetKeywordFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == keyword_action_HASH)
          {
            return KeywordFilterName::keyword_action;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeywordFilterName>(hashCode);
          }

          return KeywordFilterName::NOT_SET;
        }

        Aws::String GetNameForKeywordFilterName(KeywordFilterName enumValue)
        {
          switch(enumValue)
          {
          case KeywordFilterName::NOT_SET:
            return {};
          case KeywordFilterName::keyword_action:
            return "keyword-action";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeywordFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
