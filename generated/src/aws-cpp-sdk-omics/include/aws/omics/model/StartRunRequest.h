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
    AWS_OMICS_API StartRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRun"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The run's workflow ID. The <code>workflowId</code> is not the UUID.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    StartRunRequest& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's workflow type. The <code>workflowType</code> must be specified if
     * you are running a <code>READY2RUN</code> workflow. If you are running a
     * <code>PRIVATE</code> workflow (default), you do not need to include the workflow
     * type. </p>
     */
    inline WorkflowType GetWorkflowType() const { return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(WorkflowType value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline StartRunRequest& WithWorkflowType(WorkflowType value) { SetWorkflowType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a run to duplicate.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    StartRunRequest& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service role for the run. The <code>roleArn</code> requires access to
     * Amazon Web Services HealthOmics, S3, Cloudwatch logs, and EC2. An example
     * <code>roleArn</code> is
     * <code>arn:aws:iam::123456789012:role/omics-service-role-serviceRole-W8O1XMPL7QZ</code>.
     * In this example, the AWS account ID is <code>123456789012</code> and the role
     * name is <code>omics-service-role-serviceRole-W8O1XMPL7QZ</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartRunRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the run. This is recommended to view and organize runs in the
     * Amazon Web Services HealthOmics console and CloudWatch logs.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartRunRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the cache associated with this run. If you don't specify a
     * cache ID, no task outputs are cached for this run.</p>
     */
    inline const Aws::String& GetCacheId() const { return m_cacheId; }
    inline bool CacheIdHasBeenSet() const { return m_cacheIdHasBeenSet; }
    template<typename CacheIdT = Aws::String>
    void SetCacheId(CacheIdT&& value) { m_cacheIdHasBeenSet = true; m_cacheId = std::forward<CacheIdT>(value); }
    template<typename CacheIdT = Aws::String>
    StartRunRequest& WithCacheId(CacheIdT&& value) { SetCacheId(std::forward<CacheIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache behavior for the run. You specify this value if you want to
     * override the default behavior for the cache. You had set the default value when
     * you created the cache. For more information, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/how-run-cache.html#run-cache-behavior">Run
     * cache behavior</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline CacheBehavior GetCacheBehavior() const { return m_cacheBehavior; }
    inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
    inline void SetCacheBehavior(CacheBehavior value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline StartRunRequest& WithCacheBehavior(CacheBehavior value) { SetCacheBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's group ID. Use a run group to cap the compute resources (and number
     * of concurrent runs) for the runs that you add to the run group.</p>
     */
    inline const Aws::String& GetRunGroupId() const { return m_runGroupId; }
    inline bool RunGroupIdHasBeenSet() const { return m_runGroupIdHasBeenSet; }
    template<typename RunGroupIdT = Aws::String>
    void SetRunGroupId(RunGroupIdT&& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = std::forward<RunGroupIdT>(value); }
    template<typename RunGroupIdT = Aws::String>
    StartRunRequest& WithRunGroupId(RunGroupIdT&& value) { SetRunGroupId(std::forward<RunGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the run priority (highest: 1) to establish the order of runs in a run
     * group when you start a run. If multiple runs share the same priority, the run
     * that was initiated first will have the higher priority. Runs that do not belong
     * to a run group can be assigned a priority. The priorities of these runs are
     * ranked among other runs that are not in a run group. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/creating-run-groups.html#run-priority">Run
     * priority</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline StartRunRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for the run. The run needs all required parameters and can include
     * optional parameters. The run cannot include any parameters that are not defined
     * in the parameter template. To retrieve parameters from the run, use the GetRun
     * API operation.</p>
     */
    inline Aws::Utils::DocumentView GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Utils::Document>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Utils::Document>
    StartRunRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>STATIC</code> storage capacity (in gibibytes, GiB) for this run.
     * The default run storage capacity is 1200 GiB. If your requested storage capacity
     * is unavailable, the system rounds up the value to the nearest 1200 GiB multiple.
     * If the requested storage capacity is still unavailable, the system rounds up the
     * value to the nearest 2400 GiB multiple. This field is not required if the
     * storage type is <code>DYNAMIC</code> (the system ignores any value that you
     * enter).</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline StartRunRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An output S3 URI for the run. The S3 bucket must be in the same region as the
     * workflow. The role ARN must have permission to write to this S3 bucket.</p>
     */
    inline const Aws::String& GetOutputUri() const { return m_outputUri; }
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
    template<typename OutputUriT = Aws::String>
    void SetOutputUri(OutputUriT&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::forward<OutputUriT>(value); }
    template<typename OutputUriT = Aws::String>
    StartRunRequest& WithOutputUri(OutputUriT&& value) { SetOutputUri(std::forward<OutputUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A log level for the run.</p>
     */
    inline RunLogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(RunLogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline StartRunRequest& WithLogLevel(RunLogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the run. You can add up to 50 tags per run. For more information,
     * see <a href="https://docs.aws.amazon.com/omics/latest/dev/add-a-tag.html">Adding
     * a tag</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartRunRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartRunRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An idempotency token used to dedupe retry requests so that duplicate runs are
     * not created.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartRunRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention mode for the run. The default value is <code>RETAIN</code>.
     * </p> <p>Amazon Web Services HealthOmics stores a fixed number of runs that are
     * available to the console and API. In the default mode (<code>RETAIN</code>), you
     * need to remove runs manually when the number of run exceeds the maximum. If you
     * set the retention mode to <code>REMOVE</code>, Amazon Web Services HealthOmics
     * automatically removes runs (that have mode set to <code>REMOVE</code>) when the
     * number of run exceeds the maximum. All run logs are available in CloudWatch
     * logs, if you need information about a run that is no longer available to the
     * API.</p> <p>For more information about retention mode, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/starting-a-run.html">Specifying
     * run retention mode</a> in the <i>Amazon Web Services HealthOmics User
     * Guide</i>.</p>
     */
    inline RunRetentionMode GetRetentionMode() const { return m_retentionMode; }
    inline bool RetentionModeHasBeenSet() const { return m_retentionModeHasBeenSet; }
    inline void SetRetentionMode(RunRetentionMode value) { m_retentionModeHasBeenSet = true; m_retentionMode = value; }
    inline StartRunRequest& WithRetentionMode(RunRetentionMode value) { SetRetentionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type for the run. If you set the storage type to
     * <code>DYNAMIC</code>, Amazon Web Services HealthOmics dynamically scales the
     * storage up or down, based on file system utilization. By default, the run uses
     * <code>STATIC</code> storage type, which allocates a fixed amount of storage. For
     * more information about <code>DYNAMIC</code> and <code>STATIC</code> storage, see
     * <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/workflows-run-types.html">Run
     * storage types</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline StartRunRequest& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account ID of the workflow owner that is used for running a
     * shared workflow. The workflow owner ID can be retrieved using the
     * <code>GetShare</code> API operation. If you are the workflow owner, you do not
     * need to include this ID.</p>
     */
    inline const Aws::String& GetWorkflowOwnerId() const { return m_workflowOwnerId; }
    inline bool WorkflowOwnerIdHasBeenSet() const { return m_workflowOwnerIdHasBeenSet; }
    template<typename WorkflowOwnerIdT = Aws::String>
    void SetWorkflowOwnerId(WorkflowOwnerIdT&& value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId = std::forward<WorkflowOwnerIdT>(value); }
    template<typename WorkflowOwnerIdT = Aws::String>
    StartRunRequest& WithWorkflowOwnerId(WorkflowOwnerIdT&& value) { SetWorkflowOwnerId(std::forward<WorkflowOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow version. Use workflow versions to track and organize
     * changes to the workflow. If your workflow has multiple versions, the run uses
     * the default version unless you specify a version name. To learn more, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-versions.html">Workflow
     * versioning</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline const Aws::String& GetWorkflowVersionName() const { return m_workflowVersionName; }
    inline bool WorkflowVersionNameHasBeenSet() const { return m_workflowVersionNameHasBeenSet; }
    template<typename WorkflowVersionNameT = Aws::String>
    void SetWorkflowVersionName(WorkflowVersionNameT&& value) { m_workflowVersionNameHasBeenSet = true; m_workflowVersionName = std::forward<WorkflowVersionNameT>(value); }
    template<typename WorkflowVersionNameT = Aws::String>
    StartRunRequest& WithWorkflowVersionName(WorkflowVersionNameT&& value) { SetWorkflowVersionName(std::forward<WorkflowVersionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    WorkflowType m_workflowType{WorkflowType::NOT_SET};
    bool m_workflowTypeHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_cacheId;
    bool m_cacheIdHasBeenSet = false;

    CacheBehavior m_cacheBehavior{CacheBehavior::NOT_SET};
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_runGroupId;
    bool m_runGroupIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::Utils::Document m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;

    RunLogLevel m_logLevel{RunLogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;

    RunRetentionMode m_retentionMode{RunRetentionMode::NOT_SET};
    bool m_retentionModeHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_workflowOwnerId;
    bool m_workflowOwnerIdHasBeenSet = false;

    Aws::String m_workflowVersionName;
    bool m_workflowVersionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
