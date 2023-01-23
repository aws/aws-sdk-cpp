/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class Formality
  {
    NOT_SET,
    FORMAL,
    INFORMAL
  };

namespace FormalityMapper
{
AWS_TRANSLATE_API Formality GetFormalityForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForFormality(Formality value);
} // namespace FormalityMapper
} // namespace Model
} // namespace Translate
} // namespace Aws
