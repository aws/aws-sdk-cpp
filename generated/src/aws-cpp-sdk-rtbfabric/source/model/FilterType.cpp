/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/FilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RTBFabric
  {
    namespace Model
    {
      namespace FilterTypeMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        FilterType GetFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return FilterType::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return FilterType::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterType>(hashCode);
          }

          return FilterType::NOT_SET;
        }

        Aws::String GetNameForFilterType(FilterType enumValue)
        {
          switch(enumValue)
          {
          case FilterType::NOT_SET:
            return {};
          case FilterType::INCLUDE:
            return "INCLUDE";
          case FilterType::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterTypeMapper
    } // namespace Model
  } // namespace RTBFabric
} // namespace Aws
