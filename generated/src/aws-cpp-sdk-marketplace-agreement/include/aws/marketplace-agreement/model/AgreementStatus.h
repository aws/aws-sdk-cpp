/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AgreementService
{
namespace Model
{
  enum class AgreementStatus
  {
    NOT_SET,
    ACTIVE,
    ARCHIVED,
    CANCELLED,
    EXPIRED,
    RENEWED,
    REPLACED,
    ROLLED_BACK,
    SUPERSEDED,
    TERMINATED
  };

namespace AgreementStatusMapper
{
AWS_AGREEMENTSERVICE_API AgreementStatus GetAgreementStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementStatus(AgreementStatus value);
} // namespace AgreementStatusMapper
} // namespace Model
} // namespace AgreementService
} // namespace Aws
