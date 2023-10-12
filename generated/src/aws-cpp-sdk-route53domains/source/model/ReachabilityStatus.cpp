/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ReachabilityStatus.h>
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
      namespace ReachabilityStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t DONE_HASH = ConstExprHashingUtils::HashString("DONE");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        ReachabilityStatus GetReachabilityStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ReachabilityStatus::PENDING;
          }
          else if (hashCode == DONE_HASH)
          {
            return ReachabilityStatus::DONE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ReachabilityStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReachabilityStatus>(hashCode);
          }

          return ReachabilityStatus::NOT_SET;
        }

        Aws::String GetNameForReachabilityStatus(ReachabilityStatus enumValue)
        {
          switch(enumValue)
          {
          case ReachabilityStatus::NOT_SET:
            return {};
          case ReachabilityStatus::PENDING:
            return "PENDING";
          case ReachabilityStatus::DONE:
            return "DONE";
          case ReachabilityStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReachabilityStatusMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
