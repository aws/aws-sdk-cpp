/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryRun.h>
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
   * <p>This structure contains information about the most recent run of a single
   * canary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryLastRun">AWS
   * API Reference</a></p>
   */
  class CanaryLastRun
  {
  public:
    AWS_SYNTHETICS_API CanaryLastRun();
    AWS_SYNTHETICS_API CanaryLastRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryLastRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the canary.</p>
     */
    inline const Aws::String& GetCanaryName() const{ return m_canaryName; }
    inline bool CanaryNameHasBeenSet() const { return m_canaryNameHasBeenSet; }
    inline void SetCanaryName(const Aws::String& value) { m_canaryNameHasBeenSet = true; m_canaryName = value; }
    inline void SetCanaryName(Aws::String&& value) { m_canaryNameHasBeenSet = true; m_canaryName = std::move(value); }
    inline void SetCanaryName(const char* value) { m_canaryNameHasBeenSet = true; m_canaryName.assign(value); }
    inline CanaryLastRun& WithCanaryName(const Aws::String& value) { SetCanaryName(value); return *this;}
    inline CanaryLastRun& WithCanaryName(Aws::String&& value) { SetCanaryName(std::move(value)); return *this;}
    inline CanaryLastRun& WithCanaryName(const char* value) { SetCanaryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results from this canary's most recent run.</p>
     */
    inline const CanaryRun& GetLastRun() const{ return m_lastRun; }
    inline bool LastRunHasBeenSet() const { return m_lastRunHasBeenSet; }
    inline void SetLastRun(const CanaryRun& value) { m_lastRunHasBeenSet = true; m_lastRun = value; }
    inline void SetLastRun(CanaryRun&& value) { m_lastRunHasBeenSet = true; m_lastRun = std::move(value); }
    inline CanaryLastRun& WithLastRun(const CanaryRun& value) { SetLastRun(value); return *this;}
    inline CanaryLastRun& WithLastRun(CanaryRun&& value) { SetLastRun(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_canaryName;
    bool m_canaryNameHasBeenSet = false;

    CanaryRun m_lastRun;
    bool m_lastRunHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
