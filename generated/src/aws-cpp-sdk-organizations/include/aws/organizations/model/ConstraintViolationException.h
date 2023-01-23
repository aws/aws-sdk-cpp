/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/ConstraintViolationExceptionReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Performing this operation violates a minimum or maximum value limit. For
   * example, attempting to remove the last service control policy (SCP) from an OU
   * or root, inviting or creating too many accounts to the organization, or
   * attaching too many policies to an account, OU, or root. This exception includes
   * a reason that contains additional information about the violated limit:</p>
   *  <p>Some of the reasons in the following list might not be applicable to
   * this specific API or operation.</p>  <ul> <li>
   * <p>ACCOUNT_CANNOT_LEAVE_ORGANIZATION: You attempted to remove the management
   * account from the organization. You can't remove the management account. Instead,
   * after you remove all member accounts, delete the organization itself.</p> </li>
   * <li> <p>ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION: You attempted to remove
   * an account from the organization that doesn't yet have enough information to
   * exist as a standalone account. This account requires you to first complete phone
   * verification. Follow the steps at <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#orgs_manage_accounts_remove-from-master">Removing
   * a member account from your organization</a> in the <i>Organizations User
   * Guide.</i> </p> </li> <li> <p>ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED: You
   * attempted to exceed the number of accounts that you can create in one day.</p>
   * </li> <li> <p>ACCOUNT_NUMBER_LIMIT_EXCEEDED: You attempted to exceed the limit
   * on the number of accounts in an organization. If you need more accounts, contact
   * <a href="https://docs.aws.amazon.com/support/home#/">Amazon Web Services
   * Support</a> to request an increase in your limit. </p> <p>Or the number of
   * invitations that you tried to send would cause you to exceed the limit of
   * accounts in your organization. Send fewer invitations or contact Amazon Web
   * Services Support to request an increase in the number of accounts.</p> 
   * <p>Deleted and closed accounts still count toward your limit.</p> 
   *  <p>If you get this exception when running a command immediately
   * after creating the organization, wait one hour and try again. After an hour, if
   * the command continues to fail with this error, contact <a
   * href="https://docs.aws.amazon.com/support/home#/">Amazon Web Services
   * Support</a>.</p>  </li> <li>
   * <p>CANNOT_REGISTER_MASTER_AS_DELEGATED_ADMINISTRATOR: You attempted to register
   * the management account of the organization as a delegated administrator for an
   * Amazon Web Services service integrated with Organizations. You can designate
   * only a member account as a delegated administrator.</p> </li> <li>
   * <p>CANNOT_CLOSE_MANAGEMENT_ACCOUNT: You attempted to close the management
   * account. To close the management account for the organization, you must first
   * either remove or close all member accounts in the organization. Follow standard
   * account closure process using root credentials.​ </p> </li> <li>
   * <p>CANNOT_REMOVE_DELEGATED_ADMINISTRATOR_FROM_ORG: You attempted to remove an
   * account that is registered as a delegated administrator for a service integrated
   * with your organization. To complete this operation, you must first deregister
   * this account as a delegated administrator. </p> </li> <li>
   * <p>CLOSE_ACCOUNT_QUOTA_EXCEEDED: You have exceeded close account quota for the
   * past 30 days. </p> </li> <li> <p>CLOSE_ACCOUNT_REQUESTS_LIMIT_EXCEEDED: You
   * attempted to exceed the number of accounts that you can close at a time. ​ </p>
   * </li> <li> <p>CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION: To create
   * an organization in the specified region, you must enable all features mode.</p>
   * </li> <li> <p>DELEGATED_ADMINISTRATOR_EXISTS_FOR_THIS_SERVICE: You attempted to
   * register an Amazon Web Services account as a delegated administrator for an
   * Amazon Web Services service that already has a delegated administrator. To
   * complete this operation, you must first deregister any existing delegated
   * administrators for this service.</p> </li> <li>
   * <p>EMAIL_VERIFICATION_CODE_EXPIRED: The email verification code is only valid
   * for a limited period of time. You must resubmit the request and generate a new
   * verfication code.</p> </li> <li> <p>HANDSHAKE_RATE_LIMIT_EXCEEDED: You attempted
   * to exceed the number of handshakes that you can send in one day.</p> </li> <li>
   * <p>INVALID_PAYMENT_INSTRUMENT: You cannot remove an account because no supported
   * payment method is associated with the account. Amazon Web Services does not
   * support cards issued by financial institutions in Russia or Belarus. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
   * your Amazon Web Services payments</a>.</p> </li> <li>
   * <p>MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE: To create an account in
   * this organization, you first must migrate the organization's management account
   * to the marketplace that corresponds to the management account's address. For
   * example, accounts with India addresses must be associated with the AISPL
   * marketplace. All accounts in an organization must be associated with the same
   * marketplace.</p> </li> <li> <p>MASTER_ACCOUNT_MISSING_BUSINESS_LICENSE: Applies
   * only to the Amazon Web Services /&gt; Regions in China. To create an
   * organization, the master must have a valid business license. For more
   * information, contact customer support.</p> </li> <li>
   * <p>MASTER_ACCOUNT_MISSING_CONTACT_INFO: To complete this operation, you must
   * first provide a valid contact address and phone number for the management
   * account. Then try the operation again.</p> </li> <li>
   * <p>MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED: To complete this operation, the
   * management account must have an associated account in the Amazon Web Services
   * GovCloud (US-West) Region. For more information, see <a
   * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">Organizations</a>
   * in the <i>Amazon Web Services GovCloud User Guide.</i> </p> </li> <li>
   * <p>MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED: To create an organization with
   * this management account, you first must associate a valid payment instrument,
   * such as a credit card, with the account. Follow the steps at <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">To
   * leave an organization when all required account information has not yet been
   * provided</a> in the <i>Organizations User Guide.</i> </p> </li> <li>
   * <p>MAX_DELEGATED_ADMINISTRATORS_FOR_SERVICE_LIMIT_EXCEEDED: You attempted to
   * register more delegated administrators than allowed for the service principal.
   * </p> </li> <li> <p>MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED: You attempted to
   * exceed the number of policies of a certain type that can be attached to an
   * entity at one time.</p> </li> <li> <p>MAX_TAG_LIMIT_EXCEEDED: You have exceeded
   * the number of tags allowed on this resource. </p> </li> <li>
   * <p>MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED: To complete this operation with
   * this member account, you first must associate a valid payment instrument, such
   * as a credit card, with the account. Follow the steps at <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">To
   * leave an organization when all required account information has not yet been
   * provided</a> in the <i>Organizations User Guide.</i> </p> </li> <li>
   * <p>MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED: You attempted to detach a policy
   * from an entity that would cause the entity to have fewer than the minimum number
   * of policies of a certain type required.</p> </li> <li>
   * <p>ORGANIZATION_NOT_IN_ALL_FEATURES_MODE: You attempted to perform an operation
   * that requires the organization to be configured to support all features. An
   * organization that supports only consolidated billing features can't perform this
   * operation.</p> </li> <li> <p>OU_DEPTH_LIMIT_EXCEEDED: You attempted to create an
   * OU tree that is too many levels deep.</p> </li> <li>
   * <p>OU_NUMBER_LIMIT_EXCEEDED: You attempted to exceed the number of OUs that you
   * can have in an organization.</p> </li> <li> <p>POLICY_CONTENT_LIMIT_EXCEEDED:
   * You attempted to create a policy that is larger than the maximum size.</p> </li>
   * <li> <p>POLICY_NUMBER_LIMIT_EXCEEDED: You attempted to exceed the number of
   * policies that you can have in an organization.</p> </li> <li>
   * <p>SERVICE_ACCESS_NOT_ENABLED: You attempted to register a delegated
   * administrator before you enabled service access. Call the
   * <code>EnableAWSServiceAccess</code> API first.</p> </li> <li>
   * <p>TAG_POLICY_VIOLATION: You attempted to create or update a resource with tags
   * that are not compliant with the tag policy requirements for this account.</p>
   * </li> <li> <p>WAIT_PERIOD_ACTIVE: After you create an Amazon Web Services
   * account, there is a waiting period before you can remove it from the
   * organization. If you get an error that indicates that a wait period is required,
   * try again in a few days.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ConstraintViolationException">AWS
   * API Reference</a></p>
   */
  class ConstraintViolationException
  {
  public:
    AWS_ORGANIZATIONS_API ConstraintViolationException();
    AWS_ORGANIZATIONS_API ConstraintViolationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API ConstraintViolationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConstraintViolationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConstraintViolationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConstraintViolationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const ConstraintViolationExceptionReason& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const ConstraintViolationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(ConstraintViolationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline ConstraintViolationException& WithReason(const ConstraintViolationExceptionReason& value) { SetReason(value); return *this;}

    
    inline ConstraintViolationException& WithReason(ConstraintViolationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConstraintViolationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
