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
    AWS_PERSONALIZE_API DefaultCategoricalHyperParameterRange();
    AWS_PERSONALIZE_API DefaultCategoricalHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DefaultCategoricalHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DefaultCategoricalHyperParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DefaultCategoricalHyperParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DefaultCategoricalHyperParameterRange& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline DefaultCategoricalHyperParameterRange& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline DefaultCategoricalHyperParameterRange& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline DefaultCategoricalHyperParameterRange& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline DefaultCategoricalHyperParameterRange& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline DefaultCategoricalHyperParameterRange& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline bool GetIsTunable() const{ return m_isTunable; }
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }
    inline DefaultCategoricalHyperParameterRange& WithIsTunable(bool value) { SetIsTunable(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    bool m_isTunable;
    bool m_isTunableHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
