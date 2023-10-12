/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/TemplateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace TemplateTypeMapper
      {

        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");
        static constexpr uint32_t SMS_HASH = ConstExprHashingUtils::HashString("SMS");
        static constexpr uint32_t VOICE_HASH = ConstExprHashingUtils::HashString("VOICE");
        static constexpr uint32_t PUSH_HASH = ConstExprHashingUtils::HashString("PUSH");
        static constexpr uint32_t INAPP_HASH = ConstExprHashingUtils::HashString("INAPP");


        TemplateType GetTemplateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_HASH)
          {
            return TemplateType::EMAIL;
          }
          else if (hashCode == SMS_HASH)
          {
            return TemplateType::SMS;
          }
          else if (hashCode == VOICE_HASH)
          {
            return TemplateType::VOICE;
          }
          else if (hashCode == PUSH_HASH)
          {
            return TemplateType::PUSH;
          }
          else if (hashCode == INAPP_HASH)
          {
            return TemplateType::INAPP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateType>(hashCode);
          }

          return TemplateType::NOT_SET;
        }

        Aws::String GetNameForTemplateType(TemplateType enumValue)
        {
          switch(enumValue)
          {
          case TemplateType::NOT_SET:
            return {};
          case TemplateType::EMAIL:
            return "EMAIL";
          case TemplateType::SMS:
            return "SMS";
          case TemplateType::VOICE:
            return "VOICE";
          case TemplateType::PUSH:
            return "PUSH";
          case TemplateType::INAPP:
            return "INAPP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
