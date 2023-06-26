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
  enum class ActionType
  {
    NOT_SET,
    SERVICE_SOFTWARE_UPDATE,
    JVM_HEAP_SIZE_TUNING,
    JVM_YOUNG_GEN_TUNING
  };

namespace ActionTypeMapper
{
AWS_OPENSEARCHSERVICE_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
