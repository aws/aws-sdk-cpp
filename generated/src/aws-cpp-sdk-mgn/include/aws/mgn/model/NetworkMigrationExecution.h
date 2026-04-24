/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ExecutionStage.h>
#include <aws/mgn/model/ExecutionStageActivity.h>
#include <aws/mgn/model/ExecutionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Details about a network migration execution instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationExecution">AWS
 * API Reference</a></p>
 */
class NetworkMigrationExecution {
 public:
  AWS_MGN_API NetworkMigrationExecution() = default;
  AWS_MGN_API NetworkMigrationExecution(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the network migration definition used by this
   * execution.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  inline bool NetworkMigrationDefinitionIDHasBeenSet() const { return m_networkMigrationDefinitionIDHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  NetworkMigrationExecution& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the execution.</p>
   */
  inline const Aws::String& GetNetworkMigrationExecutionID() const { return m_networkMigrationExecutionID; }
  inline bool NetworkMigrationExecutionIDHasBeenSet() const { return m_networkMigrationExecutionIDHasBeenSet; }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  void SetNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    m_networkMigrationExecutionIDHasBeenSet = true;
    m_networkMigrationExecutionID = std::forward<NetworkMigrationExecutionIDT>(value);
  }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  NetworkMigrationExecution& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    SetNetworkMigrationExecutionID(std::forward<NetworkMigrationExecutionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the execution.</p>
   */
  inline ExecutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NetworkMigrationExecution& WithStatus(ExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current stage of the execution in the migration workflow.</p>
   */
  inline ExecutionStage GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  inline void SetStage(ExecutionStage value) {
    m_stageHasBeenSet = true;
    m_stage = value;
  }
  inline NetworkMigrationExecution& WithStage(ExecutionStage value) {
    SetStage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current activity being performed in the execution.</p>
   */
  inline ExecutionStageActivity GetActivity() const { return m_activity; }
  inline bool ActivityHasBeenSet() const { return m_activityHasBeenSet; }
  inline void SetActivity(ExecutionStageActivity value) {
    m_activityHasBeenSet = true;
    m_activity = value;
  }
  inline NetworkMigrationExecution& WithActivity(ExecutionStageActivity value) {
    SetActivity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the execution was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NetworkMigrationExecution& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the execution was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  NetworkMigrationExecution& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags assigned to the execution.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  NetworkMigrationExecution& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  NetworkMigrationExecution& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkMigrationDefinitionID;

  Aws::String m_networkMigrationExecutionID;

  ExecutionStatus m_status{ExecutionStatus::NOT_SET};

  ExecutionStage m_stage{ExecutionStage::NOT_SET};

  ExecutionStageActivity m_activity{ExecutionStageActivity::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_stageHasBeenSet = false;
  bool m_activityHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
