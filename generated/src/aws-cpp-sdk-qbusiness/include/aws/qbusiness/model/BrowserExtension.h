/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class BrowserExtension
  {
    NOT_SET,
    FIREFOX,
    CHROME
  };

namespace BrowserExtensionMapper
{
AWS_QBUSINESS_API BrowserExtension GetBrowserExtensionForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForBrowserExtension(BrowserExtension value);
} // namespace BrowserExtensionMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
