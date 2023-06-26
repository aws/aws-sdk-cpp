/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
  enum class OperationStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    ERROR_,
    SUCCESSFUL,
    FAILED
  };

namespace OperationStatusMapper
{
AWS_ROUTE53DOMAINS_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForOperationStatus(OperationStatus value);
} // namespace OperationStatusMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
