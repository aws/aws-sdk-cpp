/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/S3OutpostsEndpointProvider.h>
#include <aws/s3outposts/internal/S3OutpostsEndpointRules.h>

namespace Aws {
namespace S3Outposts {
namespace Endpoint {
S3OutpostsEndpointProvider::S3OutpostsEndpointProvider()
    : S3OutpostsDefaultEpProviderBase(Aws::S3Outposts::S3OutpostsEndpointRules::GetRulesBlob(),
                                      Aws::S3Outposts::S3OutpostsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace S3Outposts
}  // namespace Aws
