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
    AWS_SAGEMAKER_API HyperParameterSpecification() = default;
    AWS_SAGEMAKER_API HyperParameterSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HyperParameterSpecification& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    HyperParameterSpecification& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline ParameterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ParameterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline HyperParameterSpecification& WithType(ParameterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline const ParameterRange& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = ParameterRange>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = ParameterRange>
    HyperParameterSpecification& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this hyperparameter is tunable in a hyperparameter tuning
     * job.</p>
     */
    inline bool GetIsTunable() const { return m_isTunable; }
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }
    inline HyperParameterSpecification& WithIsTunable(bool value) { SetIsTunable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this hyperparameter is required.</p>
     */
    inline bool GetIsRequired() const { return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline HyperParameterSpecification& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    HyperParameterSpecification& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParameterType m_type{ParameterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ParameterRange m_range;
    bool m_rangeHasBeenSet = false;

    bool m_isTunable{false};
    bool m_isTunableHasBeenSet = false;

    bool m_isRequired{false};
    bool m_isRequiredHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
