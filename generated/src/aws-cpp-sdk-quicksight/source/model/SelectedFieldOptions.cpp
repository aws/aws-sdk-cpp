/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SelectedFieldOptions.h>
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
      namespace SelectedFieldOptionsMapper
      {

        static const int ALL_FIELDS_HASH = HashingUtils::HashString("ALL_FIELDS");


        SelectedFieldOptions GetSelectedFieldOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_FIELDS_HASH)
          {
            return SelectedFieldOptions::ALL_FIELDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelectedFieldOptions>(hashCode);
          }

          return SelectedFieldOptions::NOT_SET;
        }

        Aws::String GetNameForSelectedFieldOptions(SelectedFieldOptions enumValue)
        {
          switch(enumValue)
          {
          case SelectedFieldOptions::ALL_FIELDS:
            return "ALL_FIELDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelectedFieldOptionsMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
