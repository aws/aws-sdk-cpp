/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleStringEmailAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace RuleStringEmailAttributeMapper
      {

        static const int MAIL_FROM_HASH = HashingUtils::HashString("MAIL_FROM");
        static const int HELO_HASH = HashingUtils::HashString("HELO");
        static const int RECIPIENT_HASH = HashingUtils::HashString("RECIPIENT");
        static const int SENDER_HASH = HashingUtils::HashString("SENDER");
        static const int FROM_HASH = HashingUtils::HashString("FROM");
        static const int SUBJECT_HASH = HashingUtils::HashString("SUBJECT");
        static const int TO_HASH = HashingUtils::HashString("TO");
        static const int CC_HASH = HashingUtils::HashString("CC");


        RuleStringEmailAttribute GetRuleStringEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAIL_FROM_HASH)
          {
            return RuleStringEmailAttribute::MAIL_FROM;
          }
          else if (hashCode == HELO_HASH)
          {
            return RuleStringEmailAttribute::HELO;
          }
          else if (hashCode == RECIPIENT_HASH)
          {
            return RuleStringEmailAttribute::RECIPIENT;
          }
          else if (hashCode == SENDER_HASH)
          {
            return RuleStringEmailAttribute::SENDER;
          }
          else if (hashCode == FROM_HASH)
          {
            return RuleStringEmailAttribute::FROM;
          }
          else if (hashCode == SUBJECT_HASH)
          {
            return RuleStringEmailAttribute::SUBJECT;
          }
          else if (hashCode == TO_HASH)
          {
            return RuleStringEmailAttribute::TO;
          }
          else if (hashCode == CC_HASH)
          {
            return RuleStringEmailAttribute::CC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleStringEmailAttribute>(hashCode);
          }

          return RuleStringEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForRuleStringEmailAttribute(RuleStringEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case RuleStringEmailAttribute::NOT_SET:
            return {};
          case RuleStringEmailAttribute::MAIL_FROM:
            return "MAIL_FROM";
          case RuleStringEmailAttribute::HELO:
            return "HELO";
          case RuleStringEmailAttribute::RECIPIENT:
            return "RECIPIENT";
          case RuleStringEmailAttribute::SENDER:
            return "SENDER";
          case RuleStringEmailAttribute::FROM:
            return "FROM";
          case RuleStringEmailAttribute::SUBJECT:
            return "SUBJECT";
          case RuleStringEmailAttribute::TO:
            return "TO";
          case RuleStringEmailAttribute::CC:
            return "CC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleStringEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
