/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SpecialValue.h>
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
      namespace SpecialValueMapper
      {

        static const int EMPTY_HASH = HashingUtils::HashString("EMPTY");
        static const int NULL__HASH = HashingUtils::HashString("NULL");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        SpecialValue GetSpecialValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMPTY_HASH)
          {
            return SpecialValue::EMPTY;
          }
          else if (hashCode == NULL__HASH)
          {
            return SpecialValue::NULL_;
          }
          else if (hashCode == OTHER_HASH)
          {
            return SpecialValue::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpecialValue>(hashCode);
          }

          return SpecialValue::NOT_SET;
        }

        Aws::String GetNameForSpecialValue(SpecialValue enumValue)
        {
          switch(enumValue)
          {
          case SpecialValue::NOT_SET:
            return {};
          case SpecialValue::EMPTY:
            return "EMPTY";
          case SpecialValue::NULL_:
            return "NULL";
          case SpecialValue::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpecialValueMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
