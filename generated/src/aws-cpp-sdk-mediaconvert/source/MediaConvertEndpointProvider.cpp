/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/MediaConvertEndpointProvider.h>
#include <aws/mediaconvert/internal/MediaConvertEndpointRules.h>

namespace Aws {
namespace MediaConvert {
namespace Endpoint {
MediaConvertEndpointProvider::MediaConvertEndpointProvider()
    : MediaConvertDefaultEpProviderBase(Aws::MediaConvert::MediaConvertEndpointRules::GetRulesBlob(),
                                        Aws::MediaConvert::MediaConvertEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaConvert
}  // namespace Aws
