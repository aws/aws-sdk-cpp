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
  enum class ContentClassifier
  {
    NOT_SET,
    FreeOfPersonallyIdentifiableInformation,
    FreeOfAdultContent
  };

namespace ContentClassifierMapper
{
AWS_TEXTRACT_API ContentClassifier GetContentClassifierForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForContentClassifier(ContentClassifier value);
} // namespace ContentClassifierMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
