/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/LogScope.h>
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
      namespace LogScopeMapper
      {

        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int SECURITY_LAKE_HASH = HashingUtils::HashString("SECURITY_LAKE");


        LogScope GetLogScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_HASH)
          {
            return LogScope::CUSTOMER;
          }
          else if (hashCode == SECURITY_LAKE_HASH)
          {
            return LogScope::SECURITY_LAKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogScope>(hashCode);
          }

          return LogScope::NOT_SET;
        }

        Aws::String GetNameForLogScope(LogScope enumValue)
        {
          switch(enumValue)
          {
          case LogScope::NOT_SET:
            return {};
          case LogScope::CUSTOMER:
            return "CUSTOMER";
          case LogScope::SECURITY_LAKE:
            return "SECURITY_LAKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogScopeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
