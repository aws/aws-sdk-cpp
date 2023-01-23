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
  enum class SourceType
  {
    NOT_SET,
    CODESTAR
  };

namespace SourceTypeMapper
{
AWS_SERVICECATALOG_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
