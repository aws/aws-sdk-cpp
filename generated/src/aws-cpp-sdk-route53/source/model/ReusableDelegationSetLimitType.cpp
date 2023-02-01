/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ReusableDelegationSetLimitType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace ReusableDelegationSetLimitTypeMapper
      {

        static const int MAX_ZONES_BY_REUSABLE_DELEGATION_SET_HASH = HashingUtils::HashString("MAX_ZONES_BY_REUSABLE_DELEGATION_SET");


        ReusableDelegationSetLimitType GetReusableDelegationSetLimitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAX_ZONES_BY_REUSABLE_DELEGATION_SET_HASH)
          {
            return ReusableDelegationSetLimitType::MAX_ZONES_BY_REUSABLE_DELEGATION_SET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReusableDelegationSetLimitType>(hashCode);
          }

          return ReusableDelegationSetLimitType::NOT_SET;
        }

        Aws::String GetNameForReusableDelegationSetLimitType(ReusableDelegationSetLimitType enumValue)
        {
          switch(enumValue)
          {
          case ReusableDelegationSetLimitType::MAX_ZONES_BY_REUSABLE_DELEGATION_SET:
            return "MAX_ZONES_BY_REUSABLE_DELEGATION_SET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReusableDelegationSetLimitTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
