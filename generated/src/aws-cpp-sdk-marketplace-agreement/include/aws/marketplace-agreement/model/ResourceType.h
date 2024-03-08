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
  enum class ResourceType
  {
    NOT_SET,
    Agreement
  };

namespace ResourceTypeMapper
{
AWS_AGREEMENTSERVICE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace AgreementService
} // namespace Aws
