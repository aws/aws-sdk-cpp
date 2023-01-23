/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ChangeTokenStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace ChangeTokenStatusMapper
      {

        static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int INSYNC_HASH = HashingUtils::HashString("INSYNC");


        ChangeTokenStatus GetChangeTokenStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONED_HASH)
          {
            return ChangeTokenStatus::PROVISIONED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ChangeTokenStatus::PENDING;
          }
          else if (hashCode == INSYNC_HASH)
          {
            return ChangeTokenStatus::INSYNC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeTokenStatus>(hashCode);
          }

          return ChangeTokenStatus::NOT_SET;
        }

        Aws::String GetNameForChangeTokenStatus(ChangeTokenStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangeTokenStatus::PROVISIONED:
            return "PROVISIONED";
          case ChangeTokenStatus::PENDING:
            return "PENDING";
          case ChangeTokenStatus::INSYNC:
            return "INSYNC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeTokenStatusMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws
