/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UndefinedSpecifiedValueType.h>
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
      namespace UndefinedSpecifiedValueTypeMapper
      {

        static const int LEAST_HASH = HashingUtils::HashString("LEAST");
        static const int MOST_HASH = HashingUtils::HashString("MOST");


        UndefinedSpecifiedValueType GetUndefinedSpecifiedValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEAST_HASH)
          {
            return UndefinedSpecifiedValueType::LEAST;
          }
          else if (hashCode == MOST_HASH)
          {
            return UndefinedSpecifiedValueType::MOST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UndefinedSpecifiedValueType>(hashCode);
          }

          return UndefinedSpecifiedValueType::NOT_SET;
        }

        Aws::String GetNameForUndefinedSpecifiedValueType(UndefinedSpecifiedValueType enumValue)
        {
          switch(enumValue)
          {
          case UndefinedSpecifiedValueType::NOT_SET:
            return {};
          case UndefinedSpecifiedValueType::LEAST:
            return "LEAST";
          case UndefinedSpecifiedValueType::MOST:
            return "MOST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UndefinedSpecifiedValueTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
