/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ParameterType.h>
#include <aws/sagemaker/model/ParameterRange.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines a hyperparameter to be used by an algorithm.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterSpecification">AWS
   * API Reference</a></p>
   */
  class HyperParameterSpecification
  {
  public:
    AWS_SAGEMAKER_API HyperParameterSpecification();
    AWS_SAGEMAKER_API HyperParameterSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline HyperParameterSpecification& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline HyperParameterSpecification& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline HyperParameterSpecification& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline HyperParameterSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline HyperParameterSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline HyperParameterSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline HyperParameterSpecification& WithType(const ParameterType& value) { SetType(value); return *this;}
    inline HyperParameterSpecification& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline const ParameterRange& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const ParameterRange& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(ParameterRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline HyperParameterSpecification& WithRange(const ParameterRange& value) { SetRange(value); return *this;}
    inline HyperParameterSpecification& WithRange(ParameterRange&& value) { SetRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this hyperparameter is tunable in a hyperparameter tuning
     * job.</p>
     */
    inline bool GetIsTunable() const{ return m_isTunable; }
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }
    inline HyperParameterSpecification& WithIsTunable(bool value) { SetIsTunable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this hyperparameter is required.</p>
     */
    inline bool GetIsRequired() const{ return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline HyperParameterSpecification& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline HyperParameterSpecification& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline HyperParameterSpecification& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline HyperParameterSpecification& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParameterType m_type;
    bool m_typeHasBeenSet = false;

    ParameterRange m_range;
    bool m_rangeHasBeenSet = false;

    bool m_isTunable;
    bool m_isTunableHasBeenSet = false;

    bool m_isRequired;
    bool m_isRequiredHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
