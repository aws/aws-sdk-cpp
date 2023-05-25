/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class CopyOption
  {
    NOT_SET,
    CopyTags
  };

namespace CopyOptionMapper
{
AWS_SERVICECATALOG_API CopyOption GetCopyOptionForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForCopyOption(CopyOption value);
} // namespace CopyOptionMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
