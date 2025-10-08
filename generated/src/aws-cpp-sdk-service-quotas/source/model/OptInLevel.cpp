/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/OptInLevel.h>
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
      namespace OptInLevelMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");


        OptInLevel GetOptInLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return OptInLevel::ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptInLevel>(hashCode);
          }

          return OptInLevel::NOT_SET;
        }

        Aws::String GetNameForOptInLevel(OptInLevel enumValue)
        {
          switch(enumValue)
          {
          case OptInLevel::NOT_SET:
            return {};
          case OptInLevel::ACCOUNT:
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

      } // namespace OptInLevelMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
