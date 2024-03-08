/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace AttributeTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int STRING_LIST_HASH = HashingUtils::HashString("STRING_LIST");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int DATE_HASH = HashingUtils::HashString("DATE");


        AttributeType GetAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return AttributeType::STRING;
          }
          else if (hashCode == STRING_LIST_HASH)
          {
            return AttributeType::STRING_LIST;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return AttributeType::NUMBER;
          }
          else if (hashCode == DATE_HASH)
          {
            return AttributeType::DATE;
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
          case AttributeType::STRING:
            return "STRING";
          case AttributeType::STRING_LIST:
            return "STRING_LIST";
          case AttributeType::NUMBER:
            return "NUMBER";
          case AttributeType::DATE:
            return "DATE";
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
  } // namespace QBusiness
} // namespace Aws
