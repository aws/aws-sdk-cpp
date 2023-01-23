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
  enum class ReservedInstancePaymentOption
  {
    NOT_SET,
    ALL_UPFRONT,
    PARTIAL_UPFRONT,
    NO_UPFRONT
  };

namespace ReservedInstancePaymentOptionMapper
{
AWS_OPENSEARCHSERVICE_API ReservedInstancePaymentOption GetReservedInstancePaymentOptionForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForReservedInstancePaymentOption(ReservedInstancePaymentOption value);
} // namespace ReservedInstancePaymentOptionMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
