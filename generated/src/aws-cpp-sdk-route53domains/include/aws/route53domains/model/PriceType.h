/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>

namespace Aws {
namespace Route53Domains {
namespace Model {
enum class PriceType { NOT_SET, STANDARD, REGISTRY_PREMIUM };

namespace PriceTypeMapper {
AWS_ROUTE53DOMAINS_API PriceType GetPriceTypeForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForPriceType(PriceType value);
}  // namespace PriceTypeMapper
}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws
