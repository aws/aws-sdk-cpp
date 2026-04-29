/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class ScteInManifests { NOT_SET, ALL, MATCHES_FILTER };

namespace ScteInManifestsMapper {
AWS_MEDIAPACKAGEV2_API ScteInManifests GetScteInManifestsForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForScteInManifests(ScteInManifests value);
}  // namespace ScteInManifestsMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
