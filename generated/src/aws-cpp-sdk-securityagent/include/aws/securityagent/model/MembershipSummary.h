/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/MemberMetadata.h>
#include <aws/securityagent/model/MembershipConfig.h>
#include <aws/securityagent/model/MembershipType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Membership summary for list operations</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/MembershipSummary">AWS
 * API Reference</a></p>
 */
class MembershipSummary {
 public:
  AWS_SECURITYAGENT_API MembershipSummary() = default;
  AWS_SECURITYAGENT_API MembershipSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API MembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Member identifier (userId or agentSpaceId)</p>
   */
  inline const Aws::String& GetMembershipId() const { return m_membershipId; }
  inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
  template <typename MembershipIdT = Aws::String>
  void SetMembershipId(MembershipIdT&& value) {
    m_membershipIdHasBeenSet = true;
    m_membershipId = std::forward<MembershipIdT>(value);
  }
  template <typename MembershipIdT = Aws::String>
  MembershipSummary& WithMembershipId(MembershipIdT&& value) {
    SetMembershipId(std::forward<MembershipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Application identifier</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  MembershipSummary& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Agent space identifier</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  MembershipSummary& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of member</p>
   */
  inline MembershipType GetMemberType() const { return m_memberType; }
  inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
  inline void SetMemberType(MembershipType value) {
    m_memberTypeHasBeenSet = true;
    m_memberType = value;
  }
  inline MembershipSummary& WithMemberType(MembershipType value) {
    SetMemberType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration specific to the member type</p>
   */
  inline const MembershipConfig& GetConfig() const { return m_config; }
  inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
  template <typename ConfigT = MembershipConfig>
  void SetConfig(ConfigT&& value) {
    m_configHasBeenSet = true;
    m_config = std::forward<ConfigT>(value);
  }
  template <typename ConfigT = MembershipConfig>
  MembershipSummary& WithConfig(ConfigT&& value) {
    SetConfig(std::forward<ConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Member-specific metadata</p>
   */
  inline const MemberMetadata& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = MemberMetadata>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = MemberMetadata>
  MembershipSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the membership was created (ISO 8601)</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  MembershipSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the membership was last updated (ISO 8601)</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  MembershipSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User ID who created the membership</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  MembershipSummary& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User ID who last updated the membership</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  MembershipSummary& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipId;

  Aws::String m_applicationId;

  Aws::String m_agentSpaceId;

  MembershipType m_memberType{MembershipType::NOT_SET};

  MembershipConfig m_config;

  MemberMetadata m_metadata;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_createdBy;

  Aws::String m_updatedBy;
  bool m_membershipIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_memberTypeHasBeenSet = false;
  bool m_configHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
