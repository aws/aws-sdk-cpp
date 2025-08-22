/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class BrowserType
  {
    NOT_SET,
    CHROME,
    FIREFOX
  };

namespace BrowserTypeMapper
{
AWS_SYNTHETICS_API BrowserType GetBrowserTypeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForBrowserType(BrowserType value);
} // namespace BrowserTypeMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
