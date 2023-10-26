/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53RecoveryControlConfig
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int DEPLOYED_HASH = HashingUtils::HashString("DEPLOYED");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return Status::PENDING;
          }
          else if (hashCode == DEPLOYED_HASH)
          {
            return Status::DEPLOYED;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return Status::PENDING_DELETION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::NOT_SET:
            return {};
          case Status::PENDING:
            return "PENDING";
          case Status::DEPLOYED:
            return "DEPLOYED";
          case Status::PENDING_DELETION:
            return "PENDING_DELETION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace Route53RecoveryControlConfig
} // namespace Aws
