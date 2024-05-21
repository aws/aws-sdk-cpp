/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleVerdictAttribute.h>
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
      namespace RuleVerdictAttributeMapper
      {

        static const int SPF_HASH = HashingUtils::HashString("SPF");
        static const int DKIM_HASH = HashingUtils::HashString("DKIM");


        RuleVerdictAttribute GetRuleVerdictAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPF_HASH)
          {
            return RuleVerdictAttribute::SPF;
          }
          else if (hashCode == DKIM_HASH)
          {
            return RuleVerdictAttribute::DKIM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleVerdictAttribute>(hashCode);
          }

          return RuleVerdictAttribute::NOT_SET;
        }

        Aws::String GetNameForRuleVerdictAttribute(RuleVerdictAttribute enumValue)
        {
          switch(enumValue)
          {
          case RuleVerdictAttribute::NOT_SET:
            return {};
          case RuleVerdictAttribute::SPF:
            return "SPF";
          case RuleVerdictAttribute::DKIM:
            return "DKIM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleVerdictAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
