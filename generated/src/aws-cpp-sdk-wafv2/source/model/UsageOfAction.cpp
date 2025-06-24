/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/UsageOfAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace UsageOfActionMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        UsageOfAction GetUsageOfActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return UsageOfAction::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return UsageOfAction::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageOfAction>(hashCode);
          }

          return UsageOfAction::NOT_SET;
        }

        Aws::String GetNameForUsageOfAction(UsageOfAction enumValue)
        {
          switch(enumValue)
          {
          case UsageOfAction::NOT_SET:
            return {};
          case UsageOfAction::ENABLED:
            return "ENABLED";
          case UsageOfAction::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageOfActionMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
