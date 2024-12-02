/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class ActorSessionMfaStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ActorSessionMfaStatusMapper
{
AWS_SECURITYHUB_API ActorSessionMfaStatus GetActorSessionMfaStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForActorSessionMfaStatus(ActorSessionMfaStatus value);
} // namespace ActorSessionMfaStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
