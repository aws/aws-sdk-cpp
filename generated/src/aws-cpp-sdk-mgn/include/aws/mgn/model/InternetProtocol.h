/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class InternetProtocol { NOT_SET, IPV4, IPV6 };

namespace InternetProtocolMapper {
AWS_MGN_API InternetProtocol GetInternetProtocolForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForInternetProtocol(InternetProtocol value);
}  // namespace InternetProtocolMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
