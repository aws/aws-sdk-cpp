/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Contains information about a workflow type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowTypeInfo">AWS
   * API Reference</a></p>
   */
  class WorkflowTypeInfo
  {
  public:
    AWS_SWF_API WorkflowTypeInfo();
    AWS_SWF_API WorkflowTypeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workflow type this information is about.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline WorkflowTypeInfo& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline WorkflowTypeInfo& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>The current status of the workflow type.</p>
     */
    inline const RegistrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline void SetStatus(const RegistrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline void SetStatus(RegistrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline WorkflowTypeInfo& WithStatus(const RegistrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline WorkflowTypeInfo& WithStatus(RegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline WorkflowTypeInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline WorkflowTypeInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline WorkflowTypeInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date when this type was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when this type was registered.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date when this type was registered.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date when this type was registered.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date when this type was registered.</p>
     */
    inline WorkflowTypeInfo& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when this type was registered.</p>
     */
    inline WorkflowTypeInfo& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::move(value); }

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline WorkflowTypeInfo& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline WorkflowTypeInfo& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(std::move(value)); return *this;}

  private:

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    RegistrationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
