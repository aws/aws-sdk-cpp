/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Configuration information for updating the Amazon SageMaker Debugger profile
   * parameters, system and framework metrics configurations, and storage
   * paths.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProfilerConfigForUpdate">AWS
   * API Reference</a></p>
   */
  class ProfilerConfigForUpdate
  {
  public:
    AWS_SAGEMAKER_API ProfilerConfigForUpdate() = default;
    AWS_SAGEMAKER_API ProfilerConfigForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProfilerConfigForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to Amazon S3 storage location for system and framework metrics.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    ProfilerConfigForUpdate& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time interval for capturing system metrics in milliseconds. Available
     * values are 100, 200, 500, 1000 (1 second), 5000 (5 seconds), and 60000 (1
     * minute) milliseconds. The default value is 500 milliseconds.</p>
     */
    inline long long GetProfilingIntervalInMilliseconds() const { return m_profilingIntervalInMilliseconds; }
    inline bool ProfilingIntervalInMillisecondsHasBeenSet() const { return m_profilingIntervalInMillisecondsHasBeenSet; }
    inline void SetProfilingIntervalInMilliseconds(long long value) { m_profilingIntervalInMillisecondsHasBeenSet = true; m_profilingIntervalInMilliseconds = value; }
    inline ProfilerConfigForUpdate& WithProfilingIntervalInMilliseconds(long long value) { SetProfilingIntervalInMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for capturing framework metrics. Available key
     * strings for different profiling options are
     * <code>DetailedProfilingConfig</code>, <code>PythonProfilingConfig</code>, and
     * <code>DataLoaderProfilingConfig</code>. The following codes are configuration
     * structures for the <code>ProfilingParameters</code> parameter. To learn more
     * about how to configure the <code>ProfilingParameters</code> parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProfilingParameters() const { return m_profilingParameters; }
    inline bool ProfilingParametersHasBeenSet() const { return m_profilingParametersHasBeenSet; }
    template<typename ProfilingParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetProfilingParameters(ProfilingParametersT&& value) { m_profilingParametersHasBeenSet = true; m_profilingParameters = std::forward<ProfilingParametersT>(value); }
    template<typename ProfilingParametersT = Aws::Map<Aws::String, Aws::String>>
    ProfilerConfigForUpdate& WithProfilingParameters(ProfilingParametersT&& value) { SetProfilingParameters(std::forward<ProfilingParametersT>(value)); return *this;}
    template<typename ProfilingParametersKeyT = Aws::String, typename ProfilingParametersValueT = Aws::String>
    ProfilerConfigForUpdate& AddProfilingParameters(ProfilingParametersKeyT&& key, ProfilingParametersValueT&& value) {
      m_profilingParametersHasBeenSet = true; m_profilingParameters.emplace(std::forward<ProfilingParametersKeyT>(key), std::forward<ProfilingParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>To turn off Amazon SageMaker Debugger monitoring and profiling while a
     * training job is in progress, set to <code>True</code>.</p>
     */
    inline bool GetDisableProfiler() const { return m_disableProfiler; }
    inline bool DisableProfilerHasBeenSet() const { return m_disableProfilerHasBeenSet; }
    inline void SetDisableProfiler(bool value) { m_disableProfilerHasBeenSet = true; m_disableProfiler = value; }
    inline ProfilerConfigForUpdate& WithDisableProfiler(bool value) { SetDisableProfiler(value); return *this;}
    ///@}
  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    long long m_profilingIntervalInMilliseconds{0};
    bool m_profilingIntervalInMillisecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_profilingParameters;
    bool m_profilingParametersHasBeenSet = false;

    bool m_disableProfiler{false};
    bool m_disableProfilerHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
