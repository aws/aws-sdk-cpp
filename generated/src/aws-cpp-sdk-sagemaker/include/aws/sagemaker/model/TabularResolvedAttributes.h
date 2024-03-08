/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProblemType.h>
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
   * <p>The resolved attributes specific to the tabular problem type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TabularResolvedAttributes">AWS
   * API Reference</a></p>
   */
  class TabularResolvedAttributes
  {
  public:
    AWS_SAGEMAKER_API TabularResolvedAttributes();
    AWS_SAGEMAKER_API TabularResolvedAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TabularResolvedAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of supervised learning problem available for the model candidates of
     * the AutoML job V2 (Binary Classification, Multiclass Classification,
     * Regression). For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>
     */
    inline const ProblemType& GetProblemType() const{ return m_problemType; }

    /**
     * <p>The type of supervised learning problem available for the model candidates of
     * the AutoML job V2 (Binary Classification, Multiclass Classification,
     * Regression). For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>
     */
    inline bool ProblemTypeHasBeenSet() const { return m_problemTypeHasBeenSet; }

    /**
     * <p>The type of supervised learning problem available for the model candidates of
     * the AutoML job V2 (Binary Classification, Multiclass Classification,
     * Regression). For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>
     */
    inline void SetProblemType(const ProblemType& value) { m_problemTypeHasBeenSet = true; m_problemType = value; }

    /**
     * <p>The type of supervised learning problem available for the model candidates of
     * the AutoML job V2 (Binary Classification, Multiclass Classification,
     * Regression). For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>
     */
    inline void SetProblemType(ProblemType&& value) { m_problemTypeHasBeenSet = true; m_problemType = std::move(value); }

    /**
     * <p>The type of supervised learning problem available for the model candidates of
     * the AutoML job V2 (Binary Classification, Multiclass Classification,
     * Regression). For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>
     */
    inline TabularResolvedAttributes& WithProblemType(const ProblemType& value) { SetProblemType(value); return *this;}

    /**
     * <p>The type of supervised learning problem available for the model candidates of
     * the AutoML job V2 (Binary Classification, Multiclass Classification,
     * Regression). For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>
     */
    inline TabularResolvedAttributes& WithProblemType(ProblemType&& value) { SetProblemType(std::move(value)); return *this;}

  private:

    ProblemType m_problemType;
    bool m_problemTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
