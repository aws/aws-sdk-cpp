/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/StatusFlag.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace StatusFlagMapper
      {

        static const int PENDING_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ACCEPTANCE");
        static const int PENDING_CUSTOMER_ACTION_HASH = HashingUtils::HashString("PENDING_CUSTOMER_ACTION");
        static const int PENDING_AUTHORIZATION_HASH = HashingUtils::HashString("PENDING_AUTHORIZATION");
        static const int PENDING_PAYMENT_VERIFICATION_HASH = HashingUtils::HashString("PENDING_PAYMENT_VERIFICATION");
        static const int PENDING_SUPPORT_CASE_HASH = HashingUtils::HashString("PENDING_SUPPORT_CASE");


        StatusFlag GetStatusFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_ACCEPTANCE_HASH)
          {
            return StatusFlag::PENDING_ACCEPTANCE;
          }
          else if (hashCode == PENDING_CUSTOMER_ACTION_HASH)
          {
            return StatusFlag::PENDING_CUSTOMER_ACTION;
          }
          else if (hashCode == PENDING_AUTHORIZATION_HASH)
          {
            return StatusFlag::PENDING_AUTHORIZATION;
          }
          else if (hashCode == PENDING_PAYMENT_VERIFICATION_HASH)
          {
            return StatusFlag::PENDING_PAYMENT_VERIFICATION;
          }
          else if (hashCode == PENDING_SUPPORT_CASE_HASH)
          {
            return StatusFlag::PENDING_SUPPORT_CASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusFlag>(hashCode);
          }

          return StatusFlag::NOT_SET;
        }

        Aws::String GetNameForStatusFlag(StatusFlag enumValue)
        {
          switch(enumValue)
          {
          case StatusFlag::PENDING_ACCEPTANCE:
            return "PENDING_ACCEPTANCE";
          case StatusFlag::PENDING_CUSTOMER_ACTION:
            return "PENDING_CUSTOMER_ACTION";
          case StatusFlag::PENDING_AUTHORIZATION:
            return "PENDING_AUTHORIZATION";
          case StatusFlag::PENDING_PAYMENT_VERIFICATION:
            return "PENDING_PAYMENT_VERIFICATION";
          case StatusFlag::PENDING_SUPPORT_CASE:
            return "PENDING_SUPPORT_CASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusFlagMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
