/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/S3TablesEndpointProvider.h>
#include <aws/s3tables/internal/S3TablesEndpointRules.h>

namespace Aws {
namespace S3Tables {
namespace Endpoint {
S3TablesEndpointProvider::S3TablesEndpointProvider()
    : S3TablesDefaultEpProviderBase(Aws::S3Tables::S3TablesEndpointRules::GetRulesBlob(),
                                    Aws::S3Tables::S3TablesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace S3Tables
}  // namespace Aws
