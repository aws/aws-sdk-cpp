/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MailFromDomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace MailFromDomainStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TEMPORARY_FAILURE_HASH = HashingUtils::HashString("TEMPORARY_FAILURE");


        MailFromDomainStatus GetMailFromDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MailFromDomainStatus::PENDING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return MailFromDomainStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MailFromDomainStatus::FAILED;
          }
          else if (hashCode == TEMPORARY_FAILURE_HASH)
          {
            return MailFromDomainStatus::TEMPORARY_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MailFromDomainStatus>(hashCode);
          }

          return MailFromDomainStatus::NOT_SET;
        }

        Aws::String GetNameForMailFromDomainStatus(MailFromDomainStatus enumValue)
        {
          switch(enumValue)
          {
          case MailFromDomainStatus::PENDING:
            return "PENDING";
          case MailFromDomainStatus::SUCCESS:
            return "SUCCESS";
          case MailFromDomainStatus::FAILED:
            return "FAILED";
          case MailFromDomainStatus::TEMPORARY_FAILURE:
            return "TEMPORARY_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MailFromDomainStatusMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
