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
   * <p>Information about requests that failed with a 5xx Server Error status
   * code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/FaultStatistics">AWS
   * API Reference</a></p>
   */
  class FaultStatistics
  {
  public:
    AWS_XRAY_API FaultStatistics();
    AWS_XRAY_API FaultStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API FaultStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of requests that failed with untracked 5xx Server Error status
     * codes.</p>
     */
    inline long long GetOtherCount() const{ return m_otherCount; }

    /**
     * <p>The number of requests that failed with untracked 5xx Server Error status
     * codes.</p>
     */
    inline bool OtherCountHasBeenSet() const { return m_otherCountHasBeenSet; }

    /**
     * <p>The number of requests that failed with untracked 5xx Server Error status
     * codes.</p>
     */
    inline void SetOtherCount(long long value) { m_otherCountHasBeenSet = true; m_otherCount = value; }

    /**
     * <p>The number of requests that failed with untracked 5xx Server Error status
     * codes.</p>
     */
    inline FaultStatistics& WithOtherCount(long long value) { SetOtherCount(value); return *this;}


    /**
     * <p>The total number of requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline FaultStatistics& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    long long m_otherCount;
    bool m_otherCountHasBeenSet = false;

    long long m_totalCount;
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
