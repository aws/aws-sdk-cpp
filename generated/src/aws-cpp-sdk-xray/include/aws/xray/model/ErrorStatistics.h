/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about requests that failed with a 4xx Client Error status
   * code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ErrorStatistics">AWS
   * API Reference</a></p>
   */
  class ErrorStatistics
  {
  public:
    AWS_XRAY_API ErrorStatistics() = default;
    AWS_XRAY_API ErrorStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ErrorStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of requests that failed with a 429 throttling status code.</p>
     */
    inline long long GetThrottleCount() const { return m_throttleCount; }
    inline bool ThrottleCountHasBeenSet() const { return m_throttleCountHasBeenSet; }
    inline void SetThrottleCount(long long value) { m_throttleCountHasBeenSet = true; m_throttleCount = value; }
    inline ErrorStatistics& WithThrottleCount(long long value) { SetThrottleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests that failed with untracked 4xx Client Error status
     * codes.</p>
     */
    inline long long GetOtherCount() const { return m_otherCount; }
    inline bool OtherCountHasBeenSet() const { return m_otherCountHasBeenSet; }
    inline void SetOtherCount(long long value) { m_otherCountHasBeenSet = true; m_otherCount = value; }
    inline ErrorStatistics& WithOtherCount(long long value) { SetOtherCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline long long GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline ErrorStatistics& WithTotalCount(long long value) { SetTotalCount(value); return *this;}
    ///@}
  private:

    long long m_throttleCount{0};
    bool m_throttleCountHasBeenSet = false;

    long long m_otherCount{0};
    bool m_otherCountHasBeenSet = false;

    long long m_totalCount{0};
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
