/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace tnb
{
namespace Model
{
  enum class PackageContentType
  {
    NOT_SET,
    application_zip
  };

namespace PackageContentTypeMapper
{
AWS_TNB_API PackageContentType GetPackageContentTypeForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForPackageContentType(PackageContentType value);
} // namespace PackageContentTypeMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
