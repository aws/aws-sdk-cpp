/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/AppliedLevelEnum.h>
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
      namespace AppliedLevelEnumMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        AppliedLevelEnum GetAppliedLevelEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return AppliedLevelEnum::ACCOUNT;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return AppliedLevelEnum::RESOURCE;
          }
          else if (hashCode == ALL_HASH)
          {
            return AppliedLevelEnum::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppliedLevelEnum>(hashCode);
          }

          return AppliedLevelEnum::NOT_SET;
        }

        Aws::String GetNameForAppliedLevelEnum(AppliedLevelEnum enumValue)
        {
          switch(enumValue)
          {
          case AppliedLevelEnum::NOT_SET:
            return {};
          case AppliedLevelEnum::ACCOUNT:
            return "ACCOUNT";
          case AppliedLevelEnum::RESOURCE:
            return "RESOURCE";
          case AppliedLevelEnum::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppliedLevelEnumMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
