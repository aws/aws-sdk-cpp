/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateBasedStatementAggregateKeyType.h>
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
      namespace RateBasedStatementAggregateKeyTypeMapper
      {

        static constexpr uint32_t IP_HASH = ConstExprHashingUtils::HashString("IP");
        static constexpr uint32_t FORWARDED_IP_HASH = ConstExprHashingUtils::HashString("FORWARDED_IP");
        static constexpr uint32_t CUSTOM_KEYS_HASH = ConstExprHashingUtils::HashString("CUSTOM_KEYS");
        static constexpr uint32_t CONSTANT_HASH = ConstExprHashingUtils::HashString("CONSTANT");


        RateBasedStatementAggregateKeyType GetRateBasedStatementAggregateKeyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_HASH)
          {
            return RateBasedStatementAggregateKeyType::IP;
          }
          else if (hashCode == FORWARDED_IP_HASH)
          {
            return RateBasedStatementAggregateKeyType::FORWARDED_IP;
          }
          else if (hashCode == CUSTOM_KEYS_HASH)
          {
            return RateBasedStatementAggregateKeyType::CUSTOM_KEYS;
          }
          else if (hashCode == CONSTANT_HASH)
          {
            return RateBasedStatementAggregateKeyType::CONSTANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RateBasedStatementAggregateKeyType>(hashCode);
          }

          return RateBasedStatementAggregateKeyType::NOT_SET;
        }

        Aws::String GetNameForRateBasedStatementAggregateKeyType(RateBasedStatementAggregateKeyType enumValue)
        {
          switch(enumValue)
          {
          case RateBasedStatementAggregateKeyType::NOT_SET:
            return {};
          case RateBasedStatementAggregateKeyType::IP:
            return "IP";
          case RateBasedStatementAggregateKeyType::FORWARDED_IP:
            return "FORWARDED_IP";
          case RateBasedStatementAggregateKeyType::CUSTOM_KEYS:
            return "CUSTOM_KEYS";
          case RateBasedStatementAggregateKeyType::CONSTANT:
            return "CONSTANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RateBasedStatementAggregateKeyTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
