/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class CertificateAssociationStatus { NOT_SET, PENDING_ASSOCIATION, ASSOCIATED, PENDING_DISASSOCIATION, DISASSOCIATED, FAILED };

namespace CertificateAssociationStatusMapper {
AWS_RTBFABRIC_API CertificateAssociationStatus GetCertificateAssociationStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForCertificateAssociationStatus(CertificateAssociationStatus value);
}  // namespace CertificateAssociationStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
