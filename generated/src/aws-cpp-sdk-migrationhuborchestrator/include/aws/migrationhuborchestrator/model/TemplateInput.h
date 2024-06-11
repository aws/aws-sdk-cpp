/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/DataType.h>
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
   * <p>The input parameters of a template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/TemplateInput">AWS
   * API Reference</a></p>
   */
  class TemplateInput
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateInput();
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }
    inline TemplateInput& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}
    inline TemplateInput& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}
    inline TemplateInput& WithInputName(const char* value) { SetInputName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the template input.</p>
     */
    inline const DataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const DataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(DataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline TemplateInput& WithDataType(const DataType& value) { SetDataType(value); return *this;}
    inline TemplateInput& WithDataType(DataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determine if an input is required from the template.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline TemplateInput& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    DataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
