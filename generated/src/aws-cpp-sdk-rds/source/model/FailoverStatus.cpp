/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/FailoverStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace FailoverStatusMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int failing_over_HASH = HashingUtils::HashString("failing-over");
        static const int cancelling_HASH = HashingUtils::HashString("cancelling");


        FailoverStatus GetFailoverStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return FailoverStatus::pending;
          }
          else if (hashCode == failing_over_HASH)
          {
            return FailoverStatus::failing_over;
          }
          else if (hashCode == cancelling_HASH)
          {
            return FailoverStatus::cancelling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailoverStatus>(hashCode);
          }

          return FailoverStatus::NOT_SET;
        }

        Aws::String GetNameForFailoverStatus(FailoverStatus enumValue)
        {
          switch(enumValue)
          {
          case FailoverStatus::NOT_SET:
            return {};
          case FailoverStatus::pending:
            return "pending";
          case FailoverStatus::failing_over:
            return "failing-over";
          case FailoverStatus::cancelling:
            return "cancelling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailoverStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
