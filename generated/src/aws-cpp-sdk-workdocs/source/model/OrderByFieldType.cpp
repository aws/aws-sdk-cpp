/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/OrderByFieldType.h>
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
      namespace OrderByFieldTypeMapper
      {

        static const int RELEVANCE_HASH = HashingUtils::HashString("RELEVANCE");
        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int SIZE_HASH = HashingUtils::HashString("SIZE");
        static const int CREATED_TIMESTAMP_HASH = HashingUtils::HashString("CREATED_TIMESTAMP");
        static const int MODIFIED_TIMESTAMP_HASH = HashingUtils::HashString("MODIFIED_TIMESTAMP");


        OrderByFieldType GetOrderByFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RELEVANCE_HASH)
          {
            return OrderByFieldType::RELEVANCE;
          }
          else if (hashCode == NAME_HASH)
          {
            return OrderByFieldType::NAME;
          }
          else if (hashCode == SIZE_HASH)
          {
            return OrderByFieldType::SIZE;
          }
          else if (hashCode == CREATED_TIMESTAMP_HASH)
          {
            return OrderByFieldType::CREATED_TIMESTAMP;
          }
          else if (hashCode == MODIFIED_TIMESTAMP_HASH)
          {
            return OrderByFieldType::MODIFIED_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderByFieldType>(hashCode);
          }

          return OrderByFieldType::NOT_SET;
        }

        Aws::String GetNameForOrderByFieldType(OrderByFieldType enumValue)
        {
          switch(enumValue)
          {
          case OrderByFieldType::NOT_SET:
            return {};
          case OrderByFieldType::RELEVANCE:
            return "RELEVANCE";
          case OrderByFieldType::NAME:
            return "NAME";
          case OrderByFieldType::SIZE:
            return "SIZE";
          case OrderByFieldType::CREATED_TIMESTAMP:
            return "CREATED_TIMESTAMP";
          case OrderByFieldType::MODIFIED_TIMESTAMP:
            return "MODIFIED_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderByFieldTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
