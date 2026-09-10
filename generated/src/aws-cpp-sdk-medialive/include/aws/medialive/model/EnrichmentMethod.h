/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class EnrichmentMethod { NOT_SET, SCTE35_ELEMENTAL_INFERENCE_QUERY_PARAMS };

namespace EnrichmentMethodMapper {
AWS_MEDIALIVE_API EnrichmentMethod GetEnrichmentMethodForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEnrichmentMethod(EnrichmentMethod value);
}  // namespace EnrichmentMethodMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
