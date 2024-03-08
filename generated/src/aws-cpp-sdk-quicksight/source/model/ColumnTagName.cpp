/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnTagName.h>
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
      namespace ColumnTagNameMapper
      {

        static const int COLUMN_GEOGRAPHIC_ROLE_HASH = HashingUtils::HashString("COLUMN_GEOGRAPHIC_ROLE");
        static const int COLUMN_DESCRIPTION_HASH = HashingUtils::HashString("COLUMN_DESCRIPTION");


        ColumnTagName GetColumnTagNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLUMN_GEOGRAPHIC_ROLE_HASH)
          {
            return ColumnTagName::COLUMN_GEOGRAPHIC_ROLE;
          }
          else if (hashCode == COLUMN_DESCRIPTION_HASH)
          {
            return ColumnTagName::COLUMN_DESCRIPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnTagName>(hashCode);
          }

          return ColumnTagName::NOT_SET;
        }

        Aws::String GetNameForColumnTagName(ColumnTagName enumValue)
        {
          switch(enumValue)
          {
          case ColumnTagName::NOT_SET:
            return {};
          case ColumnTagName::COLUMN_GEOGRAPHIC_ROLE:
            return "COLUMN_GEOGRAPHIC_ROLE";
          case ColumnTagName::COLUMN_DESCRIPTION:
            return "COLUMN_DESCRIPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnTagNameMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
