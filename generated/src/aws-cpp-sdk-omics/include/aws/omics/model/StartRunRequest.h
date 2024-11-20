/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/WorkflowType.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/core/utils/Document.h>
#include <aws/omics/model/RunLogLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/RunRetentionMode.h>
#include <aws/omics/model/StorageType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class StartRunRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API StartRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRun"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The run's workflow ID.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline StartRunRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline StartRunRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline StartRunRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's workflow type.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }
    inline StartRunRequest& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline StartRunRequest& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a run to duplicate.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline StartRunRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline StartRunRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline StartRunRequest& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service role for the run.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline StartRunRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline StartRunRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline StartRunRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartRunRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the cache associated with this run. If you don't specify a
     * cache ID, no task outputs are cached for this run.</p>
     */
    inline const Aws::String& GetCacheId() const{ return m_cacheId; }
    inline bool CacheIdHasBeenSet() const { return m_cacheIdHasBeenSet; }
    inline void SetCacheId(const Aws::String& value) { m_cacheIdHasBeenSet = true; m_cacheId = value; }
    inline void SetCacheId(Aws::String&& value) { m_cacheIdHasBeenSet = true; m_cacheId = std::move(value); }
    inline void SetCacheId(const char* value) { m_cacheIdHasBeenSet = true; m_cacheId.assign(value); }
    inline StartRunRequest& WithCacheId(const Aws::String& value) { SetCacheId(value); return *this;}
    inline StartRunRequest& WithCacheId(Aws::String&& value) { SetCacheId(std::move(value)); return *this;}
    inline StartRunRequest& WithCacheId(const char* value) { SetCacheId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache behavior for the run. You specify this value if you want to
     * override the default behavior for the cache. You had set the default value when
     * you created the cache. For more information, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/how-run-cache.html#run-cache-behavior">Run
     * cache behavior</a> in the AWS HealthOmics User Guide.</p>
     */
    inline const CacheBehavior& GetCacheBehavior() const{ return m_cacheBehavior; }
    inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
    inline void SetCacheBehavior(const CacheBehavior& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline void SetCacheBehavior(CacheBehavior&& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = std::move(value); }
    inline StartRunRequest& WithCacheBehavior(const CacheBehavior& value) { SetCacheBehavior(value); return *this;}
    inline StartRunRequest& WithCacheBehavior(CacheBehavior&& value) { SetCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's group ID.</p>
     */
    inline const Aws::String& GetRunGroupId() const{ return m_runGroupId; }
    inline bool RunGroupIdHasBeenSet() const { return m_runGroupIdHasBeenSet; }
    inline void SetRunGroupId(const Aws::String& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = value; }
    inline void SetRunGroupId(Aws::String&& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = std::move(value); }
    inline void SetRunGroupId(const char* value) { m_runGroupIdHasBeenSet = true; m_runGroupId.assign(value); }
    inline StartRunRequest& WithRunGroupId(const Aws::String& value) { SetRunGroupId(value); return *this;}
    inline StartRunRequest& WithRunGroupId(Aws::String&& value) { SetRunGroupId(std::move(value)); return *this;}
    inline StartRunRequest& WithRunGroupId(const char* value) { SetRunGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A priority for the run.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline StartRunRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for the run.</p>
     */
    inline Aws::Utils::DocumentView GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Utils::Document& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Utils::Document&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline StartRunRequest& WithParameters(const Aws::Utils::Document& value) { SetParameters(value); return *this;}
    inline StartRunRequest& WithParameters(Aws::Utils::Document&& value) { SetParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A storage capacity for the run in gibibytes. This field is not required if
     * the storage type is dynamic (the system ignores any value that you enter).</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline StartRunRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An output URI for the run.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
    inline void SetOutputUri(const Aws::String& value) { m_outputUriHasBeenSet = true; m_outputUri = value; }
    inline void SetOutputUri(Aws::String&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::move(value); }
    inline void SetOutputUri(const char* value) { m_outputUriHasBeenSet = true; m_outputUri.assign(value); }
    inline StartRunRequest& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}
    inline StartRunRequest& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}
    inline StartRunRequest& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A log level for the run.</p>
     */
    inline const RunLogLevel& GetLogLevel() const{ return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(const RunLogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline void SetLogLevel(RunLogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }
    inline StartRunRequest& WithLogLevel(const RunLogLevel& value) { SetLogLevel(value); return *this;}
    inline StartRunRequest& WithLogLevel(RunLogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartRunRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartRunRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartRunRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StartRunRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartRunRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartRunRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartRunRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartRunRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartRunRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>To ensure that requests don't run multiple times, specify a unique ID for
     * each request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline StartRunRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartRunRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartRunRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention mode for the run. The default value is RETAIN. </p>
     * <p>HealthOmics stores a fixed number of runs that are available to the console
     * and API. In the default mode (RETAIN), you need to remove runs manually when the
     * number of run exceeds the maximum. If you set the retention mode to
     * <code>REMOVE</code>, HealthOmics automatically removes runs (that have mode set
     * to REMOVE) when the number of run exceeds the maximum. All run logs are
     * available in CloudWatch logs, if you need information about a run that is no
     * longer available to the API.</p> <p>For more information about retention mode,
     * see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/starting-a-run.html">Specifying
     * run retention mode</a> in the <i>AWS HealthOmics User Guide</i>.</p>
     */
    inline const RunRetentionMode& GetRetentionMode() const{ return m_retentionMode; }
    inline bool RetentionModeHasBeenSet() const { return m_retentionModeHasBeenSet; }
    inline void SetRetentionMode(const RunRetentionMode& value) { m_retentionModeHasBeenSet = true; m_retentionMode = value; }
    inline void SetRetentionMode(RunRetentionMode&& value) { m_retentionModeHasBeenSet = true; m_retentionMode = std::move(value); }
    inline StartRunRequest& WithRetentionMode(const RunRetentionMode& value) { SetRetentionMode(value); return *this;}
    inline StartRunRequest& WithRetentionMode(RunRetentionMode&& value) { SetRetentionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's storage type. By default, the run uses STATIC storage type, which
     * allocates a fixed amount of storage. If you set the storage type to DYNAMIC,
     * HealthOmics dynamically scales the storage up or down, based on file system
     * utilization.</p>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline StartRunRequest& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}
    inline StartRunRequest& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow owner. </p>
     */
    inline const Aws::String& GetWorkflowOwnerId() const{ return m_workflowOwnerId; }
    inline bool WorkflowOwnerIdHasBeenSet() const { return m_workflowOwnerIdHasBeenSet; }
    inline void SetWorkflowOwnerId(const Aws::String& value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId = value; }
    inline void SetWorkflowOwnerId(Aws::String&& value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId = std::move(value); }
    inline void SetWorkflowOwnerId(const char* value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId.assign(value); }
    inline StartRunRequest& WithWorkflowOwnerId(const Aws::String& value) { SetWorkflowOwnerId(value); return *this;}
    inline StartRunRequest& WithWorkflowOwnerId(Aws::String&& value) { SetWorkflowOwnerId(std::move(value)); return *this;}
    inline StartRunRequest& WithWorkflowOwnerId(const char* value) { SetWorkflowOwnerId(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_cacheId;
    bool m_cacheIdHasBeenSet = false;

    CacheBehavior m_cacheBehavior;
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_runGroupId;
    bool m_runGroupIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Utils::Document m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;

    RunLogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    RunRetentionMode m_retentionMode;
    bool m_retentionModeHasBeenSet = false;

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_workflowOwnerId;
    bool m_workflowOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
