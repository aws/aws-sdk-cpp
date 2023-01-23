/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Specifies the maximum number of jobs that can run in parallel and the maximum
   * number of jobs that can run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobResourceLimit">AWS
   * API Reference</a></p>
   */
  class RecommendationJobResourceLimit
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobResourceLimit();
    AWS_SAGEMAKER_API RecommendationJobResourceLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobResourceLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the maximum number of load tests.</p>
     */
    inline int GetMaxNumberOfTests() const{ return m_maxNumberOfTests; }

    /**
     * <p>Defines the maximum number of load tests.</p>
     */
    inline bool MaxNumberOfTestsHasBeenSet() const { return m_maxNumberOfTestsHasBeenSet; }

    /**
     * <p>Defines the maximum number of load tests.</p>
     */
    inline void SetMaxNumberOfTests(int value) { m_maxNumberOfTestsHasBeenSet = true; m_maxNumberOfTests = value; }

    /**
     * <p>Defines the maximum number of load tests.</p>
     */
    inline RecommendationJobResourceLimit& WithMaxNumberOfTests(int value) { SetMaxNumberOfTests(value); return *this;}


    /**
     * <p>Defines the maximum number of parallel load tests.</p>
     */
    inline int GetMaxParallelOfTests() const{ return m_maxParallelOfTests; }

    /**
     * <p>Defines the maximum number of parallel load tests.</p>
     */
    inline bool MaxParallelOfTestsHasBeenSet() const { return m_maxParallelOfTestsHasBeenSet; }

    /**
     * <p>Defines the maximum number of parallel load tests.</p>
     */
    inline void SetMaxParallelOfTests(int value) { m_maxParallelOfTestsHasBeenSet = true; m_maxParallelOfTests = value; }

    /**
     * <p>Defines the maximum number of parallel load tests.</p>
     */
    inline RecommendationJobResourceLimit& WithMaxParallelOfTests(int value) { SetMaxParallelOfTests(value); return *this;}

  private:

    int m_maxNumberOfTests;
    bool m_maxNumberOfTestsHasBeenSet = false;

    int m_maxParallelOfTests;
    bool m_maxParallelOfTestsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
