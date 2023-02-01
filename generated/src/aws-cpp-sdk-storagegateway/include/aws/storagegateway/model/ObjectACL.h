/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class ObjectACL
  {
    NOT_SET,
    private_,
    public_read,
    public_read_write,
    authenticated_read,
    bucket_owner_read,
    bucket_owner_full_control,
    aws_exec_read
  };

namespace ObjectACLMapper
{
AWS_STORAGEGATEWAY_API ObjectACL GetObjectACLForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForObjectACL(ObjectACL value);
} // namespace ObjectACLMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
