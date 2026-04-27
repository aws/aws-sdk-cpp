/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/omics/model/NetworkingMode.h>
#include <aws/omics/model/RunLogLevel.h>
#include <aws/omics/model/RunRetentionMode.h>
#include <aws/omics/model/StorageType.h>
#include <aws/omics/model/WorkflowType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {

/**
 * <p>Shared configuration applied to all runs in a batch. Fields specified in a
 * per-run <code>InlineSetting</code> entry override the corresponding fields in
 * this object for that run. The <code>parameters</code> and <code>runTags</code>
 * fields are merged rather than replaced — run-specific values take precedence
 * when keys overlap.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DefaultRunSetting">AWS
 * API Reference</a></p>
 */
class DefaultRunSetting {
 public:
  AWS_OMICS_API DefaultRunSetting() = default;
  AWS_OMICS_API DefaultRunSetting(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API DefaultRunSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the workflow to run.</p>
   */
  inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
  inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
  template <typename WorkflowIdT = Aws::String>
  void SetWorkflowId(WorkflowIdT&& value) {
    m_workflowIdHasBeenSet = true;
    m_workflowId = std::forward<WorkflowIdT>(value);
  }
  template <typename WorkflowIdT = Aws::String>
  DefaultRunSetting& WithWorkflowId(WorkflowIdT&& value) {
    SetWorkflowId(std::forward<WorkflowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the originating workflow. Batch runs are not supported with
   * <code>READY2RUN</code> workflows.</p>
   */
  inline WorkflowType GetWorkflowType() const { return m_workflowType; }
  inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
  inline void SetWorkflowType(WorkflowType value) {
    m_workflowTypeHasBeenSet = true;
    m_workflowType = value;
  }
  inline DefaultRunSetting& WithWorkflowType(WorkflowType value) {
    SetWorkflowType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role ARN that grants HealthOmics permissions to access required AWS
   * resources such as Amazon S3 and CloudWatch. The role must have the same
   * permissions required for individual <code>StartRun</code> calls.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  DefaultRunSetting& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional user-friendly name applied to each workflow run. Can be
   * overridden per run.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DefaultRunSetting& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the run cache to associate with the runs.</p>
   */
  inline const Aws::String& GetCacheId() const { return m_cacheId; }
  inline bool CacheIdHasBeenSet() const { return m_cacheIdHasBeenSet; }
  template <typename CacheIdT = Aws::String>
  void SetCacheId(CacheIdT&& value) {
    m_cacheIdHasBeenSet = true;
    m_cacheId = std::forward<CacheIdT>(value);
  }
  template <typename CacheIdT = Aws::String>
  DefaultRunSetting& WithCacheId(CacheIdT&& value) {
    SetCacheId(std::forward<CacheIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cache behavior for the runs. Requires <code>cacheId</code> to be set.</p>
   */
  inline CacheBehavior GetCacheBehavior() const { return m_cacheBehavior; }
  inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
  inline void SetCacheBehavior(CacheBehavior value) {
    m_cacheBehaviorHasBeenSet = true;
    m_cacheBehavior = value;
  }
  inline DefaultRunSetting& WithCacheBehavior(CacheBehavior value) {
    SetCacheBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the run group to contain all workflow runs in the batch.</p>
   */
  inline const Aws::String& GetRunGroupId() const { return m_runGroupId; }
  inline bool RunGroupIdHasBeenSet() const { return m_runGroupIdHasBeenSet; }
  template <typename RunGroupIdT = Aws::String>
  void SetRunGroupId(RunGroupIdT&& value) {
    m_runGroupIdHasBeenSet = true;
    m_runGroupId = std::forward<RunGroupIdT>(value);
  }
  template <typename RunGroupIdT = Aws::String>
  DefaultRunSetting& WithRunGroupId(RunGroupIdT&& value) {
    SetRunGroupId(std::forward<RunGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An integer priority for the workflow runs. Higher values correspond to higher
   * priority. A value of 0 corresponds to the lowest priority. Can be overridden per
   * run.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline DefaultRunSetting& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Workflow parameter names and values shared across all runs. Merged with
   * per-run parameters; run-specific values take precedence when keys overlap. Can
   * be overridden per run.</p>
   */
  inline Aws::Utils::DocumentView GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Utils::Document>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Utils::Document>
  DefaultRunSetting& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filesystem size in gibibytes (GiB) provisioned for each workflow run and
   * shared by all tasks in that run. Defaults to 1200 GiB if not specified.</p>
   */
  inline int GetStorageCapacity() const { return m_storageCapacity; }
  inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
  inline void SetStorageCapacity(int value) {
    m_storageCapacityHasBeenSet = true;
    m_storageCapacity = value;
  }
  inline DefaultRunSetting& WithStorageCapacity(int value) {
    SetStorageCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination S3 URI for workflow outputs. Must begin with
   * <code>s3://</code>. The <code>roleArn</code> must grant write permissions to
   * this bucket. Can be overridden per run.</p>
   */
  inline const Aws::String& GetOutputUri() const { return m_outputUri; }
  inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
  template <typename OutputUriT = Aws::String>
  void SetOutputUri(OutputUriT&& value) {
    m_outputUriHasBeenSet = true;
    m_outputUri = std::forward<OutputUriT>(value);
  }
  template <typename OutputUriT = Aws::String>
  DefaultRunSetting& WithOutputUri(OutputUriT&& value) {
    SetOutputUri(std::forward<OutputUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The verbosity level for CloudWatch Logs emitted during each run.</p>
   */
  inline RunLogLevel GetLogLevel() const { return m_logLevel; }
  inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
  inline void SetLogLevel(RunLogLevel value) {
    m_logLevelHasBeenSet = true;
    m_logLevel = value;
  }
  inline DefaultRunSetting& WithLogLevel(RunLogLevel value) {
    SetLogLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS tags to associate with each workflow run. Merged with per-run
   * <code>runTags</code>; run-specific values take precedence when keys overlap.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetRunTags() const { return m_runTags; }
  inline bool RunTagsHasBeenSet() const { return m_runTagsHasBeenSet; }
  template <typename RunTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetRunTags(RunTagsT&& value) {
    m_runTagsHasBeenSet = true;
    m_runTags = std::forward<RunTagsT>(value);
  }
  template <typename RunTagsT = Aws::Map<Aws::String, Aws::String>>
  DefaultRunSetting& WithRunTags(RunTagsT&& value) {
    SetRunTags(std::forward<RunTagsT>(value));
    return *this;
  }
  template <typename RunTagsKeyT = Aws::String, typename RunTagsValueT = Aws::String>
  DefaultRunSetting& AddRunTags(RunTagsKeyT&& key, RunTagsValueT&& value) {
    m_runTagsHasBeenSet = true;
    m_runTags.emplace(std::forward<RunTagsKeyT>(key), std::forward<RunTagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention behavior for runs after completion.</p>
   */
  inline RunRetentionMode GetRetentionMode() const { return m_retentionMode; }
  inline bool RetentionModeHasBeenSet() const { return m_retentionModeHasBeenSet; }
  inline void SetRetentionMode(RunRetentionMode value) {
    m_retentionModeHasBeenSet = true;
    m_retentionMode = value;
  }
  inline DefaultRunSetting& WithRetentionMode(RunRetentionMode value) {
    SetRetentionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type for the workflow runs.</p>
   */
  inline StorageType GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  inline void SetStorageType(StorageType value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = value;
  }
  inline DefaultRunSetting& WithStorageType(StorageType value) {
    SetStorageType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the workflow owner, used for cross-account workflow
   * sharing.</p>
   */
  inline const Aws::String& GetWorkflowOwnerId() const { return m_workflowOwnerId; }
  inline bool WorkflowOwnerIdHasBeenSet() const { return m_workflowOwnerIdHasBeenSet; }
  template <typename WorkflowOwnerIdT = Aws::String>
  void SetWorkflowOwnerId(WorkflowOwnerIdT&& value) {
    m_workflowOwnerIdHasBeenSet = true;
    m_workflowOwnerId = std::forward<WorkflowOwnerIdT>(value);
  }
  template <typename WorkflowOwnerIdT = Aws::String>
  DefaultRunSetting& WithWorkflowOwnerId(WorkflowOwnerIdT&& value) {
    SetWorkflowOwnerId(std::forward<WorkflowOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected AWS account ID of the owner of the output S3 bucket. Can be
   * overridden per run.</p>
   */
  inline const Aws::String& GetOutputBucketOwnerId() const { return m_outputBucketOwnerId; }
  inline bool OutputBucketOwnerIdHasBeenSet() const { return m_outputBucketOwnerIdHasBeenSet; }
  template <typename OutputBucketOwnerIdT = Aws::String>
  void SetOutputBucketOwnerId(OutputBucketOwnerIdT&& value) {
    m_outputBucketOwnerIdHasBeenSet = true;
    m_outputBucketOwnerId = std::forward<OutputBucketOwnerIdT>(value);
  }
  template <typename OutputBucketOwnerIdT = Aws::String>
  DefaultRunSetting& WithOutputBucketOwnerId(OutputBucketOwnerIdT&& value) {
    SetOutputBucketOwnerId(std::forward<OutputBucketOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version name of the specified workflow.</p>
   */
  inline const Aws::String& GetWorkflowVersionName() const { return m_workflowVersionName; }
  inline bool WorkflowVersionNameHasBeenSet() const { return m_workflowVersionNameHasBeenSet; }
  template <typename WorkflowVersionNameT = Aws::String>
  void SetWorkflowVersionName(WorkflowVersionNameT&& value) {
    m_workflowVersionNameHasBeenSet = true;
    m_workflowVersionName = std::forward<WorkflowVersionNameT>(value);
  }
  template <typename WorkflowVersionNameT = Aws::String>
  DefaultRunSetting& WithWorkflowVersionName(WorkflowVersionNameT&& value) {
    SetWorkflowVersionName(std::forward<WorkflowVersionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional configuration for run networking behavior. If not specified, this
   * will default to RESTRICTED.</p>
   */
  inline NetworkingMode GetNetworkingMode() const { return m_networkingMode; }
  inline bool NetworkingModeHasBeenSet() const { return m_networkingModeHasBeenSet; }
  inline void SetNetworkingMode(NetworkingMode value) {
    m_networkingModeHasBeenSet = true;
    m_networkingMode = value;
  }
  inline DefaultRunSetting& WithNetworkingMode(NetworkingMode value) {
    SetNetworkingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional configuration name to use for the workflow run.</p>
   */
  inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
  inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
  template <typename ConfigurationNameT = Aws::String>
  void SetConfigurationName(ConfigurationNameT&& value) {
    m_configurationNameHasBeenSet = true;
    m_configurationName = std::forward<ConfigurationNameT>(value);
  }
  template <typename ConfigurationNameT = Aws::String>
  DefaultRunSetting& WithConfigurationName(ConfigurationNameT&& value) {
    SetConfigurationName(std::forward<ConfigurationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowId;

  WorkflowType m_workflowType{WorkflowType::NOT_SET};

  Aws::String m_roleArn;

  Aws::String m_name;

  Aws::String m_cacheId;

  CacheBehavior m_cacheBehavior{CacheBehavior::NOT_SET};

  Aws::String m_runGroupId;

  int m_priority{0};

  Aws::Utils::Document m_parameters;

  int m_storageCapacity{0};

  Aws::String m_outputUri;

  RunLogLevel m_logLevel{RunLogLevel::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_runTags;

  RunRetentionMode m_retentionMode{RunRetentionMode::NOT_SET};

  StorageType m_storageType{StorageType::NOT_SET};

  Aws::String m_workflowOwnerId;

  Aws::String m_outputBucketOwnerId;

  Aws::String m_workflowVersionName;

  NetworkingMode m_networkingMode{NetworkingMode::NOT_SET};

  Aws::String m_configurationName;
  bool m_workflowIdHasBeenSet = false;
  bool m_workflowTypeHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_cacheIdHasBeenSet = false;
  bool m_cacheBehaviorHasBeenSet = false;
  bool m_runGroupIdHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_storageCapacityHasBeenSet = false;
  bool m_outputUriHasBeenSet = false;
  bool m_logLevelHasBeenSet = false;
  bool m_runTagsHasBeenSet = false;
  bool m_retentionModeHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_workflowOwnerIdHasBeenSet = false;
  bool m_outputBucketOwnerIdHasBeenSet = false;
  bool m_workflowVersionNameHasBeenSet = false;
  bool m_networkingModeHasBeenSet = false;
  bool m_configurationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
