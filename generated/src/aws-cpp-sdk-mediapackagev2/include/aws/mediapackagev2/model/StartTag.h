/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>To insert an EXT-X-START tag in your HLS playlist, specify a StartTag
   * configuration object with a valid TimeOffset. When you do, you can also
   * optionally specify whether to include a PRECISE value in the EXT-X-START
   * tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/StartTag">AWS
   * API Reference</a></p>
   */
  class StartTag
  {
  public:
    AWS_MEDIAPACKAGEV2_API StartTag() = default;
    AWS_MEDIAPACKAGEV2_API StartTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API StartTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the value for TIME-OFFSET within your EXT-X-START tag. Enter a signed
     * floating point value which, if positive, must be less than the configured
     * manifest duration minus three times the configured segment target duration. If
     * negative, the absolute value must be larger than three times the configured
     * segment target duration, and the absolute value must be smaller than the
     * configured manifest duration.</p>
     */
    inline double GetTimeOffset() const { return m_timeOffset; }
    inline bool TimeOffsetHasBeenSet() const { return m_timeOffsetHasBeenSet; }
    inline void SetTimeOffset(double value) { m_timeOffsetHasBeenSet = true; m_timeOffset = value; }
    inline StartTag& WithTimeOffset(double value) { SetTimeOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the value for PRECISE within your EXT-X-START tag. Leave blank, or
     * choose false, to use the default value NO. Choose yes to use the value YES.</p>
     */
    inline bool GetPrecise() const { return m_precise; }
    inline bool PreciseHasBeenSet() const { return m_preciseHasBeenSet; }
    inline void SetPrecise(bool value) { m_preciseHasBeenSet = true; m_precise = value; }
    inline StartTag& WithPrecise(bool value) { SetPrecise(value); return *this;}
    ///@}
  private:

    double m_timeOffset{0.0};
    bool m_timeOffsetHasBeenSet = false;

    bool m_precise{false};
    bool m_preciseHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
