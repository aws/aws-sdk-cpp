﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class VerificationError
  {
    NOT_SET,
    SERVICE_ERROR,
    DNS_SERVER_ERROR,
    HOST_NOT_FOUND,
    TYPE_NOT_FOUND,
    INVALID_VALUE,
    REPLICATION_ACCESS_DENIED,
    REPLICATION_PRIMARY_NOT_FOUND,
    REPLICATION_PRIMARY_BYO_DKIM_NOT_SUPPORTED,
    REPLICATION_REPLICA_AS_PRIMARY_NOT_SUPPORTED,
    REPLICATION_PRIMARY_INVALID_REGION
  };

namespace VerificationErrorMapper
{
AWS_SESV2_API VerificationError GetVerificationErrorForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForVerificationError(VerificationError value);
} // namespace VerificationErrorMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
