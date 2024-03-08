/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/QuotaContextScope.h>
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
      namespace QuotaContextScopeMapper
      {

        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");


        QuotaContextScope GetQuotaContextScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_HASH)
          {
            return QuotaContextScope::RESOURCE;
          }
          else if (hashCode == ACCOUNT_HASH)
          {
            return QuotaContextScope::ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuotaContextScope>(hashCode);
          }

          return QuotaContextScope::NOT_SET;
        }

        Aws::String GetNameForQuotaContextScope(QuotaContextScope enumValue)
        {
          switch(enumValue)
          {
          case QuotaContextScope::NOT_SET:
            return {};
          case QuotaContextScope::RESOURCE:
            return "RESOURCE";
          case QuotaContextScope::ACCOUNT:
            return "ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuotaContextScopeMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
