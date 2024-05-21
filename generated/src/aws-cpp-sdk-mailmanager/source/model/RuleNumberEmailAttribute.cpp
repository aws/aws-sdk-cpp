/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleNumberEmailAttribute.h>
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
      namespace RuleNumberEmailAttributeMapper
      {

        static const int MESSAGE_SIZE_HASH = HashingUtils::HashString("MESSAGE_SIZE");


        RuleNumberEmailAttribute GetRuleNumberEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MESSAGE_SIZE_HASH)
          {
            return RuleNumberEmailAttribute::MESSAGE_SIZE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleNumberEmailAttribute>(hashCode);
          }

          return RuleNumberEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForRuleNumberEmailAttribute(RuleNumberEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case RuleNumberEmailAttribute::NOT_SET:
            return {};
          case RuleNumberEmailAttribute::MESSAGE_SIZE:
            return "MESSAGE_SIZE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleNumberEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
