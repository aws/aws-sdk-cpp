/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Outposts
{
namespace Model
{
  enum class EndpointAccessType
  {
    NOT_SET,
    Private,
    CustomerOwnedIp
  };

namespace EndpointAccessTypeMapper
{
AWS_S3OUTPOSTS_API EndpointAccessType GetEndpointAccessTypeForName(const Aws::String& name);

AWS_S3OUTPOSTS_API Aws::String GetNameForEndpointAccessType(EndpointAccessType value);
} // namespace EndpointAccessTypeMapper
} // namespace Model
} // namespace S3Outposts
} // namespace Aws
