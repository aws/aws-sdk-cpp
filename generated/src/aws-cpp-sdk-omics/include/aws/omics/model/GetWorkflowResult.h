/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/WorkflowStatus.h>
#include <aws/omics/model/WorkflowType.h>
#include <aws/omics/model/WorkflowEngine.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/Accelerators.h>
#include <aws/omics/model/WorkflowParameter.h>
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
  class GetWorkflowResult
  {
  public:
    AWS_OMICS_API GetWorkflowResult();
    AWS_OMICS_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The workflow's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetWorkflowResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetWorkflowResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetWorkflowResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetWorkflowResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetWorkflowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's status.</p>
     */
    inline const WorkflowStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WorkflowStatus& value) { m_status = value; }
    inline void SetStatus(WorkflowStatus&& value) { m_status = std::move(value); }
    inline GetWorkflowResult& WithStatus(const WorkflowStatus& value) { SetStatus(value); return *this;}
    inline GetWorkflowResult& WithStatus(WorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's type.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }
    inline void SetType(const WorkflowType& value) { m_type = value; }
    inline void SetType(WorkflowType&& value) { m_type = std::move(value); }
    inline GetWorkflowResult& WithType(const WorkflowType& value) { SetType(value); return *this;}
    inline GetWorkflowResult& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetWorkflowResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWorkflowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWorkflowResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's engine.</p>
     */
    inline const WorkflowEngine& GetEngine() const{ return m_engine; }
    inline void SetEngine(const WorkflowEngine& value) { m_engine = value; }
    inline void SetEngine(WorkflowEngine&& value) { m_engine = std::move(value); }
    inline GetWorkflowResult& WithEngine(const WorkflowEngine& value) { SetEngine(value); return *this;}
    inline GetWorkflowResult& WithEngine(WorkflowEngine&& value) { SetEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's definition.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const Aws::String& value) { m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definition.assign(value); }
    inline GetWorkflowResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline GetWorkflowResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline GetWorkflowResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline const Aws::String& GetMain() const{ return m_main; }
    inline void SetMain(const Aws::String& value) { m_main = value; }
    inline void SetMain(Aws::String&& value) { m_main = std::move(value); }
    inline void SetMain(const char* value) { m_main.assign(value); }
    inline GetWorkflowResult& WithMain(const Aws::String& value) { SetMain(value); return *this;}
    inline GetWorkflowResult& WithMain(Aws::String&& value) { SetMain(std::move(value)); return *this;}
    inline GetWorkflowResult& WithMain(const char* value) { SetMain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's digest.</p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }
    inline void SetDigest(const Aws::String& value) { m_digest = value; }
    inline void SetDigest(Aws::String&& value) { m_digest = std::move(value); }
    inline void SetDigest(const char* value) { m_digest.assign(value); }
    inline GetWorkflowResult& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}
    inline GetWorkflowResult& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}
    inline GetWorkflowResult& WithDigest(const char* value) { SetDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's parameter template.</p>
     */
    inline const Aws::Map<Aws::String, WorkflowParameter>& GetParameterTemplate() const{ return m_parameterTemplate; }
    inline void SetParameterTemplate(const Aws::Map<Aws::String, WorkflowParameter>& value) { m_parameterTemplate = value; }
    inline void SetParameterTemplate(Aws::Map<Aws::String, WorkflowParameter>&& value) { m_parameterTemplate = std::move(value); }
    inline GetWorkflowResult& WithParameterTemplate(const Aws::Map<Aws::String, WorkflowParameter>& value) { SetParameterTemplate(value); return *this;}
    inline GetWorkflowResult& WithParameterTemplate(Aws::Map<Aws::String, WorkflowParameter>&& value) { SetParameterTemplate(std::move(value)); return *this;}
    inline GetWorkflowResult& AddParameterTemplate(const Aws::String& key, const WorkflowParameter& value) { m_parameterTemplate.emplace(key, value); return *this; }
    inline GetWorkflowResult& AddParameterTemplate(Aws::String&& key, const WorkflowParameter& value) { m_parameterTemplate.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddParameterTemplate(const Aws::String& key, WorkflowParameter&& value) { m_parameterTemplate.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddParameterTemplate(Aws::String&& key, WorkflowParameter&& value) { m_parameterTemplate.emplace(std::move(key), std::move(value)); return *this; }
    inline GetWorkflowResult& AddParameterTemplate(const char* key, WorkflowParameter&& value) { m_parameterTemplate.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddParameterTemplate(const char* key, const WorkflowParameter& value) { m_parameterTemplate.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The workflow's default run storage capacity in gibibytes.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }
    inline void SetStorageCapacity(int value) { m_storageCapacity = value; }
    inline GetWorkflowResult& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetWorkflowResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetWorkflowResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetWorkflowResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetWorkflowResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetWorkflowResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetWorkflowResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetWorkflowResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetWorkflowResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetWorkflowResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetWorkflowResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Gets metadata for workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadata = std::move(value); }
    inline GetWorkflowResult& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline GetWorkflowResult& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline GetWorkflowResult& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadata.emplace(key, value); return *this; }
    inline GetWorkflowResult& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadata.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline GetWorkflowResult& AddMetadata(const char* key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddMetadata(Aws::String&& key, const char* value) { m_metadata.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddMetadata(const char* key, const char* value) { m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The computational accelerator specified to run the workflow. </p>
     */
    inline const Accelerators& GetAccelerators() const{ return m_accelerators; }
    inline void SetAccelerators(const Accelerators& value) { m_accelerators = value; }
    inline void SetAccelerators(Accelerators&& value) { m_accelerators = std::move(value); }
    inline GetWorkflowResult& WithAccelerators(const Accelerators& value) { SetAccelerators(value); return *this;}
    inline GetWorkflowResult& WithAccelerators(Accelerators&& value) { SetAccelerators(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    WorkflowStatus m_status;

    WorkflowType m_type;

    Aws::String m_name;

    Aws::String m_description;

    WorkflowEngine m_engine;

    Aws::String m_definition;

    Aws::String m_main;

    Aws::String m_digest;

    Aws::Map<Aws::String, WorkflowParameter> m_parameterTemplate;

    int m_storageCapacity;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_statusMessage;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Map<Aws::String, Aws::String> m_metadata;

    Accelerators m_accelerators;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
