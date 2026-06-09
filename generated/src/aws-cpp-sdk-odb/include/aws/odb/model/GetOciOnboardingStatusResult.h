/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/OciIamRole.h>
#include <aws/odb/model/OciIdentityDomain.h>
#include <aws/odb/model/OciOnboardingStatus.h>
#include <aws/odb/model/SubscriptionError.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class GetOciOnboardingStatusResult {
 public:
  AWS_ODB_API GetOciOnboardingStatusResult() = default;
  AWS_ODB_API GetOciOnboardingStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API GetOciOnboardingStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline OciOnboardingStatus GetStatus() const { return m_status; }
  inline void SetStatus(OciOnboardingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetOciOnboardingStatusResult& WithStatus(OciOnboardingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The existing OCI tenancy activation link for your Amazon Web Services
   * account.</p>
   */
  inline const Aws::String& GetExistingTenancyActivationLink() const { return m_existingTenancyActivationLink; }
  template <typename ExistingTenancyActivationLinkT = Aws::String>
  void SetExistingTenancyActivationLink(ExistingTenancyActivationLinkT&& value) {
    m_existingTenancyActivationLinkHasBeenSet = true;
    m_existingTenancyActivationLink = std::forward<ExistingTenancyActivationLinkT>(value);
  }
  template <typename ExistingTenancyActivationLinkT = Aws::String>
  GetOciOnboardingStatusResult& WithExistingTenancyActivationLink(ExistingTenancyActivationLinkT&& value) {
    SetExistingTenancyActivationLink(std::forward<ExistingTenancyActivationLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new OCI tenancy activation link for your Amazon Web Services account.</p>
   */
  inline const Aws::String& GetNewTenancyActivationLink() const { return m_newTenancyActivationLink; }
  template <typename NewTenancyActivationLinkT = Aws::String>
  void SetNewTenancyActivationLink(NewTenancyActivationLinkT&& value) {
    m_newTenancyActivationLinkHasBeenSet = true;
    m_newTenancyActivationLink = std::forward<NewTenancyActivationLinkT>(value);
  }
  template <typename NewTenancyActivationLinkT = Aws::String>
  GetOciOnboardingStatusResult& WithNewTenancyActivationLink(NewTenancyActivationLinkT&& value) {
    SetNewTenancyActivationLink(std::forward<NewTenancyActivationLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Cloud Infrastructure (OCI) identity domain information in the
   * onboarding status response.</p>
   */
  inline const OciIdentityDomain& GetOciIdentityDomain() const { return m_ociIdentityDomain; }
  template <typename OciIdentityDomainT = OciIdentityDomain>
  void SetOciIdentityDomain(OciIdentityDomainT&& value) {
    m_ociIdentityDomainHasBeenSet = true;
    m_ociIdentityDomain = std::forward<OciIdentityDomainT>(value);
  }
  template <typename OciIdentityDomainT = OciIdentityDomain>
  GetOciOnboardingStatusResult& WithOciIdentityDomain(OciIdentityDomainT&& value) {
    SetOciIdentityDomain(std::forward<OciIdentityDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services Identity and Access Management (IAM) service
   * roles used for Autonomous Database integration with Oracle Cloud Infrastructure
   * (OCI).</p>
   */
  inline const Aws::Vector<OciIamRole>& GetAutonomousDatabaseOciIntegrationIamRoles() const {
    return m_autonomousDatabaseOciIntegrationIamRoles;
  }
  template <typename AutonomousDatabaseOciIntegrationIamRolesT = Aws::Vector<OciIamRole>>
  void SetAutonomousDatabaseOciIntegrationIamRoles(AutonomousDatabaseOciIntegrationIamRolesT&& value) {
    m_autonomousDatabaseOciIntegrationIamRolesHasBeenSet = true;
    m_autonomousDatabaseOciIntegrationIamRoles = std::forward<AutonomousDatabaseOciIntegrationIamRolesT>(value);
  }
  template <typename AutonomousDatabaseOciIntegrationIamRolesT = Aws::Vector<OciIamRole>>
  GetOciOnboardingStatusResult& WithAutonomousDatabaseOciIntegrationIamRoles(AutonomousDatabaseOciIntegrationIamRolesT&& value) {
    SetAutonomousDatabaseOciIntegrationIamRoles(std::forward<AutonomousDatabaseOciIntegrationIamRolesT>(value));
    return *this;
  }
  template <typename AutonomousDatabaseOciIntegrationIamRolesT = OciIamRole>
  GetOciOnboardingStatusResult& AddAutonomousDatabaseOciIntegrationIamRoles(AutonomousDatabaseOciIntegrationIamRolesT&& value) {
    m_autonomousDatabaseOciIntegrationIamRolesHasBeenSet = true;
    m_autonomousDatabaseOciIntegrationIamRoles.emplace_back(std::forward<AutonomousDatabaseOciIntegrationIamRolesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Oracle Cloud Infrastructure (OCI) tenancy that
   * is linked to your Amazon Web Services account.</p>
   */
  inline const Aws::String& GetLinkedOciTenancyId() const { return m_linkedOciTenancyId; }
  template <typename LinkedOciTenancyIdT = Aws::String>
  void SetLinkedOciTenancyId(LinkedOciTenancyIdT&& value) {
    m_linkedOciTenancyIdHasBeenSet = true;
    m_linkedOciTenancyId = std::forward<LinkedOciTenancyIdT>(value);
  }
  template <typename LinkedOciTenancyIdT = Aws::String>
  GetOciOnboardingStatusResult& WithLinkedOciTenancyId(LinkedOciTenancyIdT&& value) {
    SetLinkedOciTenancyId(std::forward<LinkedOciTenancyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Oracle Cloud Infrastructure (OCI) compartment
   * that is linked to your Amazon Web Services account.</p>
   */
  inline const Aws::String& GetLinkedOciCompartmentId() const { return m_linkedOciCompartmentId; }
  template <typename LinkedOciCompartmentIdT = Aws::String>
  void SetLinkedOciCompartmentId(LinkedOciCompartmentIdT&& value) {
    m_linkedOciCompartmentIdHasBeenSet = true;
    m_linkedOciCompartmentId = std::forward<LinkedOciCompartmentIdT>(value);
  }
  template <typename LinkedOciCompartmentIdT = Aws::String>
  GetOciOnboardingStatusResult& WithLinkedOciCompartmentId(LinkedOciCompartmentIdT&& value) {
    SetLinkedOciCompartmentId(std::forward<LinkedOciCompartmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of errors that occurred during the subscription process for your
   * Amazon Web Services account, if any.</p>
   */
  inline const Aws::Vector<SubscriptionError>& GetSubscriptionErrors() const { return m_subscriptionErrors; }
  template <typename SubscriptionErrorsT = Aws::Vector<SubscriptionError>>
  void SetSubscriptionErrors(SubscriptionErrorsT&& value) {
    m_subscriptionErrorsHasBeenSet = true;
    m_subscriptionErrors = std::forward<SubscriptionErrorsT>(value);
  }
  template <typename SubscriptionErrorsT = Aws::Vector<SubscriptionError>>
  GetOciOnboardingStatusResult& WithSubscriptionErrors(SubscriptionErrorsT&& value) {
    SetSubscriptionErrors(std::forward<SubscriptionErrorsT>(value));
    return *this;
  }
  template <typename SubscriptionErrorsT = SubscriptionError>
  GetOciOnboardingStatusResult& AddSubscriptionErrors(SubscriptionErrorsT&& value) {
    m_subscriptionErrorsHasBeenSet = true;
    m_subscriptionErrors.emplace_back(std::forward<SubscriptionErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetOciOnboardingStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  OciOnboardingStatus m_status{OciOnboardingStatus::NOT_SET};

  Aws::String m_existingTenancyActivationLink;

  Aws::String m_newTenancyActivationLink;

  OciIdentityDomain m_ociIdentityDomain;

  Aws::Vector<OciIamRole> m_autonomousDatabaseOciIntegrationIamRoles;

  Aws::String m_linkedOciTenancyId;

  Aws::String m_linkedOciCompartmentId;

  Aws::Vector<SubscriptionError> m_subscriptionErrors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_existingTenancyActivationLinkHasBeenSet = false;
  bool m_newTenancyActivationLinkHasBeenSet = false;
  bool m_ociIdentityDomainHasBeenSet = false;
  bool m_autonomousDatabaseOciIntegrationIamRolesHasBeenSet = false;
  bool m_linkedOciTenancyIdHasBeenSet = false;
  bool m_linkedOciCompartmentIdHasBeenSet = false;
  bool m_subscriptionErrorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
