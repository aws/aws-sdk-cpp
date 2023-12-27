/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/EntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace EntityTypeMapper
      {

        static const int KEY_HASH = HashingUtils::HashString("KEY");
        static const int VALUE_HASH = HashingUtils::HashString("VALUE");
        static const int COLUMN_HEADER_HASH = HashingUtils::HashString("COLUMN_HEADER");
        static const int TABLE_TITLE_HASH = HashingUtils::HashString("TABLE_TITLE");
        static const int TABLE_FOOTER_HASH = HashingUtils::HashString("TABLE_FOOTER");
        static const int TABLE_SECTION_TITLE_HASH = HashingUtils::HashString("TABLE_SECTION_TITLE");
        static const int TABLE_SUMMARY_HASH = HashingUtils::HashString("TABLE_SUMMARY");
        static const int STRUCTURED_TABLE_HASH = HashingUtils::HashString("STRUCTURED_TABLE");
        static const int SEMI_STRUCTURED_TABLE_HASH = HashingUtils::HashString("SEMI_STRUCTURED_TABLE");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_HASH)
          {
            return EntityType::KEY;
          }
          else if (hashCode == VALUE_HASH)
          {
            return EntityType::VALUE;
          }
          else if (hashCode == COLUMN_HEADER_HASH)
          {
            return EntityType::COLUMN_HEADER;
          }
          else if (hashCode == TABLE_TITLE_HASH)
          {
            return EntityType::TABLE_TITLE;
          }
          else if (hashCode == TABLE_FOOTER_HASH)
          {
            return EntityType::TABLE_FOOTER;
          }
          else if (hashCode == TABLE_SECTION_TITLE_HASH)
          {
            return EntityType::TABLE_SECTION_TITLE;
          }
          else if (hashCode == TABLE_SUMMARY_HASH)
          {
            return EntityType::TABLE_SUMMARY;
          }
          else if (hashCode == STRUCTURED_TABLE_HASH)
          {
            return EntityType::STRUCTURED_TABLE;
          }
          else if (hashCode == SEMI_STRUCTURED_TABLE_HASH)
          {
            return EntityType::SEMI_STRUCTURED_TABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityType>(hashCode);
          }

          return EntityType::NOT_SET;
        }

        Aws::String GetNameForEntityType(EntityType enumValue)
        {
          switch(enumValue)
          {
          case EntityType::NOT_SET:
            return {};
          case EntityType::KEY:
            return "KEY";
          case EntityType::VALUE:
            return "VALUE";
          case EntityType::COLUMN_HEADER:
            return "COLUMN_HEADER";
          case EntityType::TABLE_TITLE:
            return "TABLE_TITLE";
          case EntityType::TABLE_FOOTER:
            return "TABLE_FOOTER";
          case EntityType::TABLE_SECTION_TITLE:
            return "TABLE_SECTION_TITLE";
          case EntityType::TABLE_SUMMARY:
            return "TABLE_SUMMARY";
          case EntityType::STRUCTURED_TABLE:
            return "STRUCTURED_TABLE";
          case EntityType::SEMI_STRUCTURED_TABLE:
            return "SEMI_STRUCTURED_TABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityTypeMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
