/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains input information for a canary run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunConfigInput">AWS
   * API Reference</a></p>
   */
  class CanaryRunConfigInput
  {
  public:
    AWS_SYNTHETICS_API CanaryRunConfigInput() = default;
    AWS_SYNTHETICS_API CanaryRunConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline int GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline CanaryRunConfigInput& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline int GetMemoryInMB() const { return m_memoryInMB; }
    inline bool MemoryInMBHasBeenSet() const { return m_memoryInMBHasBeenSet; }
    inline void SetMemoryInMB(int value) { m_memoryInMBHasBeenSet = true; m_memoryInMB = value; }
    inline CanaryRunConfigInput& WithMemoryInMB(int value) { SetMemoryInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this canary is to use active X-Ray tracing when it runs.
     * Active tracing enables this canary run to be displayed in the ServiceLens and
     * X-Ray service maps even if the canary does not hit an endpoint that has X-Ray
     * tracing enabled. Using X-Ray tracing incurs charges. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline bool GetActiveTracing() const { return m_activeTracing; }
    inline bool ActiveTracingHasBeenSet() const { return m_activeTracingHasBeenSet; }
    inline void SetActiveTracing(bool value) { m_activeTracingHasBeenSet = true; m_activeTracing = value; }
    inline CanaryRunConfigInput& WithActiveTracing(bool value) { SetActiveTracing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the keys and values to use for any environment variables used in
     * the canary script. Use the following format:</p> <p>{ "key1" : "value1", "key2"
     * : "value2", ...}</p> <p>Keys must start with a letter and be at least two
     * characters. The total size of your environment variables cannot exceed 4 KB. You
     * can't specify any Lambda reserved environment variables as the keys for your
     * environment variables. For more information about reserved keys, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-runtime">
     * Runtime environment variables</a>.</p>  <p>Environment variable keys
     * and values are encrypted at rest using Amazon Web Services owned KMS keys.
     * However, the environment variables are not encrypted on the client side. Do not
     * store sensitive information in them.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    CanaryRunConfigInput& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    CanaryRunConfigInput& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of ephemeral storage (in MB) to allocate for the canary
     * run during execution. This temporary storage is used for storing canary run
     * artifacts (which are uploaded to an Amazon S3 bucket at the end of the run), and
     * any canary browser operations. This temporary storage is cleared after the run
     * is completed. Default storage value is 1024 MB.</p>
     */
    inline int GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    inline void SetEphemeralStorage(int value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }
    inline CanaryRunConfigInput& WithEphemeralStorage(int value) { SetEphemeralStorage(value); return *this;}
    ///@}
  private:

    int m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;

    int m_memoryInMB{0};
    bool m_memoryInMBHasBeenSet = false;

    bool m_activeTracing{false};
    bool m_activeTracingHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    int m_ephemeralStorage{0};
    bool m_ephemeralStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
