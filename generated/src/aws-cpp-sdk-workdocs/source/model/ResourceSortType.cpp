/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ResourceSortType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace ResourceSortTypeMapper
      {

        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int NAME_HASH = HashingUtils::HashString("NAME");


        ResourceSortType GetResourceSortTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATE_HASH)
          {
            return ResourceSortType::DATE;
          }
          else if (hashCode == NAME_HASH)
          {
            return ResourceSortType::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSortType>(hashCode);
          }

          return ResourceSortType::NOT_SET;
        }

        Aws::String GetNameForResourceSortType(ResourceSortType enumValue)
        {
          switch(enumValue)
          {
          case ResourceSortType::DATE:
            return "DATE";
          case ResourceSortType::NAME:
            return "NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSortTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
