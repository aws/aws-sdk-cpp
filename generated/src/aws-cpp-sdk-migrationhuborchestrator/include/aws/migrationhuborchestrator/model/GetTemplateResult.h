/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/TemplateStatus.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline GetTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetTemplateResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time at which the template was last created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline GetTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline GetTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline GetTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline const Aws::Vector<TemplateInput>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline void SetInputs(const Aws::Vector<TemplateInput>& value) { m_inputs = value; }

    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline void SetInputs(Aws::Vector<TemplateInput>&& value) { m_inputs = std::move(value); }

    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline GetTemplateResult& WithInputs(const Aws::Vector<TemplateInput>& value) { SetInputs(value); return *this;}

    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline GetTemplateResult& WithInputs(Aws::Vector<TemplateInput>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline GetTemplateResult& AddInputs(const TemplateInput& value) { m_inputs.push_back(value); return *this; }

    /**
     * <p>The inputs provided for the creation of the migration workflow.</p>
     */
    inline GetTemplateResult& AddInputs(TemplateInput&& value) { m_inputs.push_back(std::move(value)); return *this; }


    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(const Aws::Vector<Tool>& value) { m_tools = value; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(Aws::Vector<Tool>&& value) { m_tools = std::move(value); }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetTemplateResult& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetTemplateResult& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetTemplateResult& AddTools(const Tool& value) { m_tools.push_back(value); return *this; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetTemplateResult& AddTools(Tool&& value) { m_tools.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the template.</p>
     */
    inline const TemplateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the template.</p>
     */
    inline void SetStatus(const TemplateStatus& value) { m_status = value; }

    /**
     * <p>The status of the template.</p>
     */
    inline void SetStatus(TemplateStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the template.</p>
     */
    inline GetTemplateResult& WithStatus(const TemplateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the template.</p>
     */
    inline GetTemplateResult& WithStatus(TemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the template was last created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline GetTemplateResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the template was last created.</p>
     */
    inline GetTemplateResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<TemplateInput> m_inputs;

    Aws::Vector<Tool> m_tools;

    TemplateStatus m_status;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
