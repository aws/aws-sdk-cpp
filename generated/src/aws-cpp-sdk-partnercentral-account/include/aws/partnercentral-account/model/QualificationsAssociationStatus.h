/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class QualificationsAssociationStatus { NOT_SET, ASSOCIATED, NOT_ASSOCIATED };

namespace QualificationsAssociationStatusMapper {
AWS_PARTNERCENTRALACCOUNT_API QualificationsAssociationStatus GetQualificationsAssociationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForQualificationsAssociationStatus(QualificationsAssociationStatus value);
}  // namespace QualificationsAssociationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
