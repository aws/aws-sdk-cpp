/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/ValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace ValueTypeMapper
      {

        static const int DATE_HASH = HashingUtils::HashString("DATE");


        ValueType GetValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATE_HASH)
          {
            return ValueType::DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValueType>(hashCode);
          }

          return ValueType::NOT_SET;
        }

        Aws::String GetNameForValueType(ValueType enumValue)
        {
          switch(enumValue)
          {
          case ValueType::NOT_SET:
            return {};
          case ValueType::DATE:
            return "DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValueTypeMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
