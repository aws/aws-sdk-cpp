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
enum class QualificationsDisassociationTaskStatus { NOT_SET, IN_PROGRESS, SUCCEEDED };

namespace QualificationsDisassociationTaskStatusMapper {
AWS_PARTNERCENTRALACCOUNT_API QualificationsDisassociationTaskStatus
GetQualificationsDisassociationTaskStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForQualificationsDisassociationTaskStatus(QualificationsDisassociationTaskStatus value);
}  // namespace QualificationsDisassociationTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
