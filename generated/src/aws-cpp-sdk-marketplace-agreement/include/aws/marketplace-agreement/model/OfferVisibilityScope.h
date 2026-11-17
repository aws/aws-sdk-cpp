/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class OfferVisibilityScope { NOT_SET, PUBLIC_, PRIVATE_ };

namespace OfferVisibilityScopeMapper {
AWS_AGREEMENTSERVICE_API OfferVisibilityScope GetOfferVisibilityScopeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForOfferVisibilityScope(OfferVisibilityScope value);
}  // namespace OfferVisibilityScopeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
