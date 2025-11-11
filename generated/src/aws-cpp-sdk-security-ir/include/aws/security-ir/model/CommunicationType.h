/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

namespace Aws {
namespace SecurityIR {
namespace Model {
enum class CommunicationType {
  NOT_SET,
  Case_Created,
  Case_Updated,
  Case_Acknowledged,
  Case_Closed,
  Case_Updated_To_Service_Managed,
  Case_Status_Updated,
  Case_Pending_Customer_Action_Reminder,
  Case_Attachment_Url_Uploaded,
  Case_Comment_Added,
  Case_Comment_Updated,
  Membership_Created,
  Membership_Updated,
  Membership_Cancelled,
  Register_Delegated_Administrator,
  Deregister_Delegated_Administrator,
  Disable_AWS_Service_Access
};

namespace CommunicationTypeMapper {
AWS_SECURITYIR_API CommunicationType GetCommunicationTypeForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForCommunicationType(CommunicationType value);
}  // namespace CommunicationTypeMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
