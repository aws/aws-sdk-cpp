/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Personalize
{
namespace Model
{
  enum class ImportMode
  {
    NOT_SET,
    FULL,
    INCREMENTAL
  };

namespace ImportModeMapper
{
AWS_PERSONALIZE_API ImportMode GetImportModeForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForImportMode(ImportMode value);
} // namespace ImportModeMapper
} // namespace Model
} // namespace Personalize
} // namespace Aws
