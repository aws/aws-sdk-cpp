/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/Accelerators.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/omics/model/RunLogLevel.h>
#include <aws/omics/model/RunLogLocation.h>
#include <aws/omics/model/RunRetentionMode.h>
#include <aws/omics/model/RunStatus.h>
#include <aws/omics/model/StorageType.h>
#include <aws/omics/model/WorkflowType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {
class GetRunResult {
 public:
  AWS_OMICS_API GetRunResult() = default;
  AWS_OMICS_API GetRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OMICS_API GetRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The run's ARN.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetRunResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetRunResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run cache associated with the run.</p>
   */
  inline const Aws::String& GetCacheId() const { return m_cacheId; }
  template <typename CacheIdT = Aws::String>
  void SetCacheId(CacheIdT&& value) {
    m_cacheIdHasBeenSet = true;
    m_cacheId = std::forward<CacheIdT>(value);
  }
  template <typename CacheIdT = Aws::String>
  GetRunResult& WithCacheId(CacheIdT&& value) {
    SetCacheId(std::forward<CacheIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run cache behavior for the run.</p>
   */
  inline CacheBehavior GetCacheBehavior() const { return m_cacheBehavior; }
  inline void SetCacheBehavior(CacheBehavior value) {
    m_cacheBehaviorHasBeenSet = true;
    m_cacheBehavior = value;
  }
  inline GetRunResult& WithCacheBehavior(CacheBehavior value) {
    SetCacheBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual Nextflow engine version that Amazon Web Services HealthOmics used
   * for the run. The other workflow definition languages don't provide a value for
   * this field.</p>
   */
  inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
  template <typename EngineVersionT = Aws::String>
  void SetEngineVersion(EngineVersionT&& value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = std::forward<EngineVersionT>(value);
  }
  template <typename EngineVersionT = Aws::String>
  GetRunResult& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's status.</p>
   */
  inline RunStatus GetStatus() const { return m_status; }
  inline void SetStatus(RunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRunResult& WithStatus(RunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's workflow ID.</p>
   */
  inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
  template <typename WorkflowIdT = Aws::String>
  void SetWorkflowId(WorkflowIdT&& value) {
    m_workflowIdHasBeenSet = true;
    m_workflowId = std::forward<WorkflowIdT>(value);
  }
  template <typename WorkflowIdT = Aws::String>
  GetRunResult& WithWorkflowId(WorkflowIdT&& value) {
    SetWorkflowId(std::forward<WorkflowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's workflow type.</p>
   */
  inline WorkflowType GetWorkflowType() const { return m_workflowType; }
  inline void SetWorkflowType(WorkflowType value) {
    m_workflowTypeHasBeenSet = true;
    m_workflowType = value;
  }
  inline GetRunResult& WithWorkflowType(WorkflowType value) {
    SetWorkflowType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's ID.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  GetRunResult& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's service role ARN.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetRunResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRunResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's group ID.</p>
   */
  inline const Aws::String& GetRunGroupId() const { return m_runGroupId; }
  template <typename RunGroupIdT = Aws::String>
  void SetRunGroupId(RunGroupIdT&& value) {
    m_runGroupIdHasBeenSet = true;
    m_runGroupId = std::forward<RunGroupIdT>(value);
  }
  template <typename RunGroupIdT = Aws::String>
  GetRunResult& WithRunGroupId(RunGroupIdT&& value) {
    SetRunGroupId(std::forward<RunGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's priority.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline GetRunResult& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's definition.</p>
   */
  inline const Aws::String& GetDefinition() const { return m_definition; }
  template <typename DefinitionT = Aws::String>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = Aws::String>
  GetRunResult& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's digest.</p>
   */
  inline const Aws::String& GetDigest() const { return m_digest; }
  template <typename DigestT = Aws::String>
  void SetDigest(DigestT&& value) {
    m_digestHasBeenSet = true;
    m_digest = std::forward<DigestT>(value);
  }
  template <typename DigestT = Aws::String>
  GetRunResult& WithDigest(DigestT&& value) {
    SetDigest(std::forward<DigestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's parameters.</p>
   */
  inline Aws::Utils::DocumentView GetParameters() const { return m_parameters; }
  template <typename ParametersT = Aws::Utils::Document>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Utils::Document>
  GetRunResult& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's storage capacity in gibibytes. For dynamic storage, after the run
   * has completed, this value is the maximum amount of storage used during the
   * run.</p>
   */
  inline int GetStorageCapacity() const { return m_storageCapacity; }
  inline void SetStorageCapacity(int value) {
    m_storageCapacityHasBeenSet = true;
    m_storageCapacity = value;
  }
  inline GetRunResult& WithStorageCapacity(int value) {
    SetStorageCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's output URI.</p>
   */
  inline const Aws::String& GetOutputUri() const { return m_outputUri; }
  template <typename OutputUriT = Aws::String>
  void SetOutputUri(OutputUriT&& value) {
    m_outputUriHasBeenSet = true;
    m_outputUri = std::forward<OutputUriT>(value);
  }
  template <typename OutputUriT = Aws::String>
  GetRunResult& WithOutputUri(OutputUriT&& value) {
    SetOutputUri(std::forward<OutputUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's log level.</p>
   */
  inline RunLogLevel GetLogLevel() const { return m_logLevel; }
  inline void SetLogLevel(RunLogLevel value) {
    m_logLevelHasBeenSet = true;
    m_logLevel = value;
  }
  inline GetRunResult& WithLogLevel(RunLogLevel value) {
    SetLogLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's resource digests.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetResourceDigests() const { return m_resourceDigests; }
  template <typename ResourceDigestsT = Aws::Map<Aws::String, Aws::String>>
  void SetResourceDigests(ResourceDigestsT&& value) {
    m_resourceDigestsHasBeenSet = true;
    m_resourceDigests = std::forward<ResourceDigestsT>(value);
  }
  template <typename ResourceDigestsT = Aws::Map<Aws::String, Aws::String>>
  GetRunResult& WithResourceDigests(ResourceDigestsT&& value) {
    SetResourceDigests(std::forward<ResourceDigestsT>(value));
    return *this;
  }
  template <typename ResourceDigestsKeyT = Aws::String, typename ResourceDigestsValueT = Aws::String>
  GetRunResult& AddResourceDigests(ResourceDigestsKeyT&& key, ResourceDigestsValueT&& value) {
    m_resourceDigestsHasBeenSet = true;
    m_resourceDigests.emplace(std::forward<ResourceDigestsKeyT>(key), std::forward<ResourceDigestsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who started the run.</p>
   */
  inline const Aws::String& GetStartedBy() const { return m_startedBy; }
  template <typename StartedByT = Aws::String>
  void SetStartedBy(StartedByT&& value) {
    m_startedByHasBeenSet = true;
    m_startedBy = std::forward<StartedByT>(value);
  }
  template <typename StartedByT = Aws::String>
  GetRunResult& WithStartedBy(StartedByT&& value) {
    SetStartedBy(std::forward<StartedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the run was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetRunResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the run started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetRunResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's stop time.</p>
   */
  inline const Aws::Utils::DateTime& GetStopTime() const { return m_stopTime; }
  template <typename StopTimeT = Aws::Utils::DateTime>
  void SetStopTime(StopTimeT&& value) {
    m_stopTimeHasBeenSet = true;
    m_stopTime = std::forward<StopTimeT>(value);
  }
  template <typename StopTimeT = Aws::Utils::DateTime>
  GetRunResult& WithStopTime(StopTimeT&& value) {
    SetStopTime(std::forward<StopTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's status message.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetRunResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetRunResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetRunResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The computational accelerator used to run the workflow.</p>
   */
  inline Accelerators GetAccelerators() const { return m_accelerators; }
  inline void SetAccelerators(Accelerators value) {
    m_acceleratorsHasBeenSet = true;
    m_accelerators = value;
  }
  inline GetRunResult& WithAccelerators(Accelerators value) {
    SetAccelerators(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's retention mode.</p>
   */
  inline RunRetentionMode GetRetentionMode() const { return m_retentionMode; }
  inline void SetRetentionMode(RunRetentionMode value) {
    m_retentionModeHasBeenSet = true;
    m_retentionMode = value;
  }
  inline GetRunResult& WithRetentionMode(RunRetentionMode value) {
    SetRetentionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason a run has failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetRunResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the run log.</p>
   */
  inline const RunLogLocation& GetLogLocation() const { return m_logLocation; }
  template <typename LogLocationT = RunLogLocation>
  void SetLogLocation(LogLocationT&& value) {
    m_logLocationHasBeenSet = true;
    m_logLocation = std::forward<LogLocationT>(value);
  }
  template <typename LogLocationT = RunLogLocation>
  GetRunResult& WithLogLocation(LogLocationT&& value) {
    SetLogLocation(std::forward<LogLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The universally unique identifier for a run.</p>
   */
  inline const Aws::String& GetUuid() const { return m_uuid; }
  template <typename UuidT = Aws::String>
  void SetUuid(UuidT&& value) {
    m_uuidHasBeenSet = true;
    m_uuid = std::forward<UuidT>(value);
  }
  template <typename UuidT = Aws::String>
  GetRunResult& WithUuid(UuidT&& value) {
    SetUuid(std::forward<UuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for workflow outputs.</p>
   */
  inline const Aws::String& GetRunOutputUri() const { return m_runOutputUri; }
  template <typename RunOutputUriT = Aws::String>
  void SetRunOutputUri(RunOutputUriT&& value) {
    m_runOutputUriHasBeenSet = true;
    m_runOutputUri = std::forward<RunOutputUriT>(value);
  }
  template <typename RunOutputUriT = Aws::String>
  GetRunResult& WithRunOutputUri(RunOutputUriT&& value) {
    SetRunOutputUri(std::forward<RunOutputUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's storage type.</p>
   */
  inline StorageType GetStorageType() const { return m_storageType; }
  inline void SetStorageType(StorageType value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = value;
  }
  inline GetRunResult& WithStorageType(StorageType value) {
    SetStorageType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workflow owner.</p>
   */
  inline const Aws::String& GetWorkflowOwnerId() const { return m_workflowOwnerId; }
  template <typename WorkflowOwnerIdT = Aws::String>
  void SetWorkflowOwnerId(WorkflowOwnerIdT&& value) {
    m_workflowOwnerIdHasBeenSet = true;
    m_workflowOwnerId = std::forward<WorkflowOwnerIdT>(value);
  }
  template <typename WorkflowOwnerIdT = Aws::String>
  GetRunResult& WithWorkflowOwnerId(WorkflowOwnerIdT&& value) {
    SetWorkflowOwnerId(std::forward<WorkflowOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The workflow version name.</p>
   */
  inline const Aws::String& GetWorkflowVersionName() const { return m_workflowVersionName; }
  template <typename WorkflowVersionNameT = Aws::String>
  void SetWorkflowVersionName(WorkflowVersionNameT&& value) {
    m_workflowVersionNameHasBeenSet = true;
    m_workflowVersionName = std::forward<WorkflowVersionNameT>(value);
  }
  template <typename WorkflowVersionNameT = Aws::String>
  GetRunResult& WithWorkflowVersionName(WorkflowVersionNameT&& value) {
    SetWorkflowVersionName(std::forward<WorkflowVersionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The universally unique identifier (UUID) value for the workflow.</p>
   */
  inline const Aws::String& GetWorkflowUuid() const { return m_workflowUuid; }
  template <typename WorkflowUuidT = Aws::String>
  void SetWorkflowUuid(WorkflowUuidT&& value) {
    m_workflowUuidHasBeenSet = true;
    m_workflowUuid = std::forward<WorkflowUuidT>(value);
  }
  template <typename WorkflowUuidT = Aws::String>
  GetRunResult& WithWorkflowUuid(WorkflowUuidT&& value) {
    SetWorkflowUuid(std::forward<WorkflowUuidT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_cacheId;

  CacheBehavior m_cacheBehavior{CacheBehavior::NOT_SET};

  Aws::String m_engineVersion;

  RunStatus m_status{RunStatus::NOT_SET};

  Aws::String m_workflowId;

  WorkflowType m_workflowType{WorkflowType::NOT_SET};

  Aws::String m_runId;

  Aws::String m_roleArn;

  Aws::String m_name;

  Aws::String m_runGroupId;

  int m_priority{0};

  Aws::String m_definition;

  Aws::String m_digest;

  Aws::Utils::Document m_parameters;

  int m_storageCapacity{0};

  Aws::String m_outputUri;

  RunLogLevel m_logLevel{RunLogLevel::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_resourceDigests;

  Aws::String m_startedBy;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_stopTime{};

  Aws::String m_statusMessage;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Accelerators m_accelerators{Accelerators::NOT_SET};

  RunRetentionMode m_retentionMode{RunRetentionMode::NOT_SET};

  Aws::String m_failureReason;

  RunLogLocation m_logLocation;

  Aws::String m_uuid;

  Aws::String m_runOutputUri;

  StorageType m_storageType{StorageType::NOT_SET};

  Aws::String m_workflowOwnerId;

  Aws::String m_workflowVersionName;

  Aws::String m_workflowUuid;

  Aws::String m_requestId;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_cacheIdHasBeenSet = false;
  bool m_cacheBehaviorHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_workflowIdHasBeenSet = false;
  bool m_workflowTypeHasBeenSet = false;
  bool m_runIdHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_runGroupIdHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_definitionHasBeenSet = false;
  bool m_digestHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_storageCapacityHasBeenSet = false;
  bool m_outputUriHasBeenSet = false;
  bool m_logLevelHasBeenSet = false;
  bool m_resourceDigestsHasBeenSet = false;
  bool m_startedByHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_stopTimeHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_acceleratorsHasBeenSet = false;
  bool m_retentionModeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_logLocationHasBeenSet = false;
  bool m_uuidHasBeenSet = false;
  bool m_runOutputUriHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_workflowOwnerIdHasBeenSet = false;
  bool m_workflowVersionNameHasBeenSet = false;
  bool m_workflowUuidHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
