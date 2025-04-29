/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AccessRequestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AccessRequestStatusMapper
      {

        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int Revoked_HASH = HashingUtils::HashString("Revoked");
        static const int Expired_HASH = HashingUtils::HashString("Expired");
        static const int Pending_HASH = HashingUtils::HashString("Pending");


        AccessRequestStatus GetAccessRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Approved_HASH)
          {
            return AccessRequestStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return AccessRequestStatus::Rejected;
          }
          else if (hashCode == Revoked_HASH)
          {
            return AccessRequestStatus::Revoked;
          }
          else if (hashCode == Expired_HASH)
          {
            return AccessRequestStatus::Expired;
          }
          else if (hashCode == Pending_HASH)
          {
            return AccessRequestStatus::Pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessRequestStatus>(hashCode);
          }

          return AccessRequestStatus::NOT_SET;
        }

        Aws::String GetNameForAccessRequestStatus(AccessRequestStatus enumValue)
        {
          switch(enumValue)
          {
          case AccessRequestStatus::NOT_SET:
            return {};
          case AccessRequestStatus::Approved:
            return "Approved";
          case AccessRequestStatus::Rejected:
            return "Rejected";
          case AccessRequestStatus::Revoked:
            return "Revoked";
          case AccessRequestStatus::Expired:
            return "Expired";
          case AccessRequestStatus::Pending:
            return "Pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessRequestStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
