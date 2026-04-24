/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>

namespace Aws {
namespace S3Files {
namespace Model {
enum class IpAddressType { NOT_SET, IPV4_ONLY, IPV6_ONLY, DUAL_STACK };

namespace IpAddressTypeMapper {
AWS_S3FILES_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_S3FILES_API Aws::String GetNameForIpAddressType(IpAddressType value);
}  // namespace IpAddressTypeMapper
}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
