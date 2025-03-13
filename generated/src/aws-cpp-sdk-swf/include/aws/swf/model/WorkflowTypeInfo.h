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
    AWS_SWF_API WorkflowTypeInfo() = default;
    AWS_SWF_API WorkflowTypeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workflow type this information is about.</p>
     */
    inline const WorkflowType& GetWorkflowType() const { return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    template<typename WorkflowTypeT = WorkflowType>
    void SetWorkflowType(WorkflowTypeT&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::forward<WorkflowTypeT>(value); }
    template<typename WorkflowTypeT = WorkflowType>
    WorkflowTypeInfo& WithWorkflowType(WorkflowTypeT&& value) { SetWorkflowType(std::forward<WorkflowTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the workflow type.</p>
     */
    inline RegistrationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RegistrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkflowTypeInfo& WithStatus(RegistrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkflowTypeInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when this type was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    WorkflowTypeInfo& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const { return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    void SetDeprecationDate(DeprecationDateT&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::forward<DeprecationDateT>(value); }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    WorkflowTypeInfo& WithDeprecationDate(DeprecationDateT&& value) { SetDeprecationDate(std::forward<DeprecationDateT>(value)); return *this;}
    ///@}
  private:

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    RegistrationStatus m_status{RegistrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate{};
    bool m_deprecationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
