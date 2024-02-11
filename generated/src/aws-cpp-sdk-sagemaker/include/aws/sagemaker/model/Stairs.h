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
   * <p>Defines the stairs traffic pattern for an Inference Recommender load test.
   * This pattern type consists of multiple steps where the number of users increases
   * at each step.</p> <p>Specify either the stairs or phases traffic
   * pattern.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Stairs">AWS
   * API Reference</a></p>
   */
  class Stairs
  {
  public:
    AWS_SAGEMAKER_API Stairs();
    AWS_SAGEMAKER_API Stairs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Stairs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines how long each traffic step should be.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>Defines how long each traffic step should be.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>Defines how long each traffic step should be.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>Defines how long each traffic step should be.</p>
     */
    inline Stairs& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>Specifies how many steps to perform during traffic.</p>
     */
    inline int GetNumberOfSteps() const{ return m_numberOfSteps; }

    /**
     * <p>Specifies how many steps to perform during traffic.</p>
     */
    inline bool NumberOfStepsHasBeenSet() const { return m_numberOfStepsHasBeenSet; }

    /**
     * <p>Specifies how many steps to perform during traffic.</p>
     */
    inline void SetNumberOfSteps(int value) { m_numberOfStepsHasBeenSet = true; m_numberOfSteps = value; }

    /**
     * <p>Specifies how many steps to perform during traffic.</p>
     */
    inline Stairs& WithNumberOfSteps(int value) { SetNumberOfSteps(value); return *this;}


    /**
     * <p>Specifies how many new users to spawn in each step.</p>
     */
    inline int GetUsersPerStep() const{ return m_usersPerStep; }

    /**
     * <p>Specifies how many new users to spawn in each step.</p>
     */
    inline bool UsersPerStepHasBeenSet() const { return m_usersPerStepHasBeenSet; }

    /**
     * <p>Specifies how many new users to spawn in each step.</p>
     */
    inline void SetUsersPerStep(int value) { m_usersPerStepHasBeenSet = true; m_usersPerStep = value; }

    /**
     * <p>Specifies how many new users to spawn in each step.</p>
     */
    inline Stairs& WithUsersPerStep(int value) { SetUsersPerStep(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    int m_numberOfSteps;
    bool m_numberOfStepsHasBeenSet = false;

    int m_usersPerStep;
    bool m_usersPerStepHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
