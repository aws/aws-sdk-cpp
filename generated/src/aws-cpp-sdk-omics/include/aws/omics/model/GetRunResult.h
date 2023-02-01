/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/RunLogLevel.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/RunStatus.h>
#include <aws/omics/model/WorkflowType.h>
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


    /**
     * <p>The run's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The run's ARN.</p>
     */
    inline GetRunResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The run's ARN.</p>
     */
    inline GetRunResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The run's ARN.</p>
     */
    inline GetRunResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the run was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the run was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the run was created.</p>
     */
    inline GetRunResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the run was created.</p>
     */
    inline GetRunResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The run's definition.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The run's definition.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definition = value; }

    /**
     * <p>The run's definition.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definition = std::move(value); }

    /**
     * <p>The run's definition.</p>
     */
    inline void SetDefinition(const char* value) { m_definition.assign(value); }

    /**
     * <p>The run's definition.</p>
     */
    inline GetRunResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The run's definition.</p>
     */
    inline GetRunResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The run's definition.</p>
     */
    inline GetRunResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The run's digest.</p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }

    /**
     * <p>The run's digest.</p>
     */
    inline void SetDigest(const Aws::String& value) { m_digest = value; }

    /**
     * <p>The run's digest.</p>
     */
    inline void SetDigest(Aws::String&& value) { m_digest = std::move(value); }

    /**
     * <p>The run's digest.</p>
     */
    inline void SetDigest(const char* value) { m_digest.assign(value); }

    /**
     * <p>The run's digest.</p>
     */
    inline GetRunResult& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}

    /**
     * <p>The run's digest.</p>
     */
    inline GetRunResult& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}

    /**
     * <p>The run's digest.</p>
     */
    inline GetRunResult& WithDigest(const char* value) { SetDigest(value); return *this;}


    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline GetRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline GetRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline GetRunResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The run's log level.</p>
     */
    inline const RunLogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>The run's log level.</p>
     */
    inline void SetLogLevel(const RunLogLevel& value) { m_logLevel = value; }

    /**
     * <p>The run's log level.</p>
     */
    inline void SetLogLevel(RunLogLevel&& value) { m_logLevel = std::move(value); }

    /**
     * <p>The run's log level.</p>
     */
    inline GetRunResult& WithLogLevel(const RunLogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>The run's log level.</p>
     */
    inline GetRunResult& WithLogLevel(RunLogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * <p>The run's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The run's name.</p>
     */
    inline GetRunResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The run's name.</p>
     */
    inline GetRunResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The run's name.</p>
     */
    inline GetRunResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The run's output URI.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }

    /**
     * <p>The run's output URI.</p>
     */
    inline void SetOutputUri(const Aws::String& value) { m_outputUri = value; }

    /**
     * <p>The run's output URI.</p>
     */
    inline void SetOutputUri(Aws::String&& value) { m_outputUri = std::move(value); }

    /**
     * <p>The run's output URI.</p>
     */
    inline void SetOutputUri(const char* value) { m_outputUri.assign(value); }

    /**
     * <p>The run's output URI.</p>
     */
    inline GetRunResult& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}

    /**
     * <p>The run's output URI.</p>
     */
    inline GetRunResult& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}

    /**
     * <p>The run's output URI.</p>
     */
    inline GetRunResult& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}


    /**
     * <p>The run's parameters.</p>
     */
    inline Aws::Utils::DocumentView GetParameters() const{ return m_parameters; }

    /**
     * <p>The run's parameters.</p>
     */
    inline void SetParameters(const Aws::Utils::Document& value) { m_parameters = value; }

    /**
     * <p>The run's parameters.</p>
     */
    inline void SetParameters(Aws::Utils::Document&& value) { m_parameters = std::move(value); }

    /**
     * <p>The run's parameters.</p>
     */
    inline GetRunResult& WithParameters(const Aws::Utils::Document& value) { SetParameters(value); return *this;}

    /**
     * <p>The run's parameters.</p>
     */
    inline GetRunResult& WithParameters(Aws::Utils::Document&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>The run's priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The run's priority.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The run's priority.</p>
     */
    inline GetRunResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The run's resource digests.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceDigests() const{ return m_resourceDigests; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline void SetResourceDigests(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceDigests = value; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline void SetResourceDigests(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceDigests = std::move(value); }

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& WithResourceDigests(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceDigests(value); return *this;}

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& WithResourceDigests(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceDigests(std::move(value)); return *this;}

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& AddResourceDigests(const Aws::String& key, const Aws::String& value) { m_resourceDigests.emplace(key, value); return *this; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& AddResourceDigests(Aws::String&& key, const Aws::String& value) { m_resourceDigests.emplace(std::move(key), value); return *this; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& AddResourceDigests(const Aws::String& key, Aws::String&& value) { m_resourceDigests.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& AddResourceDigests(Aws::String&& key, Aws::String&& value) { m_resourceDigests.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& AddResourceDigests(const char* key, Aws::String&& value) { m_resourceDigests.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& AddResourceDigests(Aws::String&& key, const char* value) { m_resourceDigests.emplace(std::move(key), value); return *this; }

    /**
     * <p>The run's resource digests.</p>
     */
    inline GetRunResult& AddResourceDigests(const char* key, const char* value) { m_resourceDigests.emplace(key, value); return *this; }


    /**
     * <p>The run's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The run's service role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The run's service role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The run's service role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The run's service role ARN.</p>
     */
    inline GetRunResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The run's service role ARN.</p>
     */
    inline GetRunResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The run's service role ARN.</p>
     */
    inline GetRunResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The run's group ID.</p>
     */
    inline const Aws::String& GetRunGroupId() const{ return m_runGroupId; }

    /**
     * <p>The run's group ID.</p>
     */
    inline void SetRunGroupId(const Aws::String& value) { m_runGroupId = value; }

    /**
     * <p>The run's group ID.</p>
     */
    inline void SetRunGroupId(Aws::String&& value) { m_runGroupId = std::move(value); }

    /**
     * <p>The run's group ID.</p>
     */
    inline void SetRunGroupId(const char* value) { m_runGroupId.assign(value); }

    /**
     * <p>The run's group ID.</p>
     */
    inline GetRunResult& WithRunGroupId(const Aws::String& value) { SetRunGroupId(value); return *this;}

    /**
     * <p>The run's group ID.</p>
     */
    inline GetRunResult& WithRunGroupId(Aws::String&& value) { SetRunGroupId(std::move(value)); return *this;}

    /**
     * <p>The run's group ID.</p>
     */
    inline GetRunResult& WithRunGroupId(const char* value) { SetRunGroupId(value); return *this;}


    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline GetRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline GetRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline GetRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>When the run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>When the run started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>When the run started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>When the run started.</p>
     */
    inline GetRunResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the run started.</p>
     */
    inline GetRunResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Who started the run.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>Who started the run.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedBy = value; }

    /**
     * <p>Who started the run.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedBy = std::move(value); }

    /**
     * <p>Who started the run.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedBy.assign(value); }

    /**
     * <p>Who started the run.</p>
     */
    inline GetRunResult& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>Who started the run.</p>
     */
    inline GetRunResult& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>Who started the run.</p>
     */
    inline GetRunResult& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The run's status.</p>
     */
    inline const RunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The run's status.</p>
     */
    inline void SetStatus(const RunStatus& value) { m_status = value; }

    /**
     * <p>The run's status.</p>
     */
    inline void SetStatus(RunStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The run's status.</p>
     */
    inline GetRunResult& WithStatus(const RunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The run's status.</p>
     */
    inline GetRunResult& WithStatus(RunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The run's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The run's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The run's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The run's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The run's status message.</p>
     */
    inline GetRunResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The run's status message.</p>
     */
    inline GetRunResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The run's status message.</p>
     */
    inline GetRunResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The run's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }

    /**
     * <p>The run's stop time.</p>
     */
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTime = value; }

    /**
     * <p>The run's stop time.</p>
     */
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTime = std::move(value); }

    /**
     * <p>The run's stop time.</p>
     */
    inline GetRunResult& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}

    /**
     * <p>The run's stop time.</p>
     */
    inline GetRunResult& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}


    /**
     * <p>The run's storage capacity.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>The run's storage capacity.</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacity = value; }

    /**
     * <p>The run's storage capacity.</p>
     */
    inline GetRunResult& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    /**
     * <p>The run's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The run's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The run's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The run's tags.</p>
     */
    inline GetRunResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The run's workflow ID.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline GetRunResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The run's workflow ID.</p>
     */
    inline GetRunResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The run's workflow ID.</p>
     */
    inline GetRunResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The run's workflow type.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The run's workflow type.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowType = value; }

    /**
     * <p>The run's workflow type.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowType = std::move(value); }

    /**
     * <p>The run's workflow type.</p>
     */
    inline GetRunResult& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The run's workflow type.</p>
     */
    inline GetRunResult& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_definition;

    Aws::String m_digest;

    Aws::String m_id;

    RunLogLevel m_logLevel;

    Aws::String m_name;

    Aws::String m_outputUri;

    Aws::Utils::Document m_parameters;

    int m_priority;

    Aws::Map<Aws::String, Aws::String> m_resourceDigests;

    Aws::String m_roleArn;

    Aws::String m_runGroupId;

    Aws::String m_runId;

    Aws::Utils::DateTime m_startTime;

    Aws::String m_startedBy;

    RunStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_stopTime;

    int m_storageCapacity;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_workflowId;

    WorkflowType m_workflowType;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
