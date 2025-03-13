/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/IntegerHyperParameterRange.h>
#include <aws/personalize/model/ContinuousHyperParameterRange.h>
#include <aws/personalize/model/CategoricalHyperParameterRange.h>
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
   * <p>Specifies the hyperparameters and their ranges. Hyperparameters can be
   * categorical, continuous, or integer-valued.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HyperParameterRanges">AWS
   * API Reference</a></p>
   */
  class HyperParameterRanges
  {
  public:
    AWS_PERSONALIZE_API HyperParameterRanges() = default;
    AWS_PERSONALIZE_API HyperParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API HyperParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<IntegerHyperParameterRange>& GetIntegerHyperParameterRanges() const { return m_integerHyperParameterRanges; }
    inline bool IntegerHyperParameterRangesHasBeenSet() const { return m_integerHyperParameterRangesHasBeenSet; }
    template<typename IntegerHyperParameterRangesT = Aws::Vector<IntegerHyperParameterRange>>
    void SetIntegerHyperParameterRanges(IntegerHyperParameterRangesT&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = std::forward<IntegerHyperParameterRangesT>(value); }
    template<typename IntegerHyperParameterRangesT = Aws::Vector<IntegerHyperParameterRange>>
    HyperParameterRanges& WithIntegerHyperParameterRanges(IntegerHyperParameterRangesT&& value) { SetIntegerHyperParameterRanges(std::forward<IntegerHyperParameterRangesT>(value)); return *this;}
    template<typename IntegerHyperParameterRangesT = IntegerHyperParameterRange>
    HyperParameterRanges& AddIntegerHyperParameterRanges(IntegerHyperParameterRangesT&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.emplace_back(std::forward<IntegerHyperParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<ContinuousHyperParameterRange>& GetContinuousHyperParameterRanges() const { return m_continuousHyperParameterRanges; }
    inline bool ContinuousHyperParameterRangesHasBeenSet() const { return m_continuousHyperParameterRangesHasBeenSet; }
    template<typename ContinuousHyperParameterRangesT = Aws::Vector<ContinuousHyperParameterRange>>
    void SetContinuousHyperParameterRanges(ContinuousHyperParameterRangesT&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = std::forward<ContinuousHyperParameterRangesT>(value); }
    template<typename ContinuousHyperParameterRangesT = Aws::Vector<ContinuousHyperParameterRange>>
    HyperParameterRanges& WithContinuousHyperParameterRanges(ContinuousHyperParameterRangesT&& value) { SetContinuousHyperParameterRanges(std::forward<ContinuousHyperParameterRangesT>(value)); return *this;}
    template<typename ContinuousHyperParameterRangesT = ContinuousHyperParameterRange>
    HyperParameterRanges& AddContinuousHyperParameterRanges(ContinuousHyperParameterRangesT&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.emplace_back(std::forward<ContinuousHyperParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<CategoricalHyperParameterRange>& GetCategoricalHyperParameterRanges() const { return m_categoricalHyperParameterRanges; }
    inline bool CategoricalHyperParameterRangesHasBeenSet() const { return m_categoricalHyperParameterRangesHasBeenSet; }
    template<typename CategoricalHyperParameterRangesT = Aws::Vector<CategoricalHyperParameterRange>>
    void SetCategoricalHyperParameterRanges(CategoricalHyperParameterRangesT&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = std::forward<CategoricalHyperParameterRangesT>(value); }
    template<typename CategoricalHyperParameterRangesT = Aws::Vector<CategoricalHyperParameterRange>>
    HyperParameterRanges& WithCategoricalHyperParameterRanges(CategoricalHyperParameterRangesT&& value) { SetCategoricalHyperParameterRanges(std::forward<CategoricalHyperParameterRangesT>(value)); return *this;}
    template<typename CategoricalHyperParameterRangesT = CategoricalHyperParameterRange>
    HyperParameterRanges& AddCategoricalHyperParameterRanges(CategoricalHyperParameterRangesT&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.emplace_back(std::forward<CategoricalHyperParameterRangesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IntegerHyperParameterRange> m_integerHyperParameterRanges;
    bool m_integerHyperParameterRangesHasBeenSet = false;

    Aws::Vector<ContinuousHyperParameterRange> m_continuousHyperParameterRanges;
    bool m_continuousHyperParameterRangesHasBeenSet = false;

    Aws::Vector<CategoricalHyperParameterRange> m_categoricalHyperParameterRanges;
    bool m_categoricalHyperParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
