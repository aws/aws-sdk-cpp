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
   * <p>Describes the resource configuration for hyperparameter optimization
   * (HPO).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HPOResourceConfig">AWS
   * API Reference</a></p>
   */
  class HPOResourceConfig
  {
  public:
    AWS_PERSONALIZE_API HPOResourceConfig() = default;
    AWS_PERSONALIZE_API HPOResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API HPOResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of training jobs when you create a solution version. The
     * maximum value for <code>maxNumberOfTrainingJobs</code> is <code>40</code>.</p>
     */
    inline const Aws::String& GetMaxNumberOfTrainingJobs() const { return m_maxNumberOfTrainingJobs; }
    inline bool MaxNumberOfTrainingJobsHasBeenSet() const { return m_maxNumberOfTrainingJobsHasBeenSet; }
    template<typename MaxNumberOfTrainingJobsT = Aws::String>
    void SetMaxNumberOfTrainingJobs(MaxNumberOfTrainingJobsT&& value) { m_maxNumberOfTrainingJobsHasBeenSet = true; m_maxNumberOfTrainingJobs = std::forward<MaxNumberOfTrainingJobsT>(value); }
    template<typename MaxNumberOfTrainingJobsT = Aws::String>
    HPOResourceConfig& WithMaxNumberOfTrainingJobs(MaxNumberOfTrainingJobsT&& value) { SetMaxNumberOfTrainingJobs(std::forward<MaxNumberOfTrainingJobsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of parallel training jobs when you create a solution
     * version. The maximum value for <code>maxParallelTrainingJobs</code> is
     * <code>10</code>.</p>
     */
    inline const Aws::String& GetMaxParallelTrainingJobs() const { return m_maxParallelTrainingJobs; }
    inline bool MaxParallelTrainingJobsHasBeenSet() const { return m_maxParallelTrainingJobsHasBeenSet; }
    template<typename MaxParallelTrainingJobsT = Aws::String>
    void SetMaxParallelTrainingJobs(MaxParallelTrainingJobsT&& value) { m_maxParallelTrainingJobsHasBeenSet = true; m_maxParallelTrainingJobs = std::forward<MaxParallelTrainingJobsT>(value); }
    template<typename MaxParallelTrainingJobsT = Aws::String>
    HPOResourceConfig& WithMaxParallelTrainingJobs(MaxParallelTrainingJobsT&& value) { SetMaxParallelTrainingJobs(std::forward<MaxParallelTrainingJobsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_maxNumberOfTrainingJobs;
    bool m_maxNumberOfTrainingJobsHasBeenSet = false;

    Aws::String m_maxParallelTrainingJobs;
    bool m_maxParallelTrainingJobsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
