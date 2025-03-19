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
   * <p>Defines the traffic pattern.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Phase">AWS API
   * Reference</a></p>
   */
  class Phase
  {
  public:
    AWS_SAGEMAKER_API Phase() = default;
    AWS_SAGEMAKER_API Phase(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Phase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how many concurrent users to start with. The value should be
     * between 1 and 3.</p>
     */
    inline int GetInitialNumberOfUsers() const { return m_initialNumberOfUsers; }
    inline bool InitialNumberOfUsersHasBeenSet() const { return m_initialNumberOfUsersHasBeenSet; }
    inline void SetInitialNumberOfUsers(int value) { m_initialNumberOfUsersHasBeenSet = true; m_initialNumberOfUsers = value; }
    inline Phase& WithInitialNumberOfUsers(int value) { SetInitialNumberOfUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specified how many new users to spawn in a minute.</p>
     */
    inline int GetSpawnRate() const { return m_spawnRate; }
    inline bool SpawnRateHasBeenSet() const { return m_spawnRateHasBeenSet; }
    inline void SetSpawnRate(int value) { m_spawnRateHasBeenSet = true; m_spawnRate = value; }
    inline Phase& WithSpawnRate(int value) { SetSpawnRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long a traffic phase should be. For custom load tests, the
     * value should be between 120 and 3600. This value should not exceed
     * <code>JobDurationInSeconds</code>.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline Phase& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}
  private:

    int m_initialNumberOfUsers{0};
    bool m_initialNumberOfUsersHasBeenSet = false;

    int m_spawnRate{0};
    bool m_spawnRateHasBeenSet = false;

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
