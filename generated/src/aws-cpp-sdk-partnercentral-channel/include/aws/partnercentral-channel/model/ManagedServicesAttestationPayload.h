/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/Address.h>
#include <aws/partnercentral-channel/model/ManagedServicesSupportedService.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Payload for managed services attestation channel contract requests. Applies
 * only to managed services attestation channel contracts.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ManagedServicesAttestationPayload">AWS
 * API Reference</a></p>
 */
class ManagedServicesAttestationPayload {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationPayload() = default;
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The legal name of the end customer's legal entity.</p>
   */
  inline const Aws::String& GetLegalEntityName() const { return m_legalEntityName; }
  inline bool LegalEntityNameHasBeenSet() const { return m_legalEntityNameHasBeenSet; }
  template <typename LegalEntityNameT = Aws::String>
  void SetLegalEntityName(LegalEntityNameT&& value) {
    m_legalEntityNameHasBeenSet = true;
    m_legalEntityName = std::forward<LegalEntityNameT>(value);
  }
  template <typename LegalEntityNameT = Aws::String>
  ManagedServicesAttestationPayload& WithLegalEntityName(LegalEntityNameT&& value) {
    SetLegalEntityName(std::forward<LegalEntityNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the managed services relationship to cover with the
   * attestation.</p>
   */
  inline const Aws::String& GetRelationshipIdentifier() const { return m_relationshipIdentifier; }
  inline bool RelationshipIdentifierHasBeenSet() const { return m_relationshipIdentifierHasBeenSet; }
  template <typename RelationshipIdentifierT = Aws::String>
  void SetRelationshipIdentifier(RelationshipIdentifierT&& value) {
    m_relationshipIdentifierHasBeenSet = true;
    m_relationshipIdentifier = std::forward<RelationshipIdentifierT>(value);
  }
  template <typename RelationshipIdentifierT = Aws::String>
  ManagedServicesAttestationPayload& WithRelationshipIdentifier(RelationshipIdentifierT&& value) {
    SetRelationshipIdentifier(std::forward<RelationshipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the program management account for the relationship.</p>
   */
  inline const Aws::String& GetProgramManagementAccountIdentifier() const { return m_programManagementAccountIdentifier; }
  inline bool ProgramManagementAccountIdentifierHasBeenSet() const { return m_programManagementAccountIdentifierHasBeenSet; }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  void SetProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    m_programManagementAccountIdentifierHasBeenSet = true;
    m_programManagementAccountIdentifier = std::forward<ProgramManagementAccountIdentifierT>(value);
  }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  ManagedServicesAttestationPayload& WithProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    SetProgramManagementAccountIdentifier(std::forward<ProgramManagementAccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account IDs of the end customer's member accounts to cover, not
   * allowed when the account scope is the entire organization.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMemberAccountIds() const { return m_memberAccountIds; }
  inline bool MemberAccountIdsHasBeenSet() const { return m_memberAccountIdsHasBeenSet; }
  template <typename MemberAccountIdsT = Aws::Vector<Aws::String>>
  void SetMemberAccountIds(MemberAccountIdsT&& value) {
    m_memberAccountIdsHasBeenSet = true;
    m_memberAccountIds = std::forward<MemberAccountIdsT>(value);
  }
  template <typename MemberAccountIdsT = Aws::Vector<Aws::String>>
  ManagedServicesAttestationPayload& WithMemberAccountIds(MemberAccountIdsT&& value) {
    SetMemberAccountIds(std::forward<MemberAccountIdsT>(value));
    return *this;
  }
  template <typename MemberAccountIdsT = Aws::String>
  ManagedServicesAttestationPayload& AddMemberAccountIds(MemberAccountIdsT&& value) {
    m_memberAccountIdsHasBeenSet = true;
    m_memberAccountIds.emplace_back(std::forward<MemberAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the attestation, which must be after the start date of the
   * relationship.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  ManagedServicesAttestationPayload& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The managed services that the partner provides to the end customer.</p>
   */
  inline const Aws::Vector<ManagedServicesSupportedService>& GetSupportedServices() const { return m_supportedServices; }
  inline bool SupportedServicesHasBeenSet() const { return m_supportedServicesHasBeenSet; }
  template <typename SupportedServicesT = Aws::Vector<ManagedServicesSupportedService>>
  void SetSupportedServices(SupportedServicesT&& value) {
    m_supportedServicesHasBeenSet = true;
    m_supportedServices = std::forward<SupportedServicesT>(value);
  }
  template <typename SupportedServicesT = Aws::Vector<ManagedServicesSupportedService>>
  ManagedServicesAttestationPayload& WithSupportedServices(SupportedServicesT&& value) {
    SetSupportedServices(std::forward<SupportedServicesT>(value));
    return *this;
  }
  inline ManagedServicesAttestationPayload& AddSupportedServices(ManagedServicesSupportedService value) {
    m_supportedServicesHasBeenSet = true;
    m_supportedServices.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address of the end customer's legal entity.</p>
   */
  inline const Address& GetLegalEntityAddress() const { return m_legalEntityAddress; }
  inline bool LegalEntityAddressHasBeenSet() const { return m_legalEntityAddressHasBeenSet; }
  template <typename LegalEntityAddressT = Address>
  void SetLegalEntityAddress(LegalEntityAddressT&& value) {
    m_legalEntityAddressHasBeenSet = true;
    m_legalEntityAddress = std::forward<LegalEntityAddressT>(value);
  }
  template <typename LegalEntityAddressT = Address>
  ManagedServicesAttestationPayload& WithLegalEntityAddress(LegalEntityAddressT&& value) {
    SetLegalEntityAddress(std::forward<LegalEntityAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the person who signs the attestation for the end customer.</p>
   */
  inline const Aws::String& GetSignatoryName() const { return m_signatoryName; }
  inline bool SignatoryNameHasBeenSet() const { return m_signatoryNameHasBeenSet; }
  template <typename SignatoryNameT = Aws::String>
  void SetSignatoryName(SignatoryNameT&& value) {
    m_signatoryNameHasBeenSet = true;
    m_signatoryName = std::forward<SignatoryNameT>(value);
  }
  template <typename SignatoryNameT = Aws::String>
  ManagedServicesAttestationPayload& WithSignatoryName(SignatoryNameT&& value) {
    SetSignatoryName(std::forward<SignatoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address to which the attestation is sent for signature.</p>
   */
  inline const Aws::String& GetSignatoryEmail() const { return m_signatoryEmail; }
  inline bool SignatoryEmailHasBeenSet() const { return m_signatoryEmailHasBeenSet; }
  template <typename SignatoryEmailT = Aws::String>
  void SetSignatoryEmail(SignatoryEmailT&& value) {
    m_signatoryEmailHasBeenSet = true;
    m_signatoryEmail = std::forward<SignatoryEmailT>(value);
  }
  template <typename SignatoryEmailT = Aws::String>
  ManagedServicesAttestationPayload& WithSignatoryEmail(SignatoryEmailT&& value) {
    SetSignatoryEmail(std::forward<SignatoryEmailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_legalEntityName;

  Aws::String m_relationshipIdentifier;

  Aws::String m_programManagementAccountIdentifier;

  Aws::Vector<Aws::String> m_memberAccountIds;

  Aws::Utils::DateTime m_endDate{};

  Aws::Vector<ManagedServicesSupportedService> m_supportedServices;

  Address m_legalEntityAddress;

  Aws::String m_signatoryName;

  Aws::String m_signatoryEmail;
  bool m_legalEntityNameHasBeenSet = false;
  bool m_relationshipIdentifierHasBeenSet = false;
  bool m_programManagementAccountIdentifierHasBeenSet = false;
  bool m_memberAccountIdsHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_supportedServicesHasBeenSet = false;
  bool m_legalEntityAddressHasBeenSet = false;
  bool m_signatoryNameHasBeenSet = false;
  bool m_signatoryEmailHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
