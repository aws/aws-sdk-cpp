/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Client {

/**
 * Loads the SigV4a signing region set from the environment (AWS_SIGV4A_SIGNING_REGION_SET) or the
 * given profile (sigv4a_signing_region_set): a comma-separated list, with surrounding spaces trimmed.
 * Called by the configurations of services that support SigV4a.
 */
AWS_CORE_API Aws::Vector<Aws::String> LoadSigV4aSigningRegionSetFromEnvOrProfile(const Aws::String& profileName);

}  // namespace Client
}  // namespace Aws
