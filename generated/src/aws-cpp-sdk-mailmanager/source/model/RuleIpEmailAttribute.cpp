/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleIpEmailAttribute.h>
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
      namespace RuleIpEmailAttributeMapper
      {

        static const int SOURCE_IP_HASH = HashingUtils::HashString("SOURCE_IP");


        RuleIpEmailAttribute GetRuleIpEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_IP_HASH)
          {
            return RuleIpEmailAttribute::SOURCE_IP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleIpEmailAttribute>(hashCode);
          }

          return RuleIpEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForRuleIpEmailAttribute(RuleIpEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case RuleIpEmailAttribute::NOT_SET:
            return {};
          case RuleIpEmailAttribute::SOURCE_IP:
            return "SOURCE_IP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleIpEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
