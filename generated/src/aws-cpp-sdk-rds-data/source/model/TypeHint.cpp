/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/TypeHint.h>
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
      namespace TypeHintMapper
      {

        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t UUID_HASH = ConstExprHashingUtils::HashString("UUID");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t TIME_HASH = ConstExprHashingUtils::HashString("TIME");
        static constexpr uint32_t DECIMAL_HASH = ConstExprHashingUtils::HashString("DECIMAL");


        TypeHint GetTypeHintForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return TypeHint::JSON;
          }
          else if (hashCode == UUID_HASH)
          {
            return TypeHint::UUID;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return TypeHint::TIMESTAMP;
          }
          else if (hashCode == DATE_HASH)
          {
            return TypeHint::DATE;
          }
          else if (hashCode == TIME_HASH)
          {
            return TypeHint::TIME;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return TypeHint::DECIMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TypeHint>(hashCode);
          }

          return TypeHint::NOT_SET;
        }

        Aws::String GetNameForTypeHint(TypeHint enumValue)
        {
          switch(enumValue)
          {
          case TypeHint::NOT_SET:
            return {};
          case TypeHint::JSON:
            return "JSON";
          case TypeHint::UUID:
            return "UUID";
          case TypeHint::TIMESTAMP:
            return "TIMESTAMP";
          case TypeHint::DATE:
            return "DATE";
          case TypeHint::TIME:
            return "TIME";
          case TypeHint::DECIMAL:
            return "DECIMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeHintMapper
    } // namespace Model
  } // namespace RDSDataService
} // namespace Aws
