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
  enum class DomainProcessingStatusType
  {
    NOT_SET,
    Creating,
    Active,
    Modifying,
    UpgradingEngineVersion,
    UpdatingServiceSoftware,
    Isolated,
    Deleting
  };

namespace DomainProcessingStatusTypeMapper
{
AWS_OPENSEARCHSERVICE_API DomainProcessingStatusType GetDomainProcessingStatusTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDomainProcessingStatusType(DomainProcessingStatusType value);
} // namespace DomainProcessingStatusTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
