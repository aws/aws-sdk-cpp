/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AssertionCreatedMetadata.h>
#include <aws/resiliencehubv2/model/AssertionDeletedMetadata.h>
#include <aws/resiliencehubv2/model/AssertionUpdatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceAchievabilityUpdatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceCreatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceDeletedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceFunctionCreatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceFunctionDeletedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceFunctionResourcesAddedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceFunctionResourcesRemovedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceFunctionUpdatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceInputSourcesUpdatedMetadata.h>
#include <aws/resiliencehubv2/model/ServicePolicyAssociatedMetadata.h>
#include <aws/resiliencehubv2/model/ServicePolicyDisassociatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceResourcesAssociatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceResourcesDisassociatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceSystemAssociatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceSystemDisassociatedMetadata.h>
#include <aws/resiliencehubv2/model/ServiceWorkflowUpdatedMetadata.h>

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
 * <p>Type-specific metadata for each service event type.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceEventMetadata">AWS
 * API Reference</a></p>
 */
class ServiceEventMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServiceEventMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServiceEventMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Metadata for a service created event.</p>
   */
  inline const ServiceCreatedMetadata& GetServiceCreated() const { return m_serviceCreated; }
  inline bool ServiceCreatedHasBeenSet() const { return m_serviceCreatedHasBeenSet; }
  template <typename ServiceCreatedT = ServiceCreatedMetadata>
  void SetServiceCreated(ServiceCreatedT&& value) {
    m_serviceCreatedHasBeenSet = true;
    m_serviceCreated = std::forward<ServiceCreatedT>(value);
  }
  template <typename ServiceCreatedT = ServiceCreatedMetadata>
  ServiceEventMetadata& WithServiceCreated(ServiceCreatedT&& value) {
    SetServiceCreated(std::forward<ServiceCreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service deleted event.</p>
   */
  inline const ServiceDeletedMetadata& GetServiceDeleted() const { return m_serviceDeleted; }
  inline bool ServiceDeletedHasBeenSet() const { return m_serviceDeletedHasBeenSet; }
  template <typename ServiceDeletedT = ServiceDeletedMetadata>
  void SetServiceDeleted(ServiceDeletedT&& value) {
    m_serviceDeletedHasBeenSet = true;
    m_serviceDeleted = std::forward<ServiceDeletedT>(value);
  }
  template <typename ServiceDeletedT = ServiceDeletedMetadata>
  ServiceEventMetadata& WithServiceDeleted(ServiceDeletedT&& value) {
    SetServiceDeleted(std::forward<ServiceDeletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service system associated event.</p>
   */
  inline const ServiceSystemAssociatedMetadata& GetServiceSystemAssociated() const { return m_serviceSystemAssociated; }
  inline bool ServiceSystemAssociatedHasBeenSet() const { return m_serviceSystemAssociatedHasBeenSet; }
  template <typename ServiceSystemAssociatedT = ServiceSystemAssociatedMetadata>
  void SetServiceSystemAssociated(ServiceSystemAssociatedT&& value) {
    m_serviceSystemAssociatedHasBeenSet = true;
    m_serviceSystemAssociated = std::forward<ServiceSystemAssociatedT>(value);
  }
  template <typename ServiceSystemAssociatedT = ServiceSystemAssociatedMetadata>
  ServiceEventMetadata& WithServiceSystemAssociated(ServiceSystemAssociatedT&& value) {
    SetServiceSystemAssociated(std::forward<ServiceSystemAssociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service system disassociated event.</p>
   */
  inline const ServiceSystemDisassociatedMetadata& GetServiceSystemDisassociated() const { return m_serviceSystemDisassociated; }
  inline bool ServiceSystemDisassociatedHasBeenSet() const { return m_serviceSystemDisassociatedHasBeenSet; }
  template <typename ServiceSystemDisassociatedT = ServiceSystemDisassociatedMetadata>
  void SetServiceSystemDisassociated(ServiceSystemDisassociatedT&& value) {
    m_serviceSystemDisassociatedHasBeenSet = true;
    m_serviceSystemDisassociated = std::forward<ServiceSystemDisassociatedT>(value);
  }
  template <typename ServiceSystemDisassociatedT = ServiceSystemDisassociatedMetadata>
  ServiceEventMetadata& WithServiceSystemDisassociated(ServiceSystemDisassociatedT&& value) {
    SetServiceSystemDisassociated(std::forward<ServiceSystemDisassociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service resources associated event.</p>
   */
  inline const ServiceResourcesAssociatedMetadata& GetServiceResourcesAssociated() const { return m_serviceResourcesAssociated; }
  inline bool ServiceResourcesAssociatedHasBeenSet() const { return m_serviceResourcesAssociatedHasBeenSet; }
  template <typename ServiceResourcesAssociatedT = ServiceResourcesAssociatedMetadata>
  void SetServiceResourcesAssociated(ServiceResourcesAssociatedT&& value) {
    m_serviceResourcesAssociatedHasBeenSet = true;
    m_serviceResourcesAssociated = std::forward<ServiceResourcesAssociatedT>(value);
  }
  template <typename ServiceResourcesAssociatedT = ServiceResourcesAssociatedMetadata>
  ServiceEventMetadata& WithServiceResourcesAssociated(ServiceResourcesAssociatedT&& value) {
    SetServiceResourcesAssociated(std::forward<ServiceResourcesAssociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service resources disassociated event.</p>
   */
  inline const ServiceResourcesDisassociatedMetadata& GetServiceResourcesDisassociated() const { return m_serviceResourcesDisassociated; }
  inline bool ServiceResourcesDisassociatedHasBeenSet() const { return m_serviceResourcesDisassociatedHasBeenSet; }
  template <typename ServiceResourcesDisassociatedT = ServiceResourcesDisassociatedMetadata>
  void SetServiceResourcesDisassociated(ServiceResourcesDisassociatedT&& value) {
    m_serviceResourcesDisassociatedHasBeenSet = true;
    m_serviceResourcesDisassociated = std::forward<ServiceResourcesDisassociatedT>(value);
  }
  template <typename ServiceResourcesDisassociatedT = ServiceResourcesDisassociatedMetadata>
  ServiceEventMetadata& WithServiceResourcesDisassociated(ServiceResourcesDisassociatedT&& value) {
    SetServiceResourcesDisassociated(std::forward<ServiceResourcesDisassociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service workflow updated event.</p>
   */
  inline const ServiceWorkflowUpdatedMetadata& GetServiceWorkflowUpdated() const { return m_serviceWorkflowUpdated; }
  inline bool ServiceWorkflowUpdatedHasBeenSet() const { return m_serviceWorkflowUpdatedHasBeenSet; }
  template <typename ServiceWorkflowUpdatedT = ServiceWorkflowUpdatedMetadata>
  void SetServiceWorkflowUpdated(ServiceWorkflowUpdatedT&& value) {
    m_serviceWorkflowUpdatedHasBeenSet = true;
    m_serviceWorkflowUpdated = std::forward<ServiceWorkflowUpdatedT>(value);
  }
  template <typename ServiceWorkflowUpdatedT = ServiceWorkflowUpdatedMetadata>
  ServiceEventMetadata& WithServiceWorkflowUpdated(ServiceWorkflowUpdatedT&& value) {
    SetServiceWorkflowUpdated(std::forward<ServiceWorkflowUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service input sources updated event.</p>
   */
  inline const ServiceInputSourcesUpdatedMetadata& GetServiceInputSourcesUpdated() const { return m_serviceInputSourcesUpdated; }
  inline bool ServiceInputSourcesUpdatedHasBeenSet() const { return m_serviceInputSourcesUpdatedHasBeenSet; }
  template <typename ServiceInputSourcesUpdatedT = ServiceInputSourcesUpdatedMetadata>
  void SetServiceInputSourcesUpdated(ServiceInputSourcesUpdatedT&& value) {
    m_serviceInputSourcesUpdatedHasBeenSet = true;
    m_serviceInputSourcesUpdated = std::forward<ServiceInputSourcesUpdatedT>(value);
  }
  template <typename ServiceInputSourcesUpdatedT = ServiceInputSourcesUpdatedMetadata>
  ServiceEventMetadata& WithServiceInputSourcesUpdated(ServiceInputSourcesUpdatedT&& value) {
    SetServiceInputSourcesUpdated(std::forward<ServiceInputSourcesUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service policy associated event.</p>
   */
  inline const ServicePolicyAssociatedMetadata& GetServicePolicyAssociated() const { return m_servicePolicyAssociated; }
  inline bool ServicePolicyAssociatedHasBeenSet() const { return m_servicePolicyAssociatedHasBeenSet; }
  template <typename ServicePolicyAssociatedT = ServicePolicyAssociatedMetadata>
  void SetServicePolicyAssociated(ServicePolicyAssociatedT&& value) {
    m_servicePolicyAssociatedHasBeenSet = true;
    m_servicePolicyAssociated = std::forward<ServicePolicyAssociatedT>(value);
  }
  template <typename ServicePolicyAssociatedT = ServicePolicyAssociatedMetadata>
  ServiceEventMetadata& WithServicePolicyAssociated(ServicePolicyAssociatedT&& value) {
    SetServicePolicyAssociated(std::forward<ServicePolicyAssociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service policy disassociated event.</p>
   */
  inline const ServicePolicyDisassociatedMetadata& GetServicePolicyDisassociated() const { return m_servicePolicyDisassociated; }
  inline bool ServicePolicyDisassociatedHasBeenSet() const { return m_servicePolicyDisassociatedHasBeenSet; }
  template <typename ServicePolicyDisassociatedT = ServicePolicyDisassociatedMetadata>
  void SetServicePolicyDisassociated(ServicePolicyDisassociatedT&& value) {
    m_servicePolicyDisassociatedHasBeenSet = true;
    m_servicePolicyDisassociated = std::forward<ServicePolicyDisassociatedT>(value);
  }
  template <typename ServicePolicyDisassociatedT = ServicePolicyDisassociatedMetadata>
  ServiceEventMetadata& WithServicePolicyDisassociated(ServicePolicyDisassociatedT&& value) {
    SetServicePolicyDisassociated(std::forward<ServicePolicyDisassociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service function created event.</p>
   */
  inline const ServiceFunctionCreatedMetadata& GetServiceFunctionCreated() const { return m_serviceFunctionCreated; }
  inline bool ServiceFunctionCreatedHasBeenSet() const { return m_serviceFunctionCreatedHasBeenSet; }
  template <typename ServiceFunctionCreatedT = ServiceFunctionCreatedMetadata>
  void SetServiceFunctionCreated(ServiceFunctionCreatedT&& value) {
    m_serviceFunctionCreatedHasBeenSet = true;
    m_serviceFunctionCreated = std::forward<ServiceFunctionCreatedT>(value);
  }
  template <typename ServiceFunctionCreatedT = ServiceFunctionCreatedMetadata>
  ServiceEventMetadata& WithServiceFunctionCreated(ServiceFunctionCreatedT&& value) {
    SetServiceFunctionCreated(std::forward<ServiceFunctionCreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service function updated event.</p>
   */
  inline const ServiceFunctionUpdatedMetadata& GetServiceFunctionUpdated() const { return m_serviceFunctionUpdated; }
  inline bool ServiceFunctionUpdatedHasBeenSet() const { return m_serviceFunctionUpdatedHasBeenSet; }
  template <typename ServiceFunctionUpdatedT = ServiceFunctionUpdatedMetadata>
  void SetServiceFunctionUpdated(ServiceFunctionUpdatedT&& value) {
    m_serviceFunctionUpdatedHasBeenSet = true;
    m_serviceFunctionUpdated = std::forward<ServiceFunctionUpdatedT>(value);
  }
  template <typename ServiceFunctionUpdatedT = ServiceFunctionUpdatedMetadata>
  ServiceEventMetadata& WithServiceFunctionUpdated(ServiceFunctionUpdatedT&& value) {
    SetServiceFunctionUpdated(std::forward<ServiceFunctionUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service function deleted event.</p>
   */
  inline const ServiceFunctionDeletedMetadata& GetServiceFunctionDeleted() const { return m_serviceFunctionDeleted; }
  inline bool ServiceFunctionDeletedHasBeenSet() const { return m_serviceFunctionDeletedHasBeenSet; }
  template <typename ServiceFunctionDeletedT = ServiceFunctionDeletedMetadata>
  void SetServiceFunctionDeleted(ServiceFunctionDeletedT&& value) {
    m_serviceFunctionDeletedHasBeenSet = true;
    m_serviceFunctionDeleted = std::forward<ServiceFunctionDeletedT>(value);
  }
  template <typename ServiceFunctionDeletedT = ServiceFunctionDeletedMetadata>
  ServiceEventMetadata& WithServiceFunctionDeleted(ServiceFunctionDeletedT&& value) {
    SetServiceFunctionDeleted(std::forward<ServiceFunctionDeletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service function resources added event.</p>
   */
  inline const ServiceFunctionResourcesAddedMetadata& GetServiceFunctionResourcesAdded() const { return m_serviceFunctionResourcesAdded; }
  inline bool ServiceFunctionResourcesAddedHasBeenSet() const { return m_serviceFunctionResourcesAddedHasBeenSet; }
  template <typename ServiceFunctionResourcesAddedT = ServiceFunctionResourcesAddedMetadata>
  void SetServiceFunctionResourcesAdded(ServiceFunctionResourcesAddedT&& value) {
    m_serviceFunctionResourcesAddedHasBeenSet = true;
    m_serviceFunctionResourcesAdded = std::forward<ServiceFunctionResourcesAddedT>(value);
  }
  template <typename ServiceFunctionResourcesAddedT = ServiceFunctionResourcesAddedMetadata>
  ServiceEventMetadata& WithServiceFunctionResourcesAdded(ServiceFunctionResourcesAddedT&& value) {
    SetServiceFunctionResourcesAdded(std::forward<ServiceFunctionResourcesAddedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service function resources removed event.</p>
   */
  inline const ServiceFunctionResourcesRemovedMetadata& GetServiceFunctionResourcesRemoved() const {
    return m_serviceFunctionResourcesRemoved;
  }
  inline bool ServiceFunctionResourcesRemovedHasBeenSet() const { return m_serviceFunctionResourcesRemovedHasBeenSet; }
  template <typename ServiceFunctionResourcesRemovedT = ServiceFunctionResourcesRemovedMetadata>
  void SetServiceFunctionResourcesRemoved(ServiceFunctionResourcesRemovedT&& value) {
    m_serviceFunctionResourcesRemovedHasBeenSet = true;
    m_serviceFunctionResourcesRemoved = std::forward<ServiceFunctionResourcesRemovedT>(value);
  }
  template <typename ServiceFunctionResourcesRemovedT = ServiceFunctionResourcesRemovedMetadata>
  ServiceEventMetadata& WithServiceFunctionResourcesRemoved(ServiceFunctionResourcesRemovedT&& value) {
    SetServiceFunctionResourcesRemoved(std::forward<ServiceFunctionResourcesRemovedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a service achievability updated event.</p>
   */
  inline const ServiceAchievabilityUpdatedMetadata& GetServiceAchievabilityUpdated() const { return m_serviceAchievabilityUpdated; }
  inline bool ServiceAchievabilityUpdatedHasBeenSet() const { return m_serviceAchievabilityUpdatedHasBeenSet; }
  template <typename ServiceAchievabilityUpdatedT = ServiceAchievabilityUpdatedMetadata>
  void SetServiceAchievabilityUpdated(ServiceAchievabilityUpdatedT&& value) {
    m_serviceAchievabilityUpdatedHasBeenSet = true;
    m_serviceAchievabilityUpdated = std::forward<ServiceAchievabilityUpdatedT>(value);
  }
  template <typename ServiceAchievabilityUpdatedT = ServiceAchievabilityUpdatedMetadata>
  ServiceEventMetadata& WithServiceAchievabilityUpdated(ServiceAchievabilityUpdatedT&& value) {
    SetServiceAchievabilityUpdated(std::forward<ServiceAchievabilityUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for an assertion created event.</p>
   */
  inline const AssertionCreatedMetadata& GetAssertionCreated() const { return m_assertionCreated; }
  inline bool AssertionCreatedHasBeenSet() const { return m_assertionCreatedHasBeenSet; }
  template <typename AssertionCreatedT = AssertionCreatedMetadata>
  void SetAssertionCreated(AssertionCreatedT&& value) {
    m_assertionCreatedHasBeenSet = true;
    m_assertionCreated = std::forward<AssertionCreatedT>(value);
  }
  template <typename AssertionCreatedT = AssertionCreatedMetadata>
  ServiceEventMetadata& WithAssertionCreated(AssertionCreatedT&& value) {
    SetAssertionCreated(std::forward<AssertionCreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for an assertion updated event.</p>
   */
  inline const AssertionUpdatedMetadata& GetAssertionUpdated() const { return m_assertionUpdated; }
  inline bool AssertionUpdatedHasBeenSet() const { return m_assertionUpdatedHasBeenSet; }
  template <typename AssertionUpdatedT = AssertionUpdatedMetadata>
  void SetAssertionUpdated(AssertionUpdatedT&& value) {
    m_assertionUpdatedHasBeenSet = true;
    m_assertionUpdated = std::forward<AssertionUpdatedT>(value);
  }
  template <typename AssertionUpdatedT = AssertionUpdatedMetadata>
  ServiceEventMetadata& WithAssertionUpdated(AssertionUpdatedT&& value) {
    SetAssertionUpdated(std::forward<AssertionUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for an assertion deleted event.</p>
   */
  inline const AssertionDeletedMetadata& GetAssertionDeleted() const { return m_assertionDeleted; }
  inline bool AssertionDeletedHasBeenSet() const { return m_assertionDeletedHasBeenSet; }
  template <typename AssertionDeletedT = AssertionDeletedMetadata>
  void SetAssertionDeleted(AssertionDeletedT&& value) {
    m_assertionDeletedHasBeenSet = true;
    m_assertionDeleted = std::forward<AssertionDeletedT>(value);
  }
  template <typename AssertionDeletedT = AssertionDeletedMetadata>
  ServiceEventMetadata& WithAssertionDeleted(AssertionDeletedT&& value) {
    SetAssertionDeleted(std::forward<AssertionDeletedT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceCreatedMetadata m_serviceCreated;

  ServiceDeletedMetadata m_serviceDeleted;

  ServiceSystemAssociatedMetadata m_serviceSystemAssociated;

  ServiceSystemDisassociatedMetadata m_serviceSystemDisassociated;

  ServiceResourcesAssociatedMetadata m_serviceResourcesAssociated;

  ServiceResourcesDisassociatedMetadata m_serviceResourcesDisassociated;

  ServiceWorkflowUpdatedMetadata m_serviceWorkflowUpdated;

  ServiceInputSourcesUpdatedMetadata m_serviceInputSourcesUpdated;

  ServicePolicyAssociatedMetadata m_servicePolicyAssociated;

  ServicePolicyDisassociatedMetadata m_servicePolicyDisassociated;

  ServiceFunctionCreatedMetadata m_serviceFunctionCreated;

  ServiceFunctionUpdatedMetadata m_serviceFunctionUpdated;

  ServiceFunctionDeletedMetadata m_serviceFunctionDeleted;

  ServiceFunctionResourcesAddedMetadata m_serviceFunctionResourcesAdded;

  ServiceFunctionResourcesRemovedMetadata m_serviceFunctionResourcesRemoved;

  ServiceAchievabilityUpdatedMetadata m_serviceAchievabilityUpdated;

  AssertionCreatedMetadata m_assertionCreated;

  AssertionUpdatedMetadata m_assertionUpdated;

  AssertionDeletedMetadata m_assertionDeleted;
  bool m_serviceCreatedHasBeenSet = false;
  bool m_serviceDeletedHasBeenSet = false;
  bool m_serviceSystemAssociatedHasBeenSet = false;
  bool m_serviceSystemDisassociatedHasBeenSet = false;
  bool m_serviceResourcesAssociatedHasBeenSet = false;
  bool m_serviceResourcesDisassociatedHasBeenSet = false;
  bool m_serviceWorkflowUpdatedHasBeenSet = false;
  bool m_serviceInputSourcesUpdatedHasBeenSet = false;
  bool m_servicePolicyAssociatedHasBeenSet = false;
  bool m_servicePolicyDisassociatedHasBeenSet = false;
  bool m_serviceFunctionCreatedHasBeenSet = false;
  bool m_serviceFunctionUpdatedHasBeenSet = false;
  bool m_serviceFunctionDeletedHasBeenSet = false;
  bool m_serviceFunctionResourcesAddedHasBeenSet = false;
  bool m_serviceFunctionResourcesRemovedHasBeenSet = false;
  bool m_serviceAchievabilityUpdatedHasBeenSet = false;
  bool m_assertionCreatedHasBeenSet = false;
  bool m_assertionUpdatedHasBeenSet = false;
  bool m_assertionDeletedHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
