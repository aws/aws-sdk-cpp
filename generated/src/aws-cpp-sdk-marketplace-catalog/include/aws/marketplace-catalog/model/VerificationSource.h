/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class VerificationSource { NOT_SET, AWS_VERIFIED, SELF_ATTESTED };

namespace VerificationSourceMapper {
AWS_MARKETPLACECATALOG_API VerificationSource GetVerificationSourceForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForVerificationSource(VerificationSource value);
}  // namespace VerificationSourceMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
