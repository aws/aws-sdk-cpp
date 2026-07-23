/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/SimpleDBEndpointProvider.h>
#include <aws/sdb/internal/SimpleDBEndpointRules.h>

namespace Aws {
namespace SimpleDB {
namespace Endpoint {
SimpleDBEndpointProvider::SimpleDBEndpointProvider()
    : SimpleDBDefaultEpProviderBase(Aws::SimpleDB::SimpleDBEndpointRules::GetRulesBlob(),
                                    Aws::SimpleDB::SimpleDBEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SimpleDB
}  // namespace Aws
