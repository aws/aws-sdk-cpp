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
    AWS_PERSONALIZE_API HyperParameterRanges();
    AWS_PERSONALIZE_API HyperParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API HyperParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<IntegerHyperParameterRange>& GetIntegerHyperParameterRanges() const{ return m_integerHyperParameterRanges; }
    inline bool IntegerHyperParameterRangesHasBeenSet() const { return m_integerHyperParameterRangesHasBeenSet; }
    inline void SetIntegerHyperParameterRanges(const Aws::Vector<IntegerHyperParameterRange>& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = value; }
    inline void SetIntegerHyperParameterRanges(Aws::Vector<IntegerHyperParameterRange>&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = std::move(value); }
    inline HyperParameterRanges& WithIntegerHyperParameterRanges(const Aws::Vector<IntegerHyperParameterRange>& value) { SetIntegerHyperParameterRanges(value); return *this;}
    inline HyperParameterRanges& WithIntegerHyperParameterRanges(Aws::Vector<IntegerHyperParameterRange>&& value) { SetIntegerHyperParameterRanges(std::move(value)); return *this;}
    inline HyperParameterRanges& AddIntegerHyperParameterRanges(const IntegerHyperParameterRange& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(value); return *this; }
    inline HyperParameterRanges& AddIntegerHyperParameterRanges(IntegerHyperParameterRange&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<ContinuousHyperParameterRange>& GetContinuousHyperParameterRanges() const{ return m_continuousHyperParameterRanges; }
    inline bool ContinuousHyperParameterRangesHasBeenSet() const { return m_continuousHyperParameterRangesHasBeenSet; }
    inline void SetContinuousHyperParameterRanges(const Aws::Vector<ContinuousHyperParameterRange>& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = value; }
    inline void SetContinuousHyperParameterRanges(Aws::Vector<ContinuousHyperParameterRange>&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = std::move(value); }
    inline HyperParameterRanges& WithContinuousHyperParameterRanges(const Aws::Vector<ContinuousHyperParameterRange>& value) { SetContinuousHyperParameterRanges(value); return *this;}
    inline HyperParameterRanges& WithContinuousHyperParameterRanges(Aws::Vector<ContinuousHyperParameterRange>&& value) { SetContinuousHyperParameterRanges(std::move(value)); return *this;}
    inline HyperParameterRanges& AddContinuousHyperParameterRanges(const ContinuousHyperParameterRange& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(value); return *this; }
    inline HyperParameterRanges& AddContinuousHyperParameterRanges(ContinuousHyperParameterRange&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<CategoricalHyperParameterRange>& GetCategoricalHyperParameterRanges() const{ return m_categoricalHyperParameterRanges; }
    inline bool CategoricalHyperParameterRangesHasBeenSet() const { return m_categoricalHyperParameterRangesHasBeenSet; }
    inline void SetCategoricalHyperParameterRanges(const Aws::Vector<CategoricalHyperParameterRange>& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = value; }
    inline void SetCategoricalHyperParameterRanges(Aws::Vector<CategoricalHyperParameterRange>&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = std::move(value); }
    inline HyperParameterRanges& WithCategoricalHyperParameterRanges(const Aws::Vector<CategoricalHyperParameterRange>& value) { SetCategoricalHyperParameterRanges(value); return *this;}
    inline HyperParameterRanges& WithCategoricalHyperParameterRanges(Aws::Vector<CategoricalHyperParameterRange>&& value) { SetCategoricalHyperParameterRanges(std::move(value)); return *this;}
    inline HyperParameterRanges& AddCategoricalHyperParameterRanges(const CategoricalHyperParameterRange& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(value); return *this; }
    inline HyperParameterRanges& AddCategoricalHyperParameterRanges(CategoricalHyperParameterRange&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(std::move(value)); return *this; }
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
