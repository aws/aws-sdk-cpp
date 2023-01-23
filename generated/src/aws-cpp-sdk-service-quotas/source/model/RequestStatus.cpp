﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/RequestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceQuotas
  {
    namespace Model
    {
      namespace RequestStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CASE_OPENED_HASH = HashingUtils::HashString("CASE_OPENED");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int DENIED_HASH = HashingUtils::HashString("DENIED");
        static const int CASE_CLOSED_HASH = HashingUtils::HashString("CASE_CLOSED");


        RequestStatus GetRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return RequestStatus::PENDING;
          }
          else if (hashCode == CASE_OPENED_HASH)
          {
            return RequestStatus::CASE_OPENED;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return RequestStatus::APPROVED;
          }
          else if (hashCode == DENIED_HASH)
          {
            return RequestStatus::DENIED;
          }
          else if (hashCode == CASE_CLOSED_HASH)
          {
            return RequestStatus::CASE_CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestStatus>(hashCode);
          }

          return RequestStatus::NOT_SET;
        }

        Aws::String GetNameForRequestStatus(RequestStatus enumValue)
        {
          switch(enumValue)
          {
          case RequestStatus::PENDING:
            return "PENDING";
          case RequestStatus::CASE_OPENED:
            return "CASE_OPENED";
          case RequestStatus::APPROVED:
            return "APPROVED";
          case RequestStatus::DENIED:
            return "DENIED";
          case RequestStatus::CASE_CLOSED:
            return "CASE_CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequestStatusMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
