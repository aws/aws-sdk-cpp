/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CategoricalParameter.h>
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
   * <p>Specifies the range of environment parameters</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EnvironmentParameterRanges">AWS
   * API Reference</a></p>
   */
  class EnvironmentParameterRanges
  {
  public:
    AWS_SAGEMAKER_API EnvironmentParameterRanges();
    AWS_SAGEMAKER_API EnvironmentParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EnvironmentParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline const Aws::Vector<CategoricalParameter>& GetCategoricalParameterRanges() const{ return m_categoricalParameterRanges; }

    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline bool CategoricalParameterRangesHasBeenSet() const { return m_categoricalParameterRangesHasBeenSet; }

    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline void SetCategoricalParameterRanges(const Aws::Vector<CategoricalParameter>& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = value; }

    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline void SetCategoricalParameterRanges(Aws::Vector<CategoricalParameter>&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = std::move(value); }

    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline EnvironmentParameterRanges& WithCategoricalParameterRanges(const Aws::Vector<CategoricalParameter>& value) { SetCategoricalParameterRanges(value); return *this;}

    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline EnvironmentParameterRanges& WithCategoricalParameterRanges(Aws::Vector<CategoricalParameter>&& value) { SetCategoricalParameterRanges(std::move(value)); return *this;}

    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline EnvironmentParameterRanges& AddCategoricalParameterRanges(const CategoricalParameter& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.push_back(value); return *this; }

    /**
     * <p>Specified a list of parameters for each category.</p>
     */
    inline EnvironmentParameterRanges& AddCategoricalParameterRanges(CategoricalParameter&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CategoricalParameter> m_categoricalParameterRanges;
    bool m_categoricalParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
