﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhuborchestrator/model/TemplateStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migrationhuborchestrator/model/TemplateInput.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{
  class GetTemplateResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetTemplateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>&gt;The Amazon Resource Name (ARN) of the migration workflow template. The
     * format for an Migration Hub Orchestrator template ARN is
     * <code>arn:aws:migrationhub-orchestrator:region:account:template/template-abcd1234</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }
    inline GetTemplateResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline GetTemplateResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline GetTemplateResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTemplateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the template was last created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline const Aws::Vector<TemplateInput>& GetInputs() const{ return m_inputs; }
    inline void SetInputs(const Aws::Vector<TemplateInput>& value) { m_inputs = value; }
    inline void SetInputs(Aws::Vector<TemplateInput>&& value) { m_inputs = std::move(value); }
    inline GetTemplateResult& WithInputs(const Aws::Vector<TemplateInput>& value) { SetInputs(value); return *this;}
    inline GetTemplateResult& WithInputs(Aws::Vector<TemplateInput>&& value) { SetInputs(std::move(value)); return *this;}
    inline GetTemplateResult& AddInputs(const TemplateInput& value) { m_inputs.push_back(value); return *this; }
    inline GetTemplateResult& AddInputs(TemplateInput&& value) { m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }
    inline void SetTools(const Aws::Vector<Tool>& value) { m_tools = value; }
    inline void SetTools(Aws::Vector<Tool>&& value) { m_tools = std::move(value); }
    inline GetTemplateResult& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}
    inline GetTemplateResult& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}
    inline GetTemplateResult& AddTools(const Tool& value) { m_tools.push_back(value); return *this; }
    inline GetTemplateResult& AddTools(Tool&& value) { m_tools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the template was last created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetTemplateResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetTemplateResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the migration workflow template.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline void SetOwner(const Aws::String& value) { m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_owner.assign(value); }
    inline GetTemplateResult& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline GetTemplateResult& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline GetTemplateResult& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the template.</p>
     */
    inline const TemplateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TemplateStatus& value) { m_status = value; }
    inline void SetStatus(TemplateStatus&& value) { m_status = std::move(value); }
    inline GetTemplateResult& WithStatus(const TemplateStatus& value) { SetStatus(value); return *this;}
    inline GetTemplateResult& WithStatus(TemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of retrieving migration workflow templates.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetTemplateResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetTemplateResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetTemplateResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of the migration workflow template. The available template classes
     * are:</p> <ul> <li> <p>A2C</p> </li> <li> <p>MGN</p> </li> <li> <p>SAP_MULTI</p>
     * </li> <li> <p>SQL_EC2</p> </li> <li> <p>SQL_RDS</p> </li> <li> <p>VMIE</p> </li>
     * </ul>
     */
    inline const Aws::String& GetTemplateClass() const{ return m_templateClass; }
    inline void SetTemplateClass(const Aws::String& value) { m_templateClass = value; }
    inline void SetTemplateClass(Aws::String&& value) { m_templateClass = std::move(value); }
    inline void SetTemplateClass(const char* value) { m_templateClass.assign(value); }
    inline GetTemplateResult& WithTemplateClass(const Aws::String& value) { SetTemplateClass(value); return *this;}
    inline GetTemplateResult& WithTemplateClass(Aws::String&& value) { SetTemplateClass(std::move(value)); return *this;}
    inline GetTemplateResult& WithTemplateClass(const char* value) { SetTemplateClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags added to the migration workflow template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_templateArn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<TemplateInput> m_inputs;

    Aws::Vector<Tool> m_tools;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_owner;

    TemplateStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_templateClass;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
