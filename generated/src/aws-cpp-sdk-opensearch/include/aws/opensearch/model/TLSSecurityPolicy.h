/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class TLSSecurityPolicy
  {
    NOT_SET,
    Policy_Min_TLS_1_0_2019_07,
    Policy_Min_TLS_1_2_2019_07,
    Policy_Min_TLS_1_2_PFS_2023_10
  };

namespace TLSSecurityPolicyMapper
{
AWS_OPENSEARCHSERVICE_API TLSSecurityPolicy GetTLSSecurityPolicyForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForTLSSecurityPolicy(TLSSecurityPolicy value);
} // namespace TLSSecurityPolicyMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
