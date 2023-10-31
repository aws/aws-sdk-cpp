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
  enum class Brevity
  {
    NOT_SET,
    ON
  };

namespace BrevityMapper
{
AWS_TRANSLATE_API Brevity GetBrevityForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForBrevity(Brevity value);
} // namespace BrevityMapper
} // namespace Model
} // namespace Translate
} // namespace Aws
