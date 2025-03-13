/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides the name and default range of a categorical hyperparameter and
   * whether the hyperparameter is tunable. A tunable hyperparameter can have its
   * value determined during hyperparameter optimization (HPO).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DefaultCategoricalHyperParameterRange">AWS
   * API Reference</a></p>
   */
  class DefaultCategoricalHyperParameterRange
  {
  public:
    AWS_PERSONALIZE_API DefaultCategoricalHyperParameterRange() = default;
    AWS_PERSONALIZE_API DefaultCategoricalHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DefaultCategoricalHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DefaultCategoricalHyperParameterRange& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    DefaultCategoricalHyperParameterRange& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    DefaultCategoricalHyperParameterRange& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline bool GetIsTunable() const { return m_isTunable; }
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }
    inline DefaultCategoricalHyperParameterRange& WithIsTunable(bool value) { SetIsTunable(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    bool m_isTunable{false};
    bool m_isTunableHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
