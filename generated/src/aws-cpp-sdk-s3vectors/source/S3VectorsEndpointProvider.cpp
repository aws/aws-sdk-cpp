/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/S3VectorsEndpointProvider.h>
#include <aws/s3vectors/internal/S3VectorsEndpointRules.h>

namespace Aws {
namespace S3Vectors {
namespace Endpoint {
S3VectorsEndpointProvider::S3VectorsEndpointProvider()
    : S3VectorsDefaultEpProviderBase(Aws::S3Vectors::S3VectorsEndpointRules::GetRulesBlob(),
                                     Aws::S3Vectors::S3VectorsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace S3Vectors
}  // namespace Aws
