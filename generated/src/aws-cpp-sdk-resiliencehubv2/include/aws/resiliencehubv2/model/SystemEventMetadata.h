/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/SystemCreatedMetadata.h>
#include <aws/resiliencehubv2/model/SystemDeletedMetadata.h>
#include <aws/resiliencehubv2/model/SystemPolicyAssociatedMetadata.h>
#include <aws/resiliencehubv2/model/SystemPolicyDisassociatedMetadata.h>
#include <aws/resiliencehubv2/model/SystemServiceAssociatedMetadata.h>
#include <aws/resiliencehubv2/model/SystemServiceDisassociatedMetadata.h>
#include <aws/resiliencehubv2/model/SystemUserJourneyCreatedMetadata.h>
#include <aws/resiliencehubv2/model/SystemUserJourneyDeletedMetadata.h>
#include <aws/resiliencehubv2/model/SystemUserJourneyUpdatedMetadata.h>

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
 * <p>Type-specific metadata for each system event type.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemEventMetadata">AWS
 * API Reference</a></p>
 */
class SystemEventMetadata {
 public:
  AWS_RESILIENCEHUBV2_API SystemEventMetadata() = default;
  AWS_RESILIENCEHUBV2_API SystemEventMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Metadata for a system created event.</p>
   */
  inline const SystemCreatedMetadata& GetSystemCreated() const { return m_systemCreated; }
  inline bool SystemCreatedHasBeenSet() const { return m_systemCreatedHasBeenSet; }
  template <typename SystemCreatedT = SystemCreatedMetadata>
  void SetSystemCreated(SystemCreatedT&& value) {
    m_systemCreatedHasBeenSet = true;
    m_systemCreated = std::forward<SystemCreatedT>(value);
  }
  template <typename SystemCreatedT = SystemCreatedMetadata>
  SystemEventMetadata& WithSystemCreated(SystemCreatedT&& value) {
    SetSystemCreated(std::forward<SystemCreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system deleted event.</p>
   */
  inline const SystemDeletedMetadata& GetSystemDeleted() const { return m_systemDeleted; }
  inline bool SystemDeletedHasBeenSet() const { return m_systemDeletedHasBeenSet; }
  template <typename SystemDeletedT = SystemDeletedMetadata>
  void SetSystemDeleted(SystemDeletedT&& value) {
    m_systemDeletedHasBeenSet = true;
    m_systemDeleted = std::forward<SystemDeletedT>(value);
  }
  template <typename SystemDeletedT = SystemDeletedMetadata>
  SystemEventMetadata& WithSystemDeleted(SystemDeletedT&& value) {
    SetSystemDeleted(std::forward<SystemDeletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system user journey created event.</p>
   */
  inline const SystemUserJourneyCreatedMetadata& GetSystemUserJourneyCreated() const { return m_systemUserJourneyCreated; }
  inline bool SystemUserJourneyCreatedHasBeenSet() const { return m_systemUserJourneyCreatedHasBeenSet; }
  template <typename SystemUserJourneyCreatedT = SystemUserJourneyCreatedMetadata>
  void SetSystemUserJourneyCreated(SystemUserJourneyCreatedT&& value) {
    m_systemUserJourneyCreatedHasBeenSet = true;
    m_systemUserJourneyCreated = std::forward<SystemUserJourneyCreatedT>(value);
  }
  template <typename SystemUserJourneyCreatedT = SystemUserJourneyCreatedMetadata>
  SystemEventMetadata& WithSystemUserJourneyCreated(SystemUserJourneyCreatedT&& value) {
    SetSystemUserJourneyCreated(std::forward<SystemUserJourneyCreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system user journey updated event.</p>
   */
  inline const SystemUserJourneyUpdatedMetadata& GetSystemUserJourneyUpdated() const { return m_systemUserJourneyUpdated; }
  inline bool SystemUserJourneyUpdatedHasBeenSet() const { return m_systemUserJourneyUpdatedHasBeenSet; }
  template <typename SystemUserJourneyUpdatedT = SystemUserJourneyUpdatedMetadata>
  void SetSystemUserJourneyUpdated(SystemUserJourneyUpdatedT&& value) {
    m_systemUserJourneyUpdatedHasBeenSet = true;
    m_systemUserJourneyUpdated = std::forward<SystemUserJourneyUpdatedT>(value);
  }
  template <typename SystemUserJourneyUpdatedT = SystemUserJourneyUpdatedMetadata>
  SystemEventMetadata& WithSystemUserJourneyUpdated(SystemUserJourneyUpdatedT&& value) {
    SetSystemUserJourneyUpdated(std::forward<SystemUserJourneyUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system user journey deleted event.</p>
   */
  inline const SystemUserJourneyDeletedMetadata& GetSystemUserJourneyDeleted() const { return m_systemUserJourneyDeleted; }
  inline bool SystemUserJourneyDeletedHasBeenSet() const { return m_systemUserJourneyDeletedHasBeenSet; }
  template <typename SystemUserJourneyDeletedT = SystemUserJourneyDeletedMetadata>
  void SetSystemUserJourneyDeleted(SystemUserJourneyDeletedT&& value) {
    m_systemUserJourneyDeletedHasBeenSet = true;
    m_systemUserJourneyDeleted = std::forward<SystemUserJourneyDeletedT>(value);
  }
  template <typename SystemUserJourneyDeletedT = SystemUserJourneyDeletedMetadata>
  SystemEventMetadata& WithSystemUserJourneyDeleted(SystemUserJourneyDeletedT&& value) {
    SetSystemUserJourneyDeleted(std::forward<SystemUserJourneyDeletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system service associated event.</p>
   */
  inline const SystemServiceAssociatedMetadata& GetSystemServiceAssociated() const { return m_systemServiceAssociated; }
  inline bool SystemServiceAssociatedHasBeenSet() const { return m_systemServiceAssociatedHasBeenSet; }
  template <typename SystemServiceAssociatedT = SystemServiceAssociatedMetadata>
  void SetSystemServiceAssociated(SystemServiceAssociatedT&& value) {
    m_systemServiceAssociatedHasBeenSet = true;
    m_systemServiceAssociated = std::forward<SystemServiceAssociatedT>(value);
  }
  template <typename SystemServiceAssociatedT = SystemServiceAssociatedMetadata>
  SystemEventMetadata& WithSystemServiceAssociated(SystemServiceAssociatedT&& value) {
    SetSystemServiceAssociated(std::forward<SystemServiceAssociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system service disassociated event.</p>
   */
  inline const SystemServiceDisassociatedMetadata& GetSystemServiceDisassociated() const { return m_systemServiceDisassociated; }
  inline bool SystemServiceDisassociatedHasBeenSet() const { return m_systemServiceDisassociatedHasBeenSet; }
  template <typename SystemServiceDisassociatedT = SystemServiceDisassociatedMetadata>
  void SetSystemServiceDisassociated(SystemServiceDisassociatedT&& value) {
    m_systemServiceDisassociatedHasBeenSet = true;
    m_systemServiceDisassociated = std::forward<SystemServiceDisassociatedT>(value);
  }
  template <typename SystemServiceDisassociatedT = SystemServiceDisassociatedMetadata>
  SystemEventMetadata& WithSystemServiceDisassociated(SystemServiceDisassociatedT&& value) {
    SetSystemServiceDisassociated(std::forward<SystemServiceDisassociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system policy associated event.</p>
   */
  inline const SystemPolicyAssociatedMetadata& GetSystemPolicyAssociated() const { return m_systemPolicyAssociated; }
  inline bool SystemPolicyAssociatedHasBeenSet() const { return m_systemPolicyAssociatedHasBeenSet; }
  template <typename SystemPolicyAssociatedT = SystemPolicyAssociatedMetadata>
  void SetSystemPolicyAssociated(SystemPolicyAssociatedT&& value) {
    m_systemPolicyAssociatedHasBeenSet = true;
    m_systemPolicyAssociated = std::forward<SystemPolicyAssociatedT>(value);
  }
  template <typename SystemPolicyAssociatedT = SystemPolicyAssociatedMetadata>
  SystemEventMetadata& WithSystemPolicyAssociated(SystemPolicyAssociatedT&& value) {
    SetSystemPolicyAssociated(std::forward<SystemPolicyAssociatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for a system policy disassociated event.</p>
   */
  inline const SystemPolicyDisassociatedMetadata& GetSystemPolicyDisassociated() const { return m_systemPolicyDisassociated; }
  inline bool SystemPolicyDisassociatedHasBeenSet() const { return m_systemPolicyDisassociatedHasBeenSet; }
  template <typename SystemPolicyDisassociatedT = SystemPolicyDisassociatedMetadata>
  void SetSystemPolicyDisassociated(SystemPolicyDisassociatedT&& value) {
    m_systemPolicyDisassociatedHasBeenSet = true;
    m_systemPolicyDisassociated = std::forward<SystemPolicyDisassociatedT>(value);
  }
  template <typename SystemPolicyDisassociatedT = SystemPolicyDisassociatedMetadata>
  SystemEventMetadata& WithSystemPolicyDisassociated(SystemPolicyDisassociatedT&& value) {
    SetSystemPolicyDisassociated(std::forward<SystemPolicyDisassociatedT>(value));
    return *this;
  }
  ///@}
 private:
  SystemCreatedMetadata m_systemCreated;

  SystemDeletedMetadata m_systemDeleted;

  SystemUserJourneyCreatedMetadata m_systemUserJourneyCreated;

  SystemUserJourneyUpdatedMetadata m_systemUserJourneyUpdated;

  SystemUserJourneyDeletedMetadata m_systemUserJourneyDeleted;

  SystemServiceAssociatedMetadata m_systemServiceAssociated;

  SystemServiceDisassociatedMetadata m_systemServiceDisassociated;

  SystemPolicyAssociatedMetadata m_systemPolicyAssociated;

  SystemPolicyDisassociatedMetadata m_systemPolicyDisassociated;
  bool m_systemCreatedHasBeenSet = false;
  bool m_systemDeletedHasBeenSet = false;
  bool m_systemUserJourneyCreatedHasBeenSet = false;
  bool m_systemUserJourneyUpdatedHasBeenSet = false;
  bool m_systemUserJourneyDeletedHasBeenSet = false;
  bool m_systemServiceAssociatedHasBeenSet = false;
  bool m_systemServiceDisassociatedHasBeenSet = false;
  bool m_systemPolicyAssociatedHasBeenSet = false;
  bool m_systemPolicyDisassociatedHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
