/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/BlockType.h>
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
      namespace BlockTypeMapper
      {

        static constexpr uint32_t KEY_VALUE_SET_HASH = ConstExprHashingUtils::HashString("KEY_VALUE_SET");
        static constexpr uint32_t PAGE_HASH = ConstExprHashingUtils::HashString("PAGE");
        static constexpr uint32_t LINE_HASH = ConstExprHashingUtils::HashString("LINE");
        static constexpr uint32_t WORD_HASH = ConstExprHashingUtils::HashString("WORD");
        static constexpr uint32_t TABLE_HASH = ConstExprHashingUtils::HashString("TABLE");
        static constexpr uint32_t CELL_HASH = ConstExprHashingUtils::HashString("CELL");
        static constexpr uint32_t SELECTION_ELEMENT_HASH = ConstExprHashingUtils::HashString("SELECTION_ELEMENT");
        static constexpr uint32_t MERGED_CELL_HASH = ConstExprHashingUtils::HashString("MERGED_CELL");
        static constexpr uint32_t TITLE_HASH = ConstExprHashingUtils::HashString("TITLE");
        static constexpr uint32_t QUERY_HASH = ConstExprHashingUtils::HashString("QUERY");
        static constexpr uint32_t QUERY_RESULT_HASH = ConstExprHashingUtils::HashString("QUERY_RESULT");
        static constexpr uint32_t SIGNATURE_HASH = ConstExprHashingUtils::HashString("SIGNATURE");
        static constexpr uint32_t TABLE_TITLE_HASH = ConstExprHashingUtils::HashString("TABLE_TITLE");
        static constexpr uint32_t TABLE_FOOTER_HASH = ConstExprHashingUtils::HashString("TABLE_FOOTER");
        static constexpr uint32_t LAYOUT_TEXT_HASH = ConstExprHashingUtils::HashString("LAYOUT_TEXT");
        static constexpr uint32_t LAYOUT_TITLE_HASH = ConstExprHashingUtils::HashString("LAYOUT_TITLE");
        static constexpr uint32_t LAYOUT_HEADER_HASH = ConstExprHashingUtils::HashString("LAYOUT_HEADER");
        static constexpr uint32_t LAYOUT_FOOTER_HASH = ConstExprHashingUtils::HashString("LAYOUT_FOOTER");
        static constexpr uint32_t LAYOUT_SECTION_HEADER_HASH = ConstExprHashingUtils::HashString("LAYOUT_SECTION_HEADER");
        static constexpr uint32_t LAYOUT_PAGE_NUMBER_HASH = ConstExprHashingUtils::HashString("LAYOUT_PAGE_NUMBER");
        static constexpr uint32_t LAYOUT_LIST_HASH = ConstExprHashingUtils::HashString("LAYOUT_LIST");
        static constexpr uint32_t LAYOUT_FIGURE_HASH = ConstExprHashingUtils::HashString("LAYOUT_FIGURE");
        static constexpr uint32_t LAYOUT_TABLE_HASH = ConstExprHashingUtils::HashString("LAYOUT_TABLE");
        static constexpr uint32_t LAYOUT_KEY_VALUE_HASH = ConstExprHashingUtils::HashString("LAYOUT_KEY_VALUE");


        BlockType GetBlockTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_VALUE_SET_HASH)
          {
            return BlockType::KEY_VALUE_SET;
          }
          else if (hashCode == PAGE_HASH)
          {
            return BlockType::PAGE;
          }
          else if (hashCode == LINE_HASH)
          {
            return BlockType::LINE;
          }
          else if (hashCode == WORD_HASH)
          {
            return BlockType::WORD;
          }
          else if (hashCode == TABLE_HASH)
          {
            return BlockType::TABLE;
          }
          else if (hashCode == CELL_HASH)
          {
            return BlockType::CELL;
          }
          else if (hashCode == SELECTION_ELEMENT_HASH)
          {
            return BlockType::SELECTION_ELEMENT;
          }
          else if (hashCode == MERGED_CELL_HASH)
          {
            return BlockType::MERGED_CELL;
          }
          else if (hashCode == TITLE_HASH)
          {
            return BlockType::TITLE;
          }
          else if (hashCode == QUERY_HASH)
          {
            return BlockType::QUERY;
          }
          else if (hashCode == QUERY_RESULT_HASH)
          {
            return BlockType::QUERY_RESULT;
          }
          else if (hashCode == SIGNATURE_HASH)
          {
            return BlockType::SIGNATURE;
          }
          else if (hashCode == TABLE_TITLE_HASH)
          {
            return BlockType::TABLE_TITLE;
          }
          else if (hashCode == TABLE_FOOTER_HASH)
          {
            return BlockType::TABLE_FOOTER;
          }
          else if (hashCode == LAYOUT_TEXT_HASH)
          {
            return BlockType::LAYOUT_TEXT;
          }
          else if (hashCode == LAYOUT_TITLE_HASH)
          {
            return BlockType::LAYOUT_TITLE;
          }
          else if (hashCode == LAYOUT_HEADER_HASH)
          {
            return BlockType::LAYOUT_HEADER;
          }
          else if (hashCode == LAYOUT_FOOTER_HASH)
          {
            return BlockType::LAYOUT_FOOTER;
          }
          else if (hashCode == LAYOUT_SECTION_HEADER_HASH)
          {
            return BlockType::LAYOUT_SECTION_HEADER;
          }
          else if (hashCode == LAYOUT_PAGE_NUMBER_HASH)
          {
            return BlockType::LAYOUT_PAGE_NUMBER;
          }
          else if (hashCode == LAYOUT_LIST_HASH)
          {
            return BlockType::LAYOUT_LIST;
          }
          else if (hashCode == LAYOUT_FIGURE_HASH)
          {
            return BlockType::LAYOUT_FIGURE;
          }
          else if (hashCode == LAYOUT_TABLE_HASH)
          {
            return BlockType::LAYOUT_TABLE;
          }
          else if (hashCode == LAYOUT_KEY_VALUE_HASH)
          {
            return BlockType::LAYOUT_KEY_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlockType>(hashCode);
          }

          return BlockType::NOT_SET;
        }

        Aws::String GetNameForBlockType(BlockType enumValue)
        {
          switch(enumValue)
          {
          case BlockType::NOT_SET:
            return {};
          case BlockType::KEY_VALUE_SET:
            return "KEY_VALUE_SET";
          case BlockType::PAGE:
            return "PAGE";
          case BlockType::LINE:
            return "LINE";
          case BlockType::WORD:
            return "WORD";
          case BlockType::TABLE:
            return "TABLE";
          case BlockType::CELL:
            return "CELL";
          case BlockType::SELECTION_ELEMENT:
            return "SELECTION_ELEMENT";
          case BlockType::MERGED_CELL:
            return "MERGED_CELL";
          case BlockType::TITLE:
            return "TITLE";
          case BlockType::QUERY:
            return "QUERY";
          case BlockType::QUERY_RESULT:
            return "QUERY_RESULT";
          case BlockType::SIGNATURE:
            return "SIGNATURE";
          case BlockType::TABLE_TITLE:
            return "TABLE_TITLE";
          case BlockType::TABLE_FOOTER:
            return "TABLE_FOOTER";
          case BlockType::LAYOUT_TEXT:
            return "LAYOUT_TEXT";
          case BlockType::LAYOUT_TITLE:
            return "LAYOUT_TITLE";
          case BlockType::LAYOUT_HEADER:
            return "LAYOUT_HEADER";
          case BlockType::LAYOUT_FOOTER:
            return "LAYOUT_FOOTER";
          case BlockType::LAYOUT_SECTION_HEADER:
            return "LAYOUT_SECTION_HEADER";
          case BlockType::LAYOUT_PAGE_NUMBER:
            return "LAYOUT_PAGE_NUMBER";
          case BlockType::LAYOUT_LIST:
            return "LAYOUT_LIST";
          case BlockType::LAYOUT_FIGURE:
            return "LAYOUT_FIGURE";
          case BlockType::LAYOUT_TABLE:
            return "LAYOUT_TABLE";
          case BlockType::LAYOUT_KEY_VALUE:
            return "LAYOUT_KEY_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlockTypeMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
