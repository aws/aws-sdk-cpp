/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/DataType.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepOutputUnion.h>
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
   * <p>The output of a step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/WorkflowStepOutput">AWS
   * API Reference</a></p>
   */
  class WorkflowStepOutput
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutput() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkflowStepOutput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the output.</p>
     */
    inline DataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(DataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline WorkflowStepOutput& WithDataType(DataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determine if an output is required from a step.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline WorkflowStepOutput& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the output.</p>
     */
    inline const WorkflowStepOutputUnion& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = WorkflowStepOutputUnion>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = WorkflowStepOutputUnion>
    WorkflowStepOutput& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataType m_dataType{DataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    WorkflowStepOutputUnion m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
