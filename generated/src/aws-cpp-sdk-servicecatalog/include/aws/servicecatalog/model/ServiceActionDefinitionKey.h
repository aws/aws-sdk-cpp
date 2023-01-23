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
  enum class ServiceActionDefinitionKey
  {
    NOT_SET,
    Name,
    Version,
    AssumeRole,
    Parameters
  };

namespace ServiceActionDefinitionKeyMapper
{
AWS_SERVICECATALOG_API ServiceActionDefinitionKey GetServiceActionDefinitionKeyForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForServiceActionDefinitionKey(ServiceActionDefinitionKey value);
} // namespace ServiceActionDefinitionKeyMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
