/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/RuleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RecycleBin
  {
    namespace Model
    {
      namespace RuleStatusMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");


        RuleStatus GetRuleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return RuleStatus::pending;
          }
          else if (hashCode == available_HASH)
          {
            return RuleStatus::available;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleStatus>(hashCode);
          }

          return RuleStatus::NOT_SET;
        }

        Aws::String GetNameForRuleStatus(RuleStatus enumValue)
        {
          switch(enumValue)
          {
          case RuleStatus::NOT_SET:
            return {};
          case RuleStatus::pending:
            return "pending";
          case RuleStatus::available:
            return "available";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleStatusMapper
    } // namespace Model
  } // namespace RecycleBin
} // namespace Aws
