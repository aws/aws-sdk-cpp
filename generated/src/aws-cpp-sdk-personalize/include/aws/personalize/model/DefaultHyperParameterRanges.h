/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/DefaultIntegerHyperParameterRange.h>
#include <aws/personalize/model/DefaultContinuousHyperParameterRange.h>
#include <aws/personalize/model/DefaultCategoricalHyperParameterRange.h>
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
   * <p>Specifies the hyperparameters and their default ranges. Hyperparameters can
   * be categorical, continuous, or integer-valued.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DefaultHyperParameterRanges">AWS
   * API Reference</a></p>
   */
  class DefaultHyperParameterRanges
  {
  public:
    AWS_PERSONALIZE_API DefaultHyperParameterRanges() = default;
    AWS_PERSONALIZE_API DefaultHyperParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DefaultHyperParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultIntegerHyperParameterRange>& GetIntegerHyperParameterRanges() const { return m_integerHyperParameterRanges; }
    inline bool IntegerHyperParameterRangesHasBeenSet() const { return m_integerHyperParameterRangesHasBeenSet; }
    template<typename IntegerHyperParameterRangesT = Aws::Vector<DefaultIntegerHyperParameterRange>>
    void SetIntegerHyperParameterRanges(IntegerHyperParameterRangesT&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = std::forward<IntegerHyperParameterRangesT>(value); }
    template<typename IntegerHyperParameterRangesT = Aws::Vector<DefaultIntegerHyperParameterRange>>
    DefaultHyperParameterRanges& WithIntegerHyperParameterRanges(IntegerHyperParameterRangesT&& value) { SetIntegerHyperParameterRanges(std::forward<IntegerHyperParameterRangesT>(value)); return *this;}
    template<typename IntegerHyperParameterRangesT = DefaultIntegerHyperParameterRange>
    DefaultHyperParameterRanges& AddIntegerHyperParameterRanges(IntegerHyperParameterRangesT&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.emplace_back(std::forward<IntegerHyperParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultContinuousHyperParameterRange>& GetContinuousHyperParameterRanges() const { return m_continuousHyperParameterRanges; }
    inline bool ContinuousHyperParameterRangesHasBeenSet() const { return m_continuousHyperParameterRangesHasBeenSet; }
    template<typename ContinuousHyperParameterRangesT = Aws::Vector<DefaultContinuousHyperParameterRange>>
    void SetContinuousHyperParameterRanges(ContinuousHyperParameterRangesT&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = std::forward<ContinuousHyperParameterRangesT>(value); }
    template<typename ContinuousHyperParameterRangesT = Aws::Vector<DefaultContinuousHyperParameterRange>>
    DefaultHyperParameterRanges& WithContinuousHyperParameterRanges(ContinuousHyperParameterRangesT&& value) { SetContinuousHyperParameterRanges(std::forward<ContinuousHyperParameterRangesT>(value)); return *this;}
    template<typename ContinuousHyperParameterRangesT = DefaultContinuousHyperParameterRange>
    DefaultHyperParameterRanges& AddContinuousHyperParameterRanges(ContinuousHyperParameterRangesT&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.emplace_back(std::forward<ContinuousHyperParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultCategoricalHyperParameterRange>& GetCategoricalHyperParameterRanges() const { return m_categoricalHyperParameterRanges; }
    inline bool CategoricalHyperParameterRangesHasBeenSet() const { return m_categoricalHyperParameterRangesHasBeenSet; }
    template<typename CategoricalHyperParameterRangesT = Aws::Vector<DefaultCategoricalHyperParameterRange>>
    void SetCategoricalHyperParameterRanges(CategoricalHyperParameterRangesT&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = std::forward<CategoricalHyperParameterRangesT>(value); }
    template<typename CategoricalHyperParameterRangesT = Aws::Vector<DefaultCategoricalHyperParameterRange>>
    DefaultHyperParameterRanges& WithCategoricalHyperParameterRanges(CategoricalHyperParameterRangesT&& value) { SetCategoricalHyperParameterRanges(std::forward<CategoricalHyperParameterRangesT>(value)); return *this;}
    template<typename CategoricalHyperParameterRangesT = DefaultCategoricalHyperParameterRange>
    DefaultHyperParameterRanges& AddCategoricalHyperParameterRanges(CategoricalHyperParameterRangesT&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.emplace_back(std::forward<CategoricalHyperParameterRangesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DefaultIntegerHyperParameterRange> m_integerHyperParameterRanges;
    bool m_integerHyperParameterRangesHasBeenSet = false;

    Aws::Vector<DefaultContinuousHyperParameterRange> m_continuousHyperParameterRanges;
    bool m_continuousHyperParameterRangesHasBeenSet = false;

    Aws::Vector<DefaultCategoricalHyperParameterRange> m_categoricalHyperParameterRanges;
    bool m_categoricalHyperParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
