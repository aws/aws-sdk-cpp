/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>

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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that defines the time range that you want to retrieve results
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/TimeRange">AWS API
   * Reference</a></p>
   */
  class TimeRange
  {
  public:
    AWS_CLOUDWATCHRUM_API TimeRange() = default;
    AWS_CLOUDWATCHRUM_API TimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API TimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The beginning of the time range to retrieve performance events from.</p>
     */
    inline long long GetAfter() const { return m_after; }
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }
    inline void SetAfter(long long value) { m_afterHasBeenSet = true; m_after = value; }
    inline TimeRange& WithAfter(long long value) { SetAfter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time range to retrieve performance events from. If you omit
     * this, the time range extends to the time that this operation is performed.</p>
     */
    inline long long GetBefore() const { return m_before; }
    inline bool BeforeHasBeenSet() const { return m_beforeHasBeenSet; }
    inline void SetBefore(long long value) { m_beforeHasBeenSet = true; m_before = value; }
    inline TimeRange& WithBefore(long long value) { SetBefore(value); return *this;}
    ///@}
  private:

    long long m_after{0};
    bool m_afterHasBeenSet = false;

    long long m_before{0};
    bool m_beforeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
