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
    SIGNATURE
  };

namespace BlockTypeMapper
{
AWS_TEXTRACT_API BlockType GetBlockTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForBlockType(BlockType value);
} // namespace BlockTypeMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
