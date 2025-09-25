/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>

namespace Aws {
namespace Config {

enum class EndpointSource {
    CodeOverride,                  // not used here; for diagnostics parity
    ServiceEnvVar,
    GlobalEnvVar,
    ServiceSharedConfig,
    GlobalSharedConfig
};

struct ResolvedEndpoint {
    Aws::String url;              // e.g. "https://play.min.io:9000"
    EndpointSource source;
};

// Resolves "should we force a custom endpoint for this service?"
class AWS_CORE_API ConfiguredEndpointResolver {
public:
    // serviceId is the Smithy "service ID" (e.g. "S3", "Elastic Beanstalk")
    // profileName is the selected shared-config profile (may be empty → default chain)
    static Aws::Crt::Optional<ResolvedEndpoint>
    ResolveForService(const Aws::String& serviceId,
                      const Aws::String& profileName,
                      bool ignoreConfiguredEndpoints);
};

} // namespace Config
} // namespace Aws