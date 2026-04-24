/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/security-ir/model/CommunicationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityIR {
namespace Model {
namespace CommunicationTypeMapper {

static const int Case_Created_HASH = HashingUtils::HashString("Case Created");
static const int Case_Updated_HASH = HashingUtils::HashString("Case Updated");
static const int Case_Acknowledged_HASH = HashingUtils::HashString("Case Acknowledged");
static const int Case_Closed_HASH = HashingUtils::HashString("Case Closed");
static const int Case_Updated_To_Service_Managed_HASH = HashingUtils::HashString("Case Updated To Service Managed");
static const int Case_Status_Updated_HASH = HashingUtils::HashString("Case Status Updated");
static const int Case_Pending_Customer_Action_Reminder_HASH = HashingUtils::HashString("Case Pending Customer Action Reminder");
static const int Case_Attachment_Url_Uploaded_HASH = HashingUtils::HashString("Case Attachment Url Uploaded");
static const int Case_Comment_Added_HASH = HashingUtils::HashString("Case Comment Added");
static const int Case_Comment_Updated_HASH = HashingUtils::HashString("Case Comment Updated");
static const int Membership_Created_HASH = HashingUtils::HashString("Membership Created");
static const int Membership_Updated_HASH = HashingUtils::HashString("Membership Updated");
static const int Membership_Cancelled_HASH = HashingUtils::HashString("Membership Cancelled");
static const int Register_Delegated_Administrator_HASH = HashingUtils::HashString("Register Delegated Administrator");
static const int Deregister_Delegated_Administrator_HASH = HashingUtils::HashString("Deregister Delegated Administrator");
static const int Disable_AWS_Service_Access_HASH = HashingUtils::HashString("Disable AWS Service Access");

CommunicationType GetCommunicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Case_Created_HASH) {
    return CommunicationType::Case_Created;
  } else if (hashCode == Case_Updated_HASH) {
    return CommunicationType::Case_Updated;
  } else if (hashCode == Case_Acknowledged_HASH) {
    return CommunicationType::Case_Acknowledged;
  } else if (hashCode == Case_Closed_HASH) {
    return CommunicationType::Case_Closed;
  } else if (hashCode == Case_Updated_To_Service_Managed_HASH) {
    return CommunicationType::Case_Updated_To_Service_Managed;
  } else if (hashCode == Case_Status_Updated_HASH) {
    return CommunicationType::Case_Status_Updated;
  } else if (hashCode == Case_Pending_Customer_Action_Reminder_HASH) {
    return CommunicationType::Case_Pending_Customer_Action_Reminder;
  } else if (hashCode == Case_Attachment_Url_Uploaded_HASH) {
    return CommunicationType::Case_Attachment_Url_Uploaded;
  } else if (hashCode == Case_Comment_Added_HASH) {
    return CommunicationType::Case_Comment_Added;
  } else if (hashCode == Case_Comment_Updated_HASH) {
    return CommunicationType::Case_Comment_Updated;
  } else if (hashCode == Membership_Created_HASH) {
    return CommunicationType::Membership_Created;
  } else if (hashCode == Membership_Updated_HASH) {
    return CommunicationType::Membership_Updated;
  } else if (hashCode == Membership_Cancelled_HASH) {
    return CommunicationType::Membership_Cancelled;
  } else if (hashCode == Register_Delegated_Administrator_HASH) {
    return CommunicationType::Register_Delegated_Administrator;
  } else if (hashCode == Deregister_Delegated_Administrator_HASH) {
    return CommunicationType::Deregister_Delegated_Administrator;
  } else if (hashCode == Disable_AWS_Service_Access_HASH) {
    return CommunicationType::Disable_AWS_Service_Access;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CommunicationType>(hashCode);
  }

  return CommunicationType::NOT_SET;
}

Aws::String GetNameForCommunicationType(CommunicationType enumValue) {
  switch (enumValue) {
    case CommunicationType::NOT_SET:
      return {};
    case CommunicationType::Case_Created:
      return "Case Created";
    case CommunicationType::Case_Updated:
      return "Case Updated";
    case CommunicationType::Case_Acknowledged:
      return "Case Acknowledged";
    case CommunicationType::Case_Closed:
      return "Case Closed";
    case CommunicationType::Case_Updated_To_Service_Managed:
      return "Case Updated To Service Managed";
    case CommunicationType::Case_Status_Updated:
      return "Case Status Updated";
    case CommunicationType::Case_Pending_Customer_Action_Reminder:
      return "Case Pending Customer Action Reminder";
    case CommunicationType::Case_Attachment_Url_Uploaded:
      return "Case Attachment Url Uploaded";
    case CommunicationType::Case_Comment_Added:
      return "Case Comment Added";
    case CommunicationType::Case_Comment_Updated:
      return "Case Comment Updated";
    case CommunicationType::Membership_Created:
      return "Membership Created";
    case CommunicationType::Membership_Updated:
      return "Membership Updated";
    case CommunicationType::Membership_Cancelled:
      return "Membership Cancelled";
    case CommunicationType::Register_Delegated_Administrator:
      return "Register Delegated Administrator";
    case CommunicationType::Deregister_Delegated_Administrator:
      return "Deregister Delegated Administrator";
    case CommunicationType::Disable_AWS_Service_Access:
      return "Disable AWS Service Access";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CommunicationTypeMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
