/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NullFilterOption.h>
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
      namespace NullFilterOptionMapper
      {

        static const int ALL_VALUES_HASH = HashingUtils::HashString("ALL_VALUES");
        static const int NON_NULLS_ONLY_HASH = HashingUtils::HashString("NON_NULLS_ONLY");
        static const int NULLS_ONLY_HASH = HashingUtils::HashString("NULLS_ONLY");


        NullFilterOption GetNullFilterOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_VALUES_HASH)
          {
            return NullFilterOption::ALL_VALUES;
          }
          else if (hashCode == NON_NULLS_ONLY_HASH)
          {
            return NullFilterOption::NON_NULLS_ONLY;
          }
          else if (hashCode == NULLS_ONLY_HASH)
          {
            return NullFilterOption::NULLS_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NullFilterOption>(hashCode);
          }

          return NullFilterOption::NOT_SET;
        }

        Aws::String GetNameForNullFilterOption(NullFilterOption enumValue)
        {
          switch(enumValue)
          {
          case NullFilterOption::NOT_SET:
            return {};
          case NullFilterOption::ALL_VALUES:
            return "ALL_VALUES";
          case NullFilterOption::NON_NULLS_ONLY:
            return "NON_NULLS_ONLY";
          case NullFilterOption::NULLS_ONLY:
            return "NULLS_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NullFilterOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
