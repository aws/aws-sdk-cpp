/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class ConfigurableAction { NOT_SET, FILTER, ENRICH_REQUEST_EXT, ENRICH_REQUEST_HEADERS, OBSERVE };

namespace ConfigurableActionMapper {
AWS_RTBFABRIC_API ConfigurableAction GetConfigurableActionForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForConfigurableAction(ConfigurableAction value);
}  // namespace ConfigurableActionMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
