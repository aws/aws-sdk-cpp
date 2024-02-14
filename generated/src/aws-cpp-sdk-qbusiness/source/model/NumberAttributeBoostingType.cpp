/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/NumberAttributeBoostingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace NumberAttributeBoostingTypeMapper
      {

        static const int PRIORITIZE_LARGER_VALUES_HASH = HashingUtils::HashString("PRIORITIZE_LARGER_VALUES");
        static const int PRIORITIZE_SMALLER_VALUES_HASH = HashingUtils::HashString("PRIORITIZE_SMALLER_VALUES");


        NumberAttributeBoostingType GetNumberAttributeBoostingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIORITIZE_LARGER_VALUES_HASH)
          {
            return NumberAttributeBoostingType::PRIORITIZE_LARGER_VALUES;
          }
          else if (hashCode == PRIORITIZE_SMALLER_VALUES_HASH)
          {
            return NumberAttributeBoostingType::PRIORITIZE_SMALLER_VALUES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumberAttributeBoostingType>(hashCode);
          }

          return NumberAttributeBoostingType::NOT_SET;
        }

        Aws::String GetNameForNumberAttributeBoostingType(NumberAttributeBoostingType enumValue)
        {
          switch(enumValue)
          {
          case NumberAttributeBoostingType::NOT_SET:
            return {};
          case NumberAttributeBoostingType::PRIORITIZE_LARGER_VALUES:
            return "PRIORITIZE_LARGER_VALUES";
          case NumberAttributeBoostingType::PRIORITIZE_SMALLER_VALUES:
            return "PRIORITIZE_SMALLER_VALUES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumberAttributeBoostingTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
