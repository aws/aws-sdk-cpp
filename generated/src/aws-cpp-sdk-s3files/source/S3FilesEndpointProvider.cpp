/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3files/S3FilesEndpointProvider.h>
#include <aws/s3files/internal/S3FilesEndpointRules.h>

namespace Aws {
namespace S3Files {
namespace Endpoint {
S3FilesEndpointProvider::S3FilesEndpointProvider()
    : S3FilesDefaultEpProviderBase(Aws::S3Files::S3FilesEndpointRules::GetRulesBlob(), Aws::S3Files::S3FilesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace S3Files
}  // namespace Aws
