/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class IdentityCertificateStatus { NOT_SET, PROVISIONING, INACTIVE, DEPROVISIONING, ACTIVE, FAILED };

namespace IdentityCertificateStatusMapper {
AWS_SESV2_API IdentityCertificateStatus GetIdentityCertificateStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForIdentityCertificateStatus(IdentityCertificateStatus value);
}  // namespace IdentityCertificateStatusMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
