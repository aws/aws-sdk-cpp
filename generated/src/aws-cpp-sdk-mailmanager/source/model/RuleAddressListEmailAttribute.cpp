/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleAddressListEmailAttribute.h>
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
      namespace RuleAddressListEmailAttributeMapper
      {

        static const int RECIPIENT_HASH = HashingUtils::HashString("RECIPIENT");
        static const int MAIL_FROM_HASH = HashingUtils::HashString("MAIL_FROM");
        static const int SENDER_HASH = HashingUtils::HashString("SENDER");
        static const int FROM_HASH = HashingUtils::HashString("FROM");
        static const int TO_HASH = HashingUtils::HashString("TO");
        static const int CC_HASH = HashingUtils::HashString("CC");


        RuleAddressListEmailAttribute GetRuleAddressListEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECIPIENT_HASH)
          {
            return RuleAddressListEmailAttribute::RECIPIENT;
          }
          else if (hashCode == MAIL_FROM_HASH)
          {
            return RuleAddressListEmailAttribute::MAIL_FROM;
          }
          else if (hashCode == SENDER_HASH)
          {
            return RuleAddressListEmailAttribute::SENDER;
          }
          else if (hashCode == FROM_HASH)
          {
            return RuleAddressListEmailAttribute::FROM;
          }
          else if (hashCode == TO_HASH)
          {
            return RuleAddressListEmailAttribute::TO;
          }
          else if (hashCode == CC_HASH)
          {
            return RuleAddressListEmailAttribute::CC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleAddressListEmailAttribute>(hashCode);
          }

          return RuleAddressListEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForRuleAddressListEmailAttribute(RuleAddressListEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case RuleAddressListEmailAttribute::NOT_SET:
            return {};
          case RuleAddressListEmailAttribute::RECIPIENT:
            return "RECIPIENT";
          case RuleAddressListEmailAttribute::MAIL_FROM:
            return "MAIL_FROM";
          case RuleAddressListEmailAttribute::SENDER:
            return "SENDER";
          case RuleAddressListEmailAttribute::FROM:
            return "FROM";
          case RuleAddressListEmailAttribute::TO:
            return "TO";
          case RuleAddressListEmailAttribute::CC:
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

      } // namespace RuleAddressListEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
