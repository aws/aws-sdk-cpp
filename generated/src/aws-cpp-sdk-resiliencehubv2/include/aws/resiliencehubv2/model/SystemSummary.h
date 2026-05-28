/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
 * <p>Contains summary information about a system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemSummary">AWS
 * API Reference</a></p>
 */
class SystemSummary {
 public:
  AWS_RESILIENCEHUBV2_API SystemSummary() = default;
  AWS_RESILIENCEHUBV2_API SystemSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetSystemId() const { return m_systemId; }
  inline bool SystemIdHasBeenSet() const { return m_systemIdHasBeenSet; }
  template <typename SystemIdT = Aws::String>
  void SetSystemId(SystemIdT&& value) {
    m_systemIdHasBeenSet = true;
    m_systemId = std::forward<SystemIdT>(value);
  }
  template <typename SystemIdT = Aws::String>
  SystemSummary& WithSystemId(SystemIdT&& value) {
    SetSystemId(std::forward<SystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SystemSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  SystemSummary& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of user journeys in the system.</p>
   */
  inline int GetUserJourneysCount() const { return m_userJourneysCount; }
  inline bool UserJourneysCountHasBeenSet() const { return m_userJourneysCountHasBeenSet; }
  inline void SetUserJourneysCount(int value) {
    m_userJourneysCountHasBeenSet = true;
    m_userJourneysCount = value;
  }
  inline SystemSummary& WithUserJourneysCount(int value) {
    SetUserJourneysCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of services in the system.</p>
   */
  inline int GetServicesCount() const { return m_servicesCount; }
  inline bool ServicesCountHasBeenSet() const { return m_servicesCountHasBeenSet; }
  inline void SetServicesCount(int value) {
    m_servicesCountHasBeenSet = true;
    m_servicesCount = value;
  }
  inline SystemSummary& WithServicesCount(int value) {
    SetServicesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Displayed only if caller has access.</p>
   */
  inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
  inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  SystemSummary& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Displayed only if caller has access.</p>
   */
  inline const Aws::String& GetOuId() const { return m_ouId; }
  inline bool OuIdHasBeenSet() const { return m_ouIdHasBeenSet; }
  template <typename OuIdT = Aws::String>
  void SetOuId(OuIdT&& value) {
    m_ouIdHasBeenSet = true;
    m_ouId = std::forward<OuIdT>(value);
  }
  template <typename OuIdT = Aws::String>
  SystemSummary& WithOuId(OuIdT&& value) {
    SetOuId(std::forward<OuIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the system was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SystemSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the system was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SystemSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemId;

  Aws::String m_name;

  Aws::String m_systemArn;

  int m_userJourneysCount{0};

  int m_servicesCount{0};

  Aws::String m_organizationId;

  Aws::String m_ouId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_systemIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_systemArnHasBeenSet = false;
  bool m_userJourneysCountHasBeenSet = false;
  bool m_servicesCountHasBeenSet = false;
  bool m_organizationIdHasBeenSet = false;
  bool m_ouIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
