/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/RateKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace RateKeyMapper
      {

        static const int IP_HASH = HashingUtils::HashString("IP");


        RateKey GetRateKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_HASH)
          {
            return RateKey::IP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RateKey>(hashCode);
          }

          return RateKey::NOT_SET;
        }

        Aws::String GetNameForRateKey(RateKey enumValue)
        {
          switch(enumValue)
          {
          case RateKey::IP:
            return "IP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RateKeyMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
