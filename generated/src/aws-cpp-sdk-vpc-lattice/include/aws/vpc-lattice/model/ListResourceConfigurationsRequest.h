/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace VPCLattice {
namespace Model {

/**
 */
class ListResourceConfigurationsRequest : public VPCLatticeRequest {
 public:
  AWS_VPCLATTICE_API ListResourceConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListResourceConfigurations"; }

  AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

  AWS_VPCLATTICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the resource gateway for the resource configuration.</p>
   */
  inline const Aws::String& GetResourceGatewayIdentifier() const { return m_resourceGatewayIdentifier; }
  inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
  template <typename ResourceGatewayIdentifierT = Aws::String>
  void SetResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) {
    m_resourceGatewayIdentifierHasBeenSet = true;
    m_resourceGatewayIdentifier = std::forward<ResourceGatewayIdentifierT>(value);
  }
  template <typename ResourceGatewayIdentifierT = Aws::String>
  ListResourceConfigurationsRequest& WithResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) {
    SetResourceGatewayIdentifier(std::forward<ResourceGatewayIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource configuration of type <code>Group</code>.</p>
   */
  inline const Aws::String& GetResourceConfigurationGroupIdentifier() const { return m_resourceConfigurationGroupIdentifier; }
  inline bool ResourceConfigurationGroupIdentifierHasBeenSet() const { return m_resourceConfigurationGroupIdentifierHasBeenSet; }
  template <typename ResourceConfigurationGroupIdentifierT = Aws::String>
  void SetResourceConfigurationGroupIdentifier(ResourceConfigurationGroupIdentifierT&& value) {
    m_resourceConfigurationGroupIdentifierHasBeenSet = true;
    m_resourceConfigurationGroupIdentifier = std::forward<ResourceConfigurationGroupIdentifierT>(value);
  }
  template <typename ResourceConfigurationGroupIdentifierT = Aws::String>
  ListResourceConfigurationsRequest& WithResourceConfigurationGroupIdentifier(ResourceConfigurationGroupIdentifierT&& value) {
    SetResourceConfigurationGroupIdentifier(std::forward<ResourceConfigurationGroupIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The domain verification ID. </p>
   */
  inline const Aws::String& GetDomainVerificationIdentifier() const { return m_domainVerificationIdentifier; }
  inline bool DomainVerificationIdentifierHasBeenSet() const { return m_domainVerificationIdentifierHasBeenSet; }
  template <typename DomainVerificationIdentifierT = Aws::String>
  void SetDomainVerificationIdentifier(DomainVerificationIdentifierT&& value) {
    m_domainVerificationIdentifierHasBeenSet = true;
    m_domainVerificationIdentifier = std::forward<DomainVerificationIdentifierT>(value);
  }
  template <typename DomainVerificationIdentifierT = Aws::String>
  ListResourceConfigurationsRequest& WithDomainVerificationIdentifier(DomainVerificationIdentifierT&& value) {
    SetDomainVerificationIdentifier(std::forward<DomainVerificationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum page size.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListResourceConfigurationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourceConfigurationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceGatewayIdentifier;

  Aws::String m_resourceConfigurationGroupIdentifier;

  Aws::String m_domainVerificationIdentifier;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_resourceGatewayIdentifierHasBeenSet = false;
  bool m_resourceConfigurationGroupIdentifierHasBeenSet = false;
  bool m_domainVerificationIdentifierHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
