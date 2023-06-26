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
  enum class TextType
  {
    NOT_SET,
    HANDWRITING,
    PRINTED
  };

namespace TextTypeMapper
{
AWS_TEXTRACT_API TextType GetTextTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForTextType(TextType value);
} // namespace TextTypeMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
