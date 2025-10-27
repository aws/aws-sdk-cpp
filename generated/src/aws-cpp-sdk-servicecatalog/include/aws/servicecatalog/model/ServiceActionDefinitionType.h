/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>

namespace Aws {
namespace ServiceCatalog {
namespace Model {
enum class ServiceActionDefinitionType { NOT_SET, SSM_AUTOMATION };

namespace ServiceActionDefinitionTypeMapper {
AWS_SERVICECATALOG_API ServiceActionDefinitionType GetServiceActionDefinitionTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForServiceActionDefinitionType(ServiceActionDefinitionType value);
}  // namespace ServiceActionDefinitionTypeMapper
}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
