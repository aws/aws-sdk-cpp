/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Textract
{
namespace Model
{
  enum class BlockType
  {
    NOT_SET,
    KEY_VALUE_SET,
    PAGE,
    LINE,
    WORD,
    TABLE,
    CELL,
    SELECTION_ELEMENT,
    MERGED_CELL,
    TITLE,
    QUERY,
    QUERY_RESULT,
    SIGNATURE,
    TABLE_TITLE,
    TABLE_FOOTER,
    LAYOUT_TEXT,
    LAYOUT_TITLE,
    LAYOUT_HEADER,
    LAYOUT_FOOTER,
    LAYOUT_SECTION_HEADER,
    LAYOUT_PAGE_NUMBER,
    LAYOUT_LIST,
    LAYOUT_FIGURE,
    LAYOUT_TABLE,
    LAYOUT_KEY_VALUE
  };

namespace BlockTypeMapper
{
AWS_TEXTRACT_API BlockType GetBlockTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForBlockType(BlockType value);
} // namespace BlockTypeMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
