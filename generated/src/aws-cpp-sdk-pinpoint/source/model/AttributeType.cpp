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

        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
        static const int AFTER_HASH = HashingUtils::HashString("AFTER");
        static const int ON_HASH = HashingUtils::HashString("ON");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        AttributeType GetAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
