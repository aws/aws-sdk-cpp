/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/FilterNameStringType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecretsManager
  {
    namespace Model
    {
      namespace FilterNameStringTypeMapper
      {

        static constexpr uint32_t description_HASH = ConstExprHashingUtils::HashString("description");
        static constexpr uint32_t name_HASH = ConstExprHashingUtils::HashString("name");
        static constexpr uint32_t tag_key_HASH = ConstExprHashingUtils::HashString("tag-key");
        static constexpr uint32_t tag_value_HASH = ConstExprHashingUtils::HashString("tag-value");
        static constexpr uint32_t primary_region_HASH = ConstExprHashingUtils::HashString("primary-region");
        static constexpr uint32_t owning_service_HASH = ConstExprHashingUtils::HashString("owning-service");
        static constexpr uint32_t all_HASH = ConstExprHashingUtils::HashString("all");


        FilterNameStringType GetFilterNameStringTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == description_HASH)
          {
            return FilterNameStringType::description;
          }
          else if (hashCode == name_HASH)
          {
            return FilterNameStringType::name;
          }
          else if (hashCode == tag_key_HASH)
          {
            return FilterNameStringType::tag_key;
          }
          else if (hashCode == tag_value_HASH)
          {
            return FilterNameStringType::tag_value;
          }
          else if (hashCode == primary_region_HASH)
          {
            return FilterNameStringType::primary_region;
          }
          else if (hashCode == owning_service_HASH)
          {
            return FilterNameStringType::owning_service;
          }
          else if (hashCode == all_HASH)
          {
            return FilterNameStringType::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterNameStringType>(hashCode);
          }

          return FilterNameStringType::NOT_SET;
        }

        Aws::String GetNameForFilterNameStringType(FilterNameStringType enumValue)
        {
          switch(enumValue)
          {
          case FilterNameStringType::NOT_SET:
            return {};
          case FilterNameStringType::description:
            return "description";
          case FilterNameStringType::name:
            return "name";
          case FilterNameStringType::tag_key:
            return "tag-key";
          case FilterNameStringType::tag_value:
            return "tag-value";
          case FilterNameStringType::primary_region:
            return "primary-region";
          case FilterNameStringType::owning_service:
            return "owning-service";
          case FilterNameStringType::all:
            return "all";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterNameStringTypeMapper
    } // namespace Model
  } // namespace SecretsManager
} // namespace Aws
