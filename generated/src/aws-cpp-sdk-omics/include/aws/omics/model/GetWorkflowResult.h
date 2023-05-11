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


    /**
     * <p>The workflow's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The workflow's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The workflow's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The workflow's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The workflow's ARN.</p>
     */
    inline GetWorkflowResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The workflow's ARN.</p>
     */
    inline GetWorkflowResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The workflow's ARN.</p>
     */
    inline GetWorkflowResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The workflow's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The workflow's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The workflow's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The workflow's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The workflow's ID.</p>
     */
    inline GetWorkflowResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The workflow's ID.</p>
     */
    inline GetWorkflowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The workflow's ID.</p>
     */
    inline GetWorkflowResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The workflow's status.</p>
     */
    inline const WorkflowStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The workflow's status.</p>
     */
    inline void SetStatus(const WorkflowStatus& value) { m_status = value; }

    /**
     * <p>The workflow's status.</p>
     */
    inline void SetStatus(WorkflowStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The workflow's status.</p>
     */
    inline GetWorkflowResult& WithStatus(const WorkflowStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The workflow's status.</p>
     */
    inline GetWorkflowResult& WithStatus(WorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The workflow's type.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>The workflow's type.</p>
     */
    inline void SetType(const WorkflowType& value) { m_type = value; }

    /**
     * <p>The workflow's type.</p>
     */
    inline void SetType(WorkflowType&& value) { m_type = std::move(value); }

    /**
     * <p>The workflow's type.</p>
     */
    inline GetWorkflowResult& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>The workflow's type.</p>
     */
    inline GetWorkflowResult& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The workflow's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The workflow's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The workflow's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The workflow's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The workflow's name.</p>
     */
    inline GetWorkflowResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The workflow's name.</p>
     */
    inline GetWorkflowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The workflow's name.</p>
     */
    inline GetWorkflowResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The workflow's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The workflow's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The workflow's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The workflow's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The workflow's description.</p>
     */
    inline GetWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The workflow's description.</p>
     */
    inline GetWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The workflow's description.</p>
     */
    inline GetWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The workflow's engine.</p>
     */
    inline const WorkflowEngine& GetEngine() const{ return m_engine; }

    /**
     * <p>The workflow's engine.</p>
     */
    inline void SetEngine(const WorkflowEngine& value) { m_engine = value; }

    /**
     * <p>The workflow's engine.</p>
     */
    inline void SetEngine(WorkflowEngine&& value) { m_engine = std::move(value); }

    /**
     * <p>The workflow's engine.</p>
     */
    inline GetWorkflowResult& WithEngine(const WorkflowEngine& value) { SetEngine(value); return *this;}

    /**
     * <p>The workflow's engine.</p>
     */
    inline GetWorkflowResult& WithEngine(WorkflowEngine&& value) { SetEngine(std::move(value)); return *this;}


    /**
     * <p>The workflow's definition.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The workflow's definition.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definition = value; }

    /**
     * <p>The workflow's definition.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definition = std::move(value); }

    /**
     * <p>The workflow's definition.</p>
     */
    inline void SetDefinition(const char* value) { m_definition.assign(value); }

    /**
     * <p>The workflow's definition.</p>
     */
    inline GetWorkflowResult& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The workflow's definition.</p>
     */
    inline GetWorkflowResult& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The workflow's definition.</p>
     */
    inline GetWorkflowResult& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline const Aws::String& GetMain() const{ return m_main; }

    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline void SetMain(const Aws::String& value) { m_main = value; }

    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline void SetMain(Aws::String&& value) { m_main = std::move(value); }

    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline void SetMain(const char* value) { m_main.assign(value); }

    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline GetWorkflowResult& WithMain(const Aws::String& value) { SetMain(value); return *this;}

    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline GetWorkflowResult& WithMain(Aws::String&& value) { SetMain(std::move(value)); return *this;}

    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline GetWorkflowResult& WithMain(const char* value) { SetMain(value); return *this;}


    /**
     * <p>The workflow's digest.</p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }

    /**
     * <p>The workflow's digest.</p>
     */
    inline void SetDigest(const Aws::String& value) { m_digest = value; }

    /**
     * <p>The workflow's digest.</p>
     */
    inline void SetDigest(Aws::String&& value) { m_digest = std::move(value); }

    /**
     * <p>The workflow's digest.</p>
     */
    inline void SetDigest(const char* value) { m_digest.assign(value); }

    /**
     * <p>The workflow's digest.</p>
     */
    inline GetWorkflowResult& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}

    /**
     * <p>The workflow's digest.</p>
     */
    inline GetWorkflowResult& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}

    /**
     * <p>The workflow's digest.</p>
     */
    inline GetWorkflowResult& WithDigest(const char* value) { SetDigest(value); return *this;}


    /**
     * <p>The workflow's parameter template.</p>
     */
    inline const Aws::Map<Aws::String, WorkflowParameter>& GetParameterTemplate() const{ return m_parameterTemplate; }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline void SetParameterTemplate(const Aws::Map<Aws::String, WorkflowParameter>& value) { m_parameterTemplate = value; }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline void SetParameterTemplate(Aws::Map<Aws::String, WorkflowParameter>&& value) { m_parameterTemplate = std::move(value); }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& WithParameterTemplate(const Aws::Map<Aws::String, WorkflowParameter>& value) { SetParameterTemplate(value); return *this;}

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& WithParameterTemplate(Aws::Map<Aws::String, WorkflowParameter>&& value) { SetParameterTemplate(std::move(value)); return *this;}

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& AddParameterTemplate(const Aws::String& key, const WorkflowParameter& value) { m_parameterTemplate.emplace(key, value); return *this; }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& AddParameterTemplate(Aws::String&& key, const WorkflowParameter& value) { m_parameterTemplate.emplace(std::move(key), value); return *this; }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& AddParameterTemplate(const Aws::String& key, WorkflowParameter&& value) { m_parameterTemplate.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& AddParameterTemplate(Aws::String&& key, WorkflowParameter&& value) { m_parameterTemplate.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& AddParameterTemplate(const char* key, WorkflowParameter&& value) { m_parameterTemplate.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The workflow's parameter template.</p>
     */
    inline GetWorkflowResult& AddParameterTemplate(const char* key, const WorkflowParameter& value) { m_parameterTemplate.emplace(key, value); return *this; }


    /**
     * <p>The workflow's storage capacity in gigabytes.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>The workflow's storage capacity in gigabytes.</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacity = value; }

    /**
     * <p>The workflow's storage capacity in gigabytes.</p>
     */
    inline GetWorkflowResult& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    /**
     * <p>When the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the workflow was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the workflow was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the workflow was created.</p>
     */
    inline GetWorkflowResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the workflow was created.</p>
     */
    inline GetWorkflowResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The workflow's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The workflow's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The workflow's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The workflow's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The workflow's status message.</p>
     */
    inline GetWorkflowResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The workflow's status message.</p>
     */
    inline GetWorkflowResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The workflow's status message.</p>
     */
    inline GetWorkflowResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The workflow's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The workflow's tags.</p>
     */
    inline GetWorkflowResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata = value; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadata = std::move(value); }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadata.emplace(key, value); return *this; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& AddMetadata(const char* key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& AddMetadata(Aws::String&& key, const char* value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p> Gets metadata for workflow. </p>
     */
    inline GetWorkflowResult& AddMetadata(const char* key, const char* value) { m_metadata.emplace(key, value); return *this; }


    /**
     * <p> The computational accelerator specified to run the workflow. </p>
     */
    inline const Accelerators& GetAccelerators() const{ return m_accelerators; }

    /**
     * <p> The computational accelerator specified to run the workflow. </p>
     */
    inline void SetAccelerators(const Accelerators& value) { m_accelerators = value; }

    /**
     * <p> The computational accelerator specified to run the workflow. </p>
     */
    inline void SetAccelerators(Accelerators&& value) { m_accelerators = std::move(value); }

    /**
     * <p> The computational accelerator specified to run the workflow. </p>
     */
    inline GetWorkflowResult& WithAccelerators(const Accelerators& value) { SetAccelerators(value); return *this;}

    /**
     * <p> The computational accelerator specified to run the workflow. </p>
     */
    inline GetWorkflowResult& WithAccelerators(Accelerators&& value) { SetAccelerators(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
