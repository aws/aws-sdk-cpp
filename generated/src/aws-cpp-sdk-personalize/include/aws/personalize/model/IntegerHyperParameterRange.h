/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides the name and range of an integer-valued
   * hyperparameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/IntegerHyperParameterRange">AWS
   * API Reference</a></p>
   */
  class IntegerHyperParameterRange
  {
  public:
    AWS_PERSONALIZE_API IntegerHyperParameterRange() = default;
    AWS_PERSONALIZE_API IntegerHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API IntegerHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    IntegerHyperParameterRange& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline int GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline IntegerHyperParameterRange& WithMinValue(int value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline int GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline IntegerHyperParameterRange& WithMaxValue(int value) { SetMaxValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_minValue{0};
    bool m_minValueHasBeenSet = false;

    int m_maxValue{0};
    bool m_maxValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
