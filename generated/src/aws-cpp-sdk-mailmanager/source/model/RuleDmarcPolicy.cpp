/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleDmarcPolicy.h>
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
      namespace RuleDmarcPolicyMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int QUARANTINE_HASH = HashingUtils::HashString("QUARANTINE");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");


        RuleDmarcPolicy GetRuleDmarcPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return RuleDmarcPolicy::NONE;
          }
          else if (hashCode == QUARANTINE_HASH)
          {
            return RuleDmarcPolicy::QUARANTINE;
          }
          else if (hashCode == REJECT_HASH)
          {
            return RuleDmarcPolicy::REJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleDmarcPolicy>(hashCode);
          }

          return RuleDmarcPolicy::NOT_SET;
        }

        Aws::String GetNameForRuleDmarcPolicy(RuleDmarcPolicy enumValue)
        {
          switch(enumValue)
          {
          case RuleDmarcPolicy::NOT_SET:
            return {};
          case RuleDmarcPolicy::NONE:
            return "NONE";
          case RuleDmarcPolicy::QUARANTINE:
            return "QUARANTINE";
          case RuleDmarcPolicy::REJECT:
            return "REJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleDmarcPolicyMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
