/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Represents a system in Resilience Hub. A system is a logical grouping of
 * services.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/System">AWS
 * API Reference</a></p>
 */
class System {
 public:
  AWS_RESILIENCEHUBV2_API System() = default;
  AWS_RESILIENCEHUBV2_API System(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API System& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  System& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSystemId() const { return m_systemId; }
  inline bool SystemIdHasBeenSet() const { return m_systemIdHasBeenSet; }
  template <typename SystemIdT = Aws::String>
  void SetSystemId(SystemIdT&& value) {
    m_systemIdHasBeenSet = true;
    m_systemId = std::forward<SystemIdT>(value);
  }
  template <typename SystemIdT = Aws::String>
  System& WithSystemId(SystemIdT&& value) {
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
  System& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  System& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether cross-account sharing is enabled.</p>
   */
  inline bool GetSharingEnabled() const { return m_sharingEnabled; }
  inline bool SharingEnabledHasBeenSet() const { return m_sharingEnabledHasBeenSet; }
  inline void SetSharingEnabled(bool value) {
    m_sharingEnabledHasBeenSet = true;
    m_sharingEnabled = value;
  }
  inline System& WithSharingEnabled(bool value) {
    SetSharingEnabled(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  System& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  System& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  System& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Organizations identifier for the system.</p>
   */
  inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
  inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  System& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational unit (OU) identifier for the system.</p>
   */
  inline const Aws::String& GetOuId() const { return m_ouId; }
  inline bool OuIdHasBeenSet() const { return m_ouIdHasBeenSet; }
  template <typename OuIdT = Aws::String>
  void SetOuId(OuIdT&& value) {
    m_ouIdHasBeenSet = true;
    m_ouId = std::forward<OuIdT>(value);
  }
  template <typename OuIdT = Aws::String>
  System& WithOuId(OuIdT&& value) {
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
  System& WithCreatedAt(CreatedAtT&& value) {
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
  System& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemArn;

  Aws::String m_systemId;

  Aws::String m_name;

  Aws::String m_description;

  bool m_sharingEnabled{false};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_kmsKeyId;

  Aws::String m_organizationId;

  Aws::String m_ouId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_systemArnHasBeenSet = false;
  bool m_systemIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sharingEnabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_organizationIdHasBeenSet = false;
  bool m_ouIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
