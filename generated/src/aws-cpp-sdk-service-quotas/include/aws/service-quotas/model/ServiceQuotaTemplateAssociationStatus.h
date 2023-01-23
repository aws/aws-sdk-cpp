/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{
  enum class ServiceQuotaTemplateAssociationStatus
  {
    NOT_SET,
    ASSOCIATED,
    DISASSOCIATED
  };

namespace ServiceQuotaTemplateAssociationStatusMapper
{
AWS_SERVICEQUOTAS_API ServiceQuotaTemplateAssociationStatus GetServiceQuotaTemplateAssociationStatusForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus value);
} // namespace ServiceQuotaTemplateAssociationStatusMapper
} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
