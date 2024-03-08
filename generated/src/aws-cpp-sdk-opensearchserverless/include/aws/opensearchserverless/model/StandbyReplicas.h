/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{
  enum class StandbyReplicas
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace StandbyReplicasMapper
{
AWS_OPENSEARCHSERVERLESS_API StandbyReplicas GetStandbyReplicasForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForStandbyReplicas(StandbyReplicas value);
} // namespace StandbyReplicasMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
