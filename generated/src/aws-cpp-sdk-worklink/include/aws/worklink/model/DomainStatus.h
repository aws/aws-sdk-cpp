/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkLink
{
namespace Model
{
  enum class DomainStatus
  {
    NOT_SET,
    PENDING_VALIDATION,
    ASSOCIATING,
    ACTIVE,
    INACTIVE,
    DISASSOCIATING,
    DISASSOCIATED,
    FAILED_TO_ASSOCIATE,
    FAILED_TO_DISASSOCIATE
  };

namespace DomainStatusMapper
{
AWS_WORKLINK_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_WORKLINK_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace WorkLink
} // namespace Aws
