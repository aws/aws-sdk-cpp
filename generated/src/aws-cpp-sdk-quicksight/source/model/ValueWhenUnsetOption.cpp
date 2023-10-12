/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ValueWhenUnsetOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ValueWhenUnsetOptionMapper
      {

        static constexpr uint32_t RECOMMENDED_VALUE_HASH = ConstExprHashingUtils::HashString("RECOMMENDED_VALUE");
        static constexpr uint32_t NULL__HASH = ConstExprHashingUtils::HashString("NULL");


        ValueWhenUnsetOption GetValueWhenUnsetOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECOMMENDED_VALUE_HASH)
          {
            return ValueWhenUnsetOption::RECOMMENDED_VALUE;
          }
          else if (hashCode == NULL__HASH)
          {
            return ValueWhenUnsetOption::NULL_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValueWhenUnsetOption>(hashCode);
          }

          return ValueWhenUnsetOption::NOT_SET;
        }

        Aws::String GetNameForValueWhenUnsetOption(ValueWhenUnsetOption enumValue)
        {
          switch(enumValue)
          {
          case ValueWhenUnsetOption::NOT_SET:
            return {};
          case ValueWhenUnsetOption::RECOMMENDED_VALUE:
            return "RECOMMENDED_VALUE";
          case ValueWhenUnsetOption::NULL_:
            return "NULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValueWhenUnsetOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
