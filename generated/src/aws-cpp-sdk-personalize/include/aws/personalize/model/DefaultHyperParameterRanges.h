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
    AWS_PERSONALIZE_API DefaultHyperParameterRanges();
    AWS_PERSONALIZE_API DefaultHyperParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DefaultHyperParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultIntegerHyperParameterRange>& GetIntegerHyperParameterRanges() const{ return m_integerHyperParameterRanges; }
    inline bool IntegerHyperParameterRangesHasBeenSet() const { return m_integerHyperParameterRangesHasBeenSet; }
    inline void SetIntegerHyperParameterRanges(const Aws::Vector<DefaultIntegerHyperParameterRange>& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = value; }
    inline void SetIntegerHyperParameterRanges(Aws::Vector<DefaultIntegerHyperParameterRange>&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = std::move(value); }
    inline DefaultHyperParameterRanges& WithIntegerHyperParameterRanges(const Aws::Vector<DefaultIntegerHyperParameterRange>& value) { SetIntegerHyperParameterRanges(value); return *this;}
    inline DefaultHyperParameterRanges& WithIntegerHyperParameterRanges(Aws::Vector<DefaultIntegerHyperParameterRange>&& value) { SetIntegerHyperParameterRanges(std::move(value)); return *this;}
    inline DefaultHyperParameterRanges& AddIntegerHyperParameterRanges(const DefaultIntegerHyperParameterRange& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(value); return *this; }
    inline DefaultHyperParameterRanges& AddIntegerHyperParameterRanges(DefaultIntegerHyperParameterRange&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultContinuousHyperParameterRange>& GetContinuousHyperParameterRanges() const{ return m_continuousHyperParameterRanges; }
    inline bool ContinuousHyperParameterRangesHasBeenSet() const { return m_continuousHyperParameterRangesHasBeenSet; }
    inline void SetContinuousHyperParameterRanges(const Aws::Vector<DefaultContinuousHyperParameterRange>& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = value; }
    inline void SetContinuousHyperParameterRanges(Aws::Vector<DefaultContinuousHyperParameterRange>&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = std::move(value); }
    inline DefaultHyperParameterRanges& WithContinuousHyperParameterRanges(const Aws::Vector<DefaultContinuousHyperParameterRange>& value) { SetContinuousHyperParameterRanges(value); return *this;}
    inline DefaultHyperParameterRanges& WithContinuousHyperParameterRanges(Aws::Vector<DefaultContinuousHyperParameterRange>&& value) { SetContinuousHyperParameterRanges(std::move(value)); return *this;}
    inline DefaultHyperParameterRanges& AddContinuousHyperParameterRanges(const DefaultContinuousHyperParameterRange& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(value); return *this; }
    inline DefaultHyperParameterRanges& AddContinuousHyperParameterRanges(DefaultContinuousHyperParameterRange&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultCategoricalHyperParameterRange>& GetCategoricalHyperParameterRanges() const{ return m_categoricalHyperParameterRanges; }
    inline bool CategoricalHyperParameterRangesHasBeenSet() const { return m_categoricalHyperParameterRangesHasBeenSet; }
    inline void SetCategoricalHyperParameterRanges(const Aws::Vector<DefaultCategoricalHyperParameterRange>& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = value; }
    inline void SetCategoricalHyperParameterRanges(Aws::Vector<DefaultCategoricalHyperParameterRange>&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = std::move(value); }
    inline DefaultHyperParameterRanges& WithCategoricalHyperParameterRanges(const Aws::Vector<DefaultCategoricalHyperParameterRange>& value) { SetCategoricalHyperParameterRanges(value); return *this;}
    inline DefaultHyperParameterRanges& WithCategoricalHyperParameterRanges(Aws::Vector<DefaultCategoricalHyperParameterRange>&& value) { SetCategoricalHyperParameterRanges(std::move(value)); return *this;}
    inline DefaultHyperParameterRanges& AddCategoricalHyperParameterRanges(const DefaultCategoricalHyperParameterRange& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(value); return *this; }
    inline DefaultHyperParameterRanges& AddCategoricalHyperParameterRanges(DefaultCategoricalHyperParameterRange&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(std::move(value)); return *this; }
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
