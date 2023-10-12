/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/DecimalReturnType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDSDataService
  {
    namespace Model
    {
      namespace DecimalReturnTypeMapper
      {

        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t DOUBLE_OR_LONG_HASH = ConstExprHashingUtils::HashString("DOUBLE_OR_LONG");


        DecimalReturnType GetDecimalReturnTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return DecimalReturnType::STRING;
          }
          else if (hashCode == DOUBLE_OR_LONG_HASH)
          {
            return DecimalReturnType::DOUBLE_OR_LONG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DecimalReturnType>(hashCode);
          }

          return DecimalReturnType::NOT_SET;
        }

        Aws::String GetNameForDecimalReturnType(DecimalReturnType enumValue)
        {
          switch(enumValue)
          {
          case DecimalReturnType::NOT_SET:
            return {};
          case DecimalReturnType::STRING:
            return "STRING";
          case DecimalReturnType::DOUBLE_OR_LONG:
            return "DOUBLE_OR_LONG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DecimalReturnTypeMapper
    } // namespace Model
  } // namespace RDSDataService
} // namespace Aws
