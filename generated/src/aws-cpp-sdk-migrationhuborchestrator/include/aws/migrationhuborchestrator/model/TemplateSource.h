﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The migration workflow template used as the source for the new
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/TemplateSource">AWS
   * API Reference</a></p>
   */
  class TemplateSource
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateSource() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the workflow from the source migration workflow template.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    TemplateSource& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
