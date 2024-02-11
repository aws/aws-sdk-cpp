/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UsageLimitBreachAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace UsageLimitBreachActionMapper
      {

        static const int log_HASH = HashingUtils::HashString("log");
        static const int emit_metric_HASH = HashingUtils::HashString("emit-metric");
        static const int deactivate_HASH = HashingUtils::HashString("deactivate");


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
          else if (hashCode == deactivate_HASH)
          {
            return UsageLimitBreachAction::deactivate;
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
          case UsageLimitBreachAction::NOT_SET:
            return {};
          case UsageLimitBreachAction::log:
            return "log";
          case UsageLimitBreachAction::emit_metric:
            return "emit-metric";
          case UsageLimitBreachAction::deactivate:
            return "deactivate";
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
  } // namespace RedshiftServerless
} // namespace Aws
