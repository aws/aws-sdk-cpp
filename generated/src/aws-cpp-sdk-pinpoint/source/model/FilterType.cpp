/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/FilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace FilterTypeMapper
      {

        static constexpr uint32_t SYSTEM_HASH = ConstExprHashingUtils::HashString("SYSTEM");
        static constexpr uint32_t ENDPOINT_HASH = ConstExprHashingUtils::HashString("ENDPOINT");


        FilterType GetFilterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_HASH)
          {
            return FilterType::SYSTEM;
          }
          else if (hashCode == ENDPOINT_HASH)
          {
            return FilterType::ENDPOINT;
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
          case FilterType::SYSTEM:
            return "SYSTEM";
          case FilterType::ENDPOINT:
            return "ENDPOINT";
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
  } // namespace Pinpoint
} // namespace Aws
