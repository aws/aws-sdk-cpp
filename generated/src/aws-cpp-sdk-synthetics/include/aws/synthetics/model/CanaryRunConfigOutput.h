/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>

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
   * <p>A structure that contains information about a canary run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunConfigOutput">AWS
   * API Reference</a></p>
   */
  class CanaryRunConfigOutput
  {
  public:
    AWS_SYNTHETICS_API CanaryRunConfigOutput() = default;
    AWS_SYNTHETICS_API CanaryRunConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How long the canary is allowed to run before it must stop.</p>
     */
    inline int GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline CanaryRunConfigOutput& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline int GetMemoryInMB() const { return m_memoryInMB; }
    inline bool MemoryInMBHasBeenSet() const { return m_memoryInMBHasBeenSet; }
    inline void SetMemoryInMB(int value) { m_memoryInMBHasBeenSet = true; m_memoryInMB = value; }
    inline CanaryRunConfigOutput& WithMemoryInMB(int value) { SetMemoryInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether this canary run used active X-Ray tracing. </p>
     */
    inline bool GetActiveTracing() const { return m_activeTracing; }
    inline bool ActiveTracingHasBeenSet() const { return m_activeTracingHasBeenSet; }
    inline void SetActiveTracing(bool value) { m_activeTracingHasBeenSet = true; m_activeTracing = value; }
    inline CanaryRunConfigOutput& WithActiveTracing(bool value) { SetActiveTracing(value); return *this;}
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
    inline CanaryRunConfigOutput& WithEphemeralStorage(int value) { SetEphemeralStorage(value); return *this;}
    ///@}
  private:

    int m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;

    int m_memoryInMB{0};
    bool m_memoryInMBHasBeenSet = false;

    bool m_activeTracing{false};
    bool m_activeTracingHasBeenSet = false;

    int m_ephemeralStorage{0};
    bool m_ephemeralStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
