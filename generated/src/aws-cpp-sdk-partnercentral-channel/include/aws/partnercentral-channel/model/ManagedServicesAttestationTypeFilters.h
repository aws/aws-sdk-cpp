/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

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
 * <p>Filters specific to managed services attestation channel contracts. Applies
 * only to managed services attestation channel contracts.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ManagedServicesAttestationTypeFilters">AWS
 * API Reference</a></p>
 */
class ManagedServicesAttestationTypeFilters {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationTypeFilters() = default;
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationTypeFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationTypeFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by relationship identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRelationshipIdentifiers() const { return m_relationshipIdentifiers; }
  inline bool RelationshipIdentifiersHasBeenSet() const { return m_relationshipIdentifiersHasBeenSet; }
  template <typename RelationshipIdentifiersT = Aws::Vector<Aws::String>>
  void SetRelationshipIdentifiers(RelationshipIdentifiersT&& value) {
    m_relationshipIdentifiersHasBeenSet = true;
    m_relationshipIdentifiers = std::forward<RelationshipIdentifiersT>(value);
  }
  template <typename RelationshipIdentifiersT = Aws::Vector<Aws::String>>
  ManagedServicesAttestationTypeFilters& WithRelationshipIdentifiers(RelationshipIdentifiersT&& value) {
    SetRelationshipIdentifiers(std::forward<RelationshipIdentifiersT>(value));
    return *this;
  }
  template <typename RelationshipIdentifiersT = Aws::String>
  ManagedServicesAttestationTypeFilters& AddRelationshipIdentifiers(RelationshipIdentifiersT&& value) {
    m_relationshipIdentifiersHasBeenSet = true;
    m_relationshipIdentifiers.emplace_back(std::forward<RelationshipIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by legal entity names.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLegalEntityNames() const { return m_legalEntityNames; }
  inline bool LegalEntityNamesHasBeenSet() const { return m_legalEntityNamesHasBeenSet; }
  template <typename LegalEntityNamesT = Aws::Vector<Aws::String>>
  void SetLegalEntityNames(LegalEntityNamesT&& value) {
    m_legalEntityNamesHasBeenSet = true;
    m_legalEntityNames = std::forward<LegalEntityNamesT>(value);
  }
  template <typename LegalEntityNamesT = Aws::Vector<Aws::String>>
  ManagedServicesAttestationTypeFilters& WithLegalEntityNames(LegalEntityNamesT&& value) {
    SetLegalEntityNames(std::forward<LegalEntityNamesT>(value));
    return *this;
  }
  template <typename LegalEntityNamesT = Aws::String>
  ManagedServicesAttestationTypeFilters& AddLegalEntityNames(LegalEntityNamesT&& value) {
    m_legalEntityNamesHasBeenSet = true;
    m_legalEntityNames.emplace_back(std::forward<LegalEntityNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_relationshipIdentifiers;

  Aws::Vector<Aws::String> m_legalEntityNames;
  bool m_relationshipIdentifiersHasBeenSet = false;
  bool m_legalEntityNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
