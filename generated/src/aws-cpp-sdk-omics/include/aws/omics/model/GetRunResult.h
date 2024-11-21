/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/omics/model/RunStatus.h>
#include <aws/omics/model/WorkflowType.h>
#include <aws/core/utils/Document.h>
#include <aws/omics/model/RunLogLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/Accelerators.h>
#include <aws/omics/model/RunRetentionMode.h>
#include <aws/omics/model/RunLogLocation.h>
#include <aws/omics/model/StorageType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Omics
{
namespace Model
{
  class GetRunResult
  {
  public:
    AWS_OMICS_API GetRunResult();
    AWS_OMICS_API GetRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The run's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetRunResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetRunResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetRunResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetRunResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache associated with the run.</p>
     */
    inline const Aws::String& GetCacheId() const{ return m_cacheId; }
    inline void SetCacheId(const Aws::String& value) { m_cacheId = value; }
    inline void SetCacheId(Aws::String&& value) { m_cacheId = std::move(value); }
    inline void SetCacheId(const char* value) { m_cacheId.assign(value); }
    inline GetRunResult& WithCacheId(const Aws::String& value) { SetCacheId(value); return *this;}
    inline GetRunResult& WithCacheId(Aws::String&& value) { SetCacheId(std::move(value)); return *this;}
    inline GetRunResult& WithCacheId(const char* value) { SetCacheId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache behavior for the run.</p>
     */
    inline const CacheBehavior& GetCacheBehavior() const{ return m_cacheBehavior; }
    inline void SetCacheBehavior(const CacheBehavior& value) { m_cacheBehavior = value; }
    inline void SetCacheBehavior(CacheBehavior&& value) { m_cacheBehavior = std::move(value); }
    inline GetRunResult& WithCacheBehavior(const CacheBehavior& value) { SetCacheBehavior(value); return *this;}
    inline GetRunResult& WithCacheBehavior(CacheBehavior&& value) { SetCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }
    inline GetRunResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline GetRunResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline GetRunResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's status.</p>
     */
    inline const RunStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RunStatus& value) { m_status = value; }
    inline void SetStatus(RunStatus&& value) { m_status = std::move(value); }
    inline GetRunResult& WithStatus(const RunStatus& value) { SetStatus(value); return *this;}
    inline GetRunResult& WithStatus(RunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's workflow ID.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline GetRunResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline GetRunResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline GetRunResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's workflow type.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowType = std::move(value); }
    inline GetRunResult& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline GetRunResult& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline void SetRunId(const Aws::String& value) { m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runId.assign(value); }
    inline GetRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline GetRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline GetRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetRunResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetRunResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetRunResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetRunResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetRunResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetRunResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's group ID.</p>
     */
    inline const Aws::String& GetRunGroupId() const{ return m_runGroupId; }
    inline void SetRunGroupId(const Aws::String& value) { m_runGroupId = value; }
    inline void SetRunGroupId(Aws::String&& value) { m_runGroupId = std::move(value); }
    inline void SetRunGroupId(const char* value) { m_runGroupId.assign(value); }
    inline GetRunResult& WithRunGroupId(const Aws::String& value) { SetRunGroupId(value); return *this;}
    inline GetRunResult& WithRunGroupId(Aws::String&& value) { SetRunGroupId(std::move(value)); return *this;}
    inline GetRunResult& WithRunGroupId(const char* value) { SetRunGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline void SetPriority(int value) { m_priority = value; }
    inline GetRunResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's definition.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const Aws::String& value) { m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definition.assign(value); }
    inline GetRunResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline GetRunResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline GetRunResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's digest.</p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }
    inline void SetDigest(const Aws::String& value) { m_digest = value; }
    inline void SetDigest(Aws::String&& value) { m_digest = std::move(value); }
    inline void SetDigest(const char* value) { m_digest.assign(value); }
    inline GetRunResult& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}
    inline GetRunResult& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}
    inline GetRunResult& WithDigest(const char* value) { SetDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's parameters.</p>
     */
    inline Aws::Utils::DocumentView GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Utils::Document& value) { m_parameters = value; }
    inline void SetParameters(Aws::Utils::Document&& value) { m_parameters = std::move(value); }
    inline GetRunResult& WithParameters(const Aws::Utils::Document& value) { SetParameters(value); return *this;}
    inline GetRunResult& WithParameters(Aws::Utils::Document&& value) { SetParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's storage capacity in gibibytes. For dynamic storage, after the run
     * has completed, this value is the maximum amount of storage used during the
     * run.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }
    inline void SetStorageCapacity(int value) { m_storageCapacity = value; }
    inline GetRunResult& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's output URI.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }
    inline void SetOutputUri(const Aws::String& value) { m_outputUri = value; }
    inline void SetOutputUri(Aws::String&& value) { m_outputUri = std::move(value); }
    inline void SetOutputUri(const char* value) { m_outputUri.assign(value); }
    inline GetRunResult& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}
    inline GetRunResult& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}
    inline GetRunResult& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's log level.</p>
     */
    inline const RunLogLevel& GetLogLevel() const{ return m_logLevel; }
    inline void SetLogLevel(const RunLogLevel& value) { m_logLevel = value; }
    inline void SetLogLevel(RunLogLevel&& value) { m_logLevel = std::move(value); }
    inline GetRunResult& WithLogLevel(const RunLogLevel& value) { SetLogLevel(value); return *this;}
    inline GetRunResult& WithLogLevel(RunLogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's resource digests.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceDigests() const{ return m_resourceDigests; }
    inline void SetResourceDigests(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceDigests = value; }
    inline void SetResourceDigests(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceDigests = std::move(value); }
    inline GetRunResult& WithResourceDigests(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceDigests(value); return *this;}
    inline GetRunResult& WithResourceDigests(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceDigests(std::move(value)); return *this;}
    inline GetRunResult& AddResourceDigests(const Aws::String& key, const Aws::String& value) { m_resourceDigests.emplace(key, value); return *this; }
    inline GetRunResult& AddResourceDigests(Aws::String&& key, const Aws::String& value) { m_resourceDigests.emplace(std::move(key), value); return *this; }
    inline GetRunResult& AddResourceDigests(const Aws::String& key, Aws::String&& value) { m_resourceDigests.emplace(key, std::move(value)); return *this; }
    inline GetRunResult& AddResourceDigests(Aws::String&& key, Aws::String&& value) { m_resourceDigests.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRunResult& AddResourceDigests(const char* key, Aws::String&& value) { m_resourceDigests.emplace(key, std::move(value)); return *this; }
    inline GetRunResult& AddResourceDigests(Aws::String&& key, const char* value) { m_resourceDigests.emplace(std::move(key), value); return *this; }
    inline GetRunResult& AddResourceDigests(const char* key, const char* value) { m_resourceDigests.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Who started the run.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }
    inline void SetStartedBy(const Aws::String& value) { m_startedBy = value; }
    inline void SetStartedBy(Aws::String&& value) { m_startedBy = std::move(value); }
    inline void SetStartedBy(const char* value) { m_startedBy.assign(value); }
    inline GetRunResult& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}
    inline GetRunResult& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}
    inline GetRunResult& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetRunResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetRunResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetRunResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetRunResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTime = value; }
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTime = std::move(value); }
    inline GetRunResult& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}
    inline GetRunResult& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetRunResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetRunResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetRunResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetRunResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetRunResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetRunResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetRunResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRunResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRunResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRunResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRunResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRunResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The computational accelerator used to run the workflow.</p>
     */
    inline const Accelerators& GetAccelerators() const{ return m_accelerators; }
    inline void SetAccelerators(const Accelerators& value) { m_accelerators = value; }
    inline void SetAccelerators(Accelerators&& value) { m_accelerators = std::move(value); }
    inline GetRunResult& WithAccelerators(const Accelerators& value) { SetAccelerators(value); return *this;}
    inline GetRunResult& WithAccelerators(Accelerators&& value) { SetAccelerators(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's retention mode.</p>
     */
    inline const RunRetentionMode& GetRetentionMode() const{ return m_retentionMode; }
    inline void SetRetentionMode(const RunRetentionMode& value) { m_retentionMode = value; }
    inline void SetRetentionMode(RunRetentionMode&& value) { m_retentionMode = std::move(value); }
    inline GetRunResult& WithRetentionMode(const RunRetentionMode& value) { SetRetentionMode(value); return *this;}
    inline GetRunResult& WithRetentionMode(RunRetentionMode&& value) { SetRetentionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason a run has failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetRunResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetRunResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetRunResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the run log.</p>
     */
    inline const RunLogLocation& GetLogLocation() const{ return m_logLocation; }
    inline void SetLogLocation(const RunLogLocation& value) { m_logLocation = value; }
    inline void SetLogLocation(RunLogLocation&& value) { m_logLocation = std::move(value); }
    inline GetRunResult& WithLogLocation(const RunLogLocation& value) { SetLogLocation(value); return *this;}
    inline GetRunResult& WithLogLocation(RunLogLocation&& value) { SetLogLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier for a run.</p>
     */
    inline const Aws::String& GetUuid() const{ return m_uuid; }
    inline void SetUuid(const Aws::String& value) { m_uuid = value; }
    inline void SetUuid(Aws::String&& value) { m_uuid = std::move(value); }
    inline void SetUuid(const char* value) { m_uuid.assign(value); }
    inline GetRunResult& WithUuid(const Aws::String& value) { SetUuid(value); return *this;}
    inline GetRunResult& WithUuid(Aws::String&& value) { SetUuid(std::move(value)); return *this;}
    inline GetRunResult& WithUuid(const char* value) { SetUuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for workflow outputs.</p>
     */
    inline const Aws::String& GetRunOutputUri() const{ return m_runOutputUri; }
    inline void SetRunOutputUri(const Aws::String& value) { m_runOutputUri = value; }
    inline void SetRunOutputUri(Aws::String&& value) { m_runOutputUri = std::move(value); }
    inline void SetRunOutputUri(const char* value) { m_runOutputUri.assign(value); }
    inline GetRunResult& WithRunOutputUri(const Aws::String& value) { SetRunOutputUri(value); return *this;}
    inline GetRunResult& WithRunOutputUri(Aws::String&& value) { SetRunOutputUri(std::move(value)); return *this;}
    inline GetRunResult& WithRunOutputUri(const char* value) { SetRunOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's storage type.</p>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }
    inline void SetStorageType(const StorageType& value) { m_storageType = value; }
    inline void SetStorageType(StorageType&& value) { m_storageType = std::move(value); }
    inline GetRunResult& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}
    inline GetRunResult& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline const Aws::String& GetWorkflowOwnerId() const{ return m_workflowOwnerId; }
    inline void SetWorkflowOwnerId(const Aws::String& value) { m_workflowOwnerId = value; }
    inline void SetWorkflowOwnerId(Aws::String&& value) { m_workflowOwnerId = std::move(value); }
    inline void SetWorkflowOwnerId(const char* value) { m_workflowOwnerId.assign(value); }
    inline GetRunResult& WithWorkflowOwnerId(const Aws::String& value) { SetWorkflowOwnerId(value); return *this;}
    inline GetRunResult& WithWorkflowOwnerId(Aws::String&& value) { SetWorkflowOwnerId(std::move(value)); return *this;}
    inline GetRunResult& WithWorkflowOwnerId(const char* value) { SetWorkflowOwnerId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_cacheId;

    CacheBehavior m_cacheBehavior;

    Aws::String m_engineVersion;

    RunStatus m_status;

    Aws::String m_workflowId;

    WorkflowType m_workflowType;

    Aws::String m_runId;

    Aws::String m_roleArn;

    Aws::String m_name;

    Aws::String m_runGroupId;

    int m_priority;

    Aws::String m_definition;

    Aws::String m_digest;

    Aws::Utils::Document m_parameters;

    int m_storageCapacity;

    Aws::String m_outputUri;

    RunLogLevel m_logLevel;

    Aws::Map<Aws::String, Aws::String> m_resourceDigests;

    Aws::String m_startedBy;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_stopTime;

    Aws::String m_statusMessage;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Accelerators m_accelerators;

    RunRetentionMode m_retentionMode;

    Aws::String m_failureReason;

    RunLogLocation m_logLocation;

    Aws::String m_uuid;

    Aws::String m_runOutputUri;

    StorageType m_storageType;

    Aws::String m_workflowOwnerId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
