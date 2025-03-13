/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/CreateAccountState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/organizations/model/CreateAccountFailureReason.h>
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
   * <p>Contains the status about a <a>CreateAccount</a> or
   * <a>CreateGovCloudAccount</a> request to create an Amazon Web Services account or
   * an Amazon Web Services GovCloud (US) account in an organization.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateAccountStatus">AWS
   * API Reference</a></p>
   */
  class CreateAccountStatus
  {
  public:
    AWS_ORGANIZATIONS_API CreateAccountStatus() = default;
    AWS_ORGANIZATIONS_API CreateAccountStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API CreateAccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateAccountStatus& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    CreateAccountStatus& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asynchronous request to create an Amazon Web Services
     * account.</p>
     */
    inline CreateAccountState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CreateAccountState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateAccountStatus& WithState(CreateAccountState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedTimestamp() const { return m_requestedTimestamp; }
    inline bool RequestedTimestampHasBeenSet() const { return m_requestedTimestampHasBeenSet; }
    template<typename RequestedTimestampT = Aws::Utils::DateTime>
    void SetRequestedTimestamp(RequestedTimestampT&& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = std::forward<RequestedTimestampT>(value); }
    template<typename RequestedTimestampT = Aws::Utils::DateTime>
    CreateAccountStatus& WithRequestedTimestamp(RequestedTimestampT&& value) { SetRequestedTimestamp(std::forward<RequestedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
    inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    void SetCompletedTimestamp(CompletedTimestampT&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::forward<CompletedTimestampT>(value); }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    CreateAccountStatus& WithCompletedTimestamp(CompletedTimestampT&& value) { SetCompletedTimestamp(std::forward<CompletedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreateAccountStatus& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline const Aws::String& GetGovCloudAccountId() const { return m_govCloudAccountId; }
    inline bool GovCloudAccountIdHasBeenSet() const { return m_govCloudAccountIdHasBeenSet; }
    template<typename GovCloudAccountIdT = Aws::String>
    void SetGovCloudAccountId(GovCloudAccountIdT&& value) { m_govCloudAccountIdHasBeenSet = true; m_govCloudAccountId = std::forward<GovCloudAccountIdT>(value); }
    template<typename GovCloudAccountIdT = Aws::String>
    CreateAccountStatus& WithGovCloudAccountId(GovCloudAccountIdT&& value) { SetGovCloudAccountId(std::forward<GovCloudAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the request failed, a description of the reason for the failure.</p> <ul>
     * <li> <p>ACCOUNT_LIMIT_EXCEEDED: The account couldn't be created because you
     * reached the limit on the number of accounts in your organization.</p> </li> <li>
     * <p>CONCURRENT_ACCOUNT_MODIFICATION: You already submitted a request with the
     * same information.</p> </li> <li> <p>EMAIL_ALREADY_EXISTS: The account could not
     * be created because another Amazon Web Services account with that email address
     * already exists.</p> </li> <li> <p>FAILED_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization failed to receive business license
     * validation.</p> </li> <li> <p>GOVCLOUD_ACCOUNT_ALREADY_EXISTS: The account in
     * the Amazon Web Services GovCloud (US) Region could not be created because this
     * Region already includes an account with that email address.</p> </li> <li>
     * <p>IDENTITY_INVALID_BUSINESS_VALIDATION: The Amazon Web Services account that
     * owns your organization can't complete business license validation because it
     * doesn't have valid identity data.</p> </li> <li> <p>INVALID_ADDRESS: The account
     * could not be created because the address you provided is not valid.</p> </li>
     * <li> <p>INVALID_EMAIL: The account could not be created because the email
     * address you provided is not valid.</p> </li> <li> <p>INVALID_PAYMENT_INSTRUMENT:
     * The Amazon Web Services account that owns your organization does not have a
     * supported payment method associated with the account. Amazon Web Services does
     * not support cards issued by financial institutions in Russia or Belarus. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
     * your Amazon Web Services payments</a>.</p> </li> <li> <p>INTERNAL_FAILURE: The
     * account could not be created because of an internal failure. Try again later. If
     * the problem persists, contact Amazon Web Services Customer Support.</p> </li>
     * <li> <p>MISSING_BUSINESS_VALIDATION: The Amazon Web Services account that owns
     * your organization has not received Business Validation.</p> </li> <li> <p>
     * MISSING_PAYMENT_INSTRUMENT: You must configure the management account with a
     * valid payment method, such as a credit card.</p> </li> <li>
     * <p>PENDING_BUSINESS_VALIDATION: The Amazon Web Services account that owns your
     * organization is still in the process of completing business license
     * validation.</p> </li> <li> <p>UNKNOWN_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization has an unknown issue with business
     * license validation.</p> </li> </ul>
     */
    inline CreateAccountFailureReason GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(CreateAccountFailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline CreateAccountStatus& WithFailureReason(CreateAccountFailureReason value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    CreateAccountState m_state{CreateAccountState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_requestedTimestamp{};
    bool m_requestedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp{};
    bool m_completedTimestampHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_govCloudAccountId;
    bool m_govCloudAccountIdHasBeenSet = false;

    CreateAccountFailureReason m_failureReason{CreateAccountFailureReason::NOT_SET};
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
