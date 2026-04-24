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
enum class ResourceAttribute { NOT_SET, PROPERTIES, METADATA, CREATIONPOLICY, UPDATEPOLICY, DELETIONPOLICY, TAGS };

namespace ResourceAttributeMapper {
AWS_SERVICECATALOG_API ResourceAttribute GetResourceAttributeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForResourceAttribute(ResourceAttribute value);
}  // namespace ResourceAttributeMapper
}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
