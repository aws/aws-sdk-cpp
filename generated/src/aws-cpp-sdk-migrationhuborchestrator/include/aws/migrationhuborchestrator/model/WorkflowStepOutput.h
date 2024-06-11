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
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutput();
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkflowStepOutput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowStepOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowStepOutput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the output.</p>
     */
    inline const DataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const DataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(DataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline WorkflowStepOutput& WithDataType(const DataType& value) { SetDataType(value); return *this;}
    inline WorkflowStepOutput& WithDataType(DataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determine if an output is required from a step.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline WorkflowStepOutput& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the output.</p>
     */
    inline const WorkflowStepOutputUnion& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const WorkflowStepOutputUnion& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(WorkflowStepOutputUnion&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline WorkflowStepOutput& WithValue(const WorkflowStepOutputUnion& value) { SetValue(value); return *this;}
    inline WorkflowStepOutput& WithValue(WorkflowStepOutputUnion&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    WorkflowStepOutputUnion m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
