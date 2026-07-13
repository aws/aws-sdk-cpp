/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EdgePropertySummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains summary information about a service topology edge.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceTopologyEdgeSummary">AWS
 * API Reference</a></p>
 */
class ServiceTopologyEdgeSummary {
 public:
  AWS_RESILIENCEHUBV2_API ServiceTopologyEdgeSummary() = default;
  AWS_RESILIENCEHUBV2_API ServiceTopologyEdgeSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceTopologyEdgeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the source resource.</p>
   */
  inline const Aws::String& GetSourceResourceIdentifier() const { return m_sourceResourceIdentifier; }
  inline bool SourceResourceIdentifierHasBeenSet() const { return m_sourceResourceIdentifierHasBeenSet; }
  template <typename SourceResourceIdentifierT = Aws::String>
  void SetSourceResourceIdentifier(SourceResourceIdentifierT&& value) {
    m_sourceResourceIdentifierHasBeenSet = true;
    m_sourceResourceIdentifier = std::forward<SourceResourceIdentifierT>(value);
  }
  template <typename SourceResourceIdentifierT = Aws::String>
  ServiceTopologyEdgeSummary& WithSourceResourceIdentifier(SourceResourceIdentifierT&& value) {
    SetSourceResourceIdentifier(std::forward<SourceResourceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the destination resource.</p>
   */
  inline const Aws::String& GetDestinationResourceIdentifier() const { return m_destinationResourceIdentifier; }
  inline bool DestinationResourceIdentifierHasBeenSet() const { return m_destinationResourceIdentifierHasBeenSet; }
  template <typename DestinationResourceIdentifierT = Aws::String>
  void SetDestinationResourceIdentifier(DestinationResourceIdentifierT&& value) {
    m_destinationResourceIdentifierHasBeenSet = true;
    m_destinationResourceIdentifier = std::forward<DestinationResourceIdentifierT>(value);
  }
  template <typename DestinationResourceIdentifierT = Aws::String>
  ServiceTopologyEdgeSummary& WithDestinationResourceIdentifier(DestinationResourceIdentifierT&& value) {
    SetDestinationResourceIdentifier(std::forward<DestinationResourceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region of the source resource.</p>
   */
  inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
  inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
  template <typename SourceRegionT = Aws::String>
  void SetSourceRegion(SourceRegionT&& value) {
    m_sourceRegionHasBeenSet = true;
    m_sourceRegion = std::forward<SourceRegionT>(value);
  }
  template <typename SourceRegionT = Aws::String>
  ServiceTopologyEdgeSummary& WithSourceRegion(SourceRegionT&& value) {
    SetSourceRegion(std::forward<SourceRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region of the destination resource.</p>
   */
  inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
  inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
  template <typename DestinationRegionT = Aws::String>
  void SetDestinationRegion(DestinationRegionT&& value) {
    m_destinationRegionHasBeenSet = true;
    m_destinationRegion = std::forward<DestinationRegionT>(value);
  }
  template <typename DestinationRegionT = Aws::String>
  ServiceTopologyEdgeSummary& WithDestinationRegion(DestinationRegionT&& value) {
    SetDestinationRegion(std::forward<DestinationRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the source resource.</p>
   */
  inline const Aws::String& GetSourceAccount() const { return m_sourceAccount; }
  inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }
  template <typename SourceAccountT = Aws::String>
  void SetSourceAccount(SourceAccountT&& value) {
    m_sourceAccountHasBeenSet = true;
    m_sourceAccount = std::forward<SourceAccountT>(value);
  }
  template <typename SourceAccountT = Aws::String>
  ServiceTopologyEdgeSummary& WithSourceAccount(SourceAccountT&& value) {
    SetSourceAccount(std::forward<SourceAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the destination resource.</p>
   */
  inline const Aws::String& GetDestinationAccount() const { return m_destinationAccount; }
  inline bool DestinationAccountHasBeenSet() const { return m_destinationAccountHasBeenSet; }
  template <typename DestinationAccountT = Aws::String>
  void SetDestinationAccount(DestinationAccountT&& value) {
    m_destinationAccountHasBeenSet = true;
    m_destinationAccount = std::forward<DestinationAccountT>(value);
  }
  template <typename DestinationAccountT = Aws::String>
  ServiceTopologyEdgeSummary& WithDestinationAccount(DestinationAccountT&& value) {
    SetDestinationAccount(std::forward<DestinationAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties of the topology edge.</p>
   */
  inline const Aws::Vector<EdgePropertySummary>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Vector<EdgePropertySummary>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Vector<EdgePropertySummary>>
  ServiceTopologyEdgeSummary& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesT = EdgePropertySummary>
  ServiceTopologyEdgeSummary& AddProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace_back(std::forward<PropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceResourceIdentifier;

  Aws::String m_destinationResourceIdentifier;

  Aws::String m_sourceRegion;

  Aws::String m_destinationRegion;

  Aws::String m_sourceAccount;

  Aws::String m_destinationAccount;

  Aws::Vector<EdgePropertySummary> m_properties;
  bool m_sourceResourceIdentifierHasBeenSet = false;
  bool m_destinationResourceIdentifierHasBeenSet = false;
  bool m_sourceRegionHasBeenSet = false;
  bool m_destinationRegionHasBeenSet = false;
  bool m_sourceAccountHasBeenSet = false;
  bool m_destinationAccountHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
