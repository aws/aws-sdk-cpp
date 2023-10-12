/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/AttributeType.h>
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
      namespace AttributeTypeMapper
      {

        static constexpr uint32_t INCLUSIVE_HASH = ConstExprHashingUtils::HashString("INCLUSIVE");
        static constexpr uint32_t EXCLUSIVE_HASH = ConstExprHashingUtils::HashString("EXCLUSIVE");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t BEFORE_HASH = ConstExprHashingUtils::HashString("BEFORE");
        static constexpr uint32_t AFTER_HASH = ConstExprHashingUtils::HashString("AFTER");
        static constexpr uint32_t ON_HASH = ConstExprHashingUtils::HashString("ON");
        static constexpr uint32_t BETWEEN_HASH = ConstExprHashingUtils::HashString("BETWEEN");


        AttributeType GetAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUSIVE_HASH)
          {
            return AttributeType::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return AttributeType::EXCLUSIVE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return AttributeType::CONTAINS;
          }
          else if (hashCode == BEFORE_HASH)
          {
            return AttributeType::BEFORE;
          }
          else if (hashCode == AFTER_HASH)
          {
            return AttributeType::AFTER;
          }
          else if (hashCode == ON_HASH)
          {
            return AttributeType::ON;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return AttributeType::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeType>(hashCode);
          }

          return AttributeType::NOT_SET;
        }

        Aws::String GetNameForAttributeType(AttributeType enumValue)
        {
          switch(enumValue)
          {
          case AttributeType::NOT_SET:
            return {};
          case AttributeType::INCLUSIVE:
            return "INCLUSIVE";
          case AttributeType::EXCLUSIVE:
            return "EXCLUSIVE";
          case AttributeType::CONTAINS:
            return "CONTAINS";
          case AttributeType::BEFORE:
            return "BEFORE";
          case AttributeType::AFTER:
            return "AFTER";
          case AttributeType::ON:
            return "ON";
          case AttributeType::BETWEEN:
            return "BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
