/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleBooleanEmailAttribute.h>
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
      namespace RuleBooleanEmailAttributeMapper
      {

        static const int READ_RECEIPT_REQUESTED_HASH = HashingUtils::HashString("READ_RECEIPT_REQUESTED");
        static const int TLS_HASH = HashingUtils::HashString("TLS");
        static const int TLS_WRAPPED_HASH = HashingUtils::HashString("TLS_WRAPPED");


        RuleBooleanEmailAttribute GetRuleBooleanEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_RECEIPT_REQUESTED_HASH)
          {
            return RuleBooleanEmailAttribute::READ_RECEIPT_REQUESTED;
          }
          else if (hashCode == TLS_HASH)
          {
            return RuleBooleanEmailAttribute::TLS;
          }
          else if (hashCode == TLS_WRAPPED_HASH)
          {
            return RuleBooleanEmailAttribute::TLS_WRAPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleBooleanEmailAttribute>(hashCode);
          }

          return RuleBooleanEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForRuleBooleanEmailAttribute(RuleBooleanEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case RuleBooleanEmailAttribute::NOT_SET:
            return {};
          case RuleBooleanEmailAttribute::READ_RECEIPT_REQUESTED:
            return "READ_RECEIPT_REQUESTED";
          case RuleBooleanEmailAttribute::TLS:
            return "TLS";
          case RuleBooleanEmailAttribute::TLS_WRAPPED:
            return "TLS_WRAPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleBooleanEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
