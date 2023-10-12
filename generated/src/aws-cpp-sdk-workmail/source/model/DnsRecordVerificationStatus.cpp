/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DnsRecordVerificationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace DnsRecordVerificationStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t VERIFIED_HASH = ConstExprHashingUtils::HashString("VERIFIED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        DnsRecordVerificationStatus GetDnsRecordVerificationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DnsRecordVerificationStatus::PENDING;
          }
          else if (hashCode == VERIFIED_HASH)
          {
            return DnsRecordVerificationStatus::VERIFIED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DnsRecordVerificationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsRecordVerificationStatus>(hashCode);
          }

          return DnsRecordVerificationStatus::NOT_SET;
        }

        Aws::String GetNameForDnsRecordVerificationStatus(DnsRecordVerificationStatus enumValue)
        {
          switch(enumValue)
          {
          case DnsRecordVerificationStatus::NOT_SET:
            return {};
          case DnsRecordVerificationStatus::PENDING:
            return "PENDING";
          case DnsRecordVerificationStatus::VERIFIED:
            return "VERIFIED";
          case DnsRecordVerificationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsRecordVerificationStatusMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
