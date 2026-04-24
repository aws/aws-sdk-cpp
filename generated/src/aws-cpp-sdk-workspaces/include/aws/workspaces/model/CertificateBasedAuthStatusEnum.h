/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Model {
enum class CertificateBasedAuthStatusEnum { NOT_SET, DISABLED, ENABLED };

namespace CertificateBasedAuthStatusEnumMapper {
AWS_WORKSPACES_API CertificateBasedAuthStatusEnum GetCertificateBasedAuthStatusEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForCertificateBasedAuthStatusEnum(CertificateBasedAuthStatusEnum value);
}  // namespace CertificateBasedAuthStatusEnumMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
