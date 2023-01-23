/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/UsageLimitBreachAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace UsageLimitBreachActionMapper
      {

        static const int log_HASH = HashingUtils::HashString("log");
        static const int emit_metric_HASH = HashingUtils::HashString("emit-metric");
        static const int disable_HASH = HashingUtils::HashString("disable");


        UsageLimitBreachAction GetUsageLimitBreachActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == log_HASH)
          {
            return UsageLimitBreachAction::log;
          }
          else if (hashCode == emit_metric_HASH)
          {
            return UsageLimitBreachAction::emit_metric;
          }
          else if (hashCode == disable_HASH)
          {
            return UsageLimitBreachAction::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageLimitBreachAction>(hashCode);
          }

          return UsageLimitBreachAction::NOT_SET;
        }

        Aws::String GetNameForUsageLimitBreachAction(UsageLimitBreachAction enumValue)
        {
          switch(enumValue)
          {
          case UsageLimitBreachAction::log:
            return "log";
          case UsageLimitBreachAction::emit_metric:
            return "emit-metric";
          case UsageLimitBreachAction::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageLimitBreachActionMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
