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
    AWS_SYNTHETICS_API CanaryRunConfigOutput();
    AWS_SYNTHETICS_API CanaryRunConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long the canary is allowed to run before it must stop.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>How long the canary is allowed to run before it must stop.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>How long the canary is allowed to run before it must stop.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>How long the canary is allowed to run before it must stop.</p>
     */
    inline CanaryRunConfigOutput& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline int GetMemoryInMB() const{ return m_memoryInMB; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline bool MemoryInMBHasBeenSet() const { return m_memoryInMBHasBeenSet; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline void SetMemoryInMB(int value) { m_memoryInMBHasBeenSet = true; m_memoryInMB = value; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline CanaryRunConfigOutput& WithMemoryInMB(int value) { SetMemoryInMB(value); return *this;}


    /**
     * <p>Displays whether this canary run used active X-Ray tracing. </p>
     */
    inline bool GetActiveTracing() const{ return m_activeTracing; }

    /**
     * <p>Displays whether this canary run used active X-Ray tracing. </p>
     */
    inline bool ActiveTracingHasBeenSet() const { return m_activeTracingHasBeenSet; }

    /**
     * <p>Displays whether this canary run used active X-Ray tracing. </p>
     */
    inline void SetActiveTracing(bool value) { m_activeTracingHasBeenSet = true; m_activeTracing = value; }

    /**
     * <p>Displays whether this canary run used active X-Ray tracing. </p>
     */
    inline CanaryRunConfigOutput& WithActiveTracing(bool value) { SetActiveTracing(value); return *this;}

  private:

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    int m_memoryInMB;
    bool m_memoryInMBHasBeenSet = false;

    bool m_activeTracing;
    bool m_activeTracingHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
