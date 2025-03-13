/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/Mode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/FillPolicy.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for avail suppression, also known as ad suppression. For
   * more information about ad suppression, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
   * Suppression</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AvailSuppression">AWS
   * API Reference</a></p>
   */
  class AvailSuppression
  {
  public:
    AWS_MEDIATAILOR_API AvailSuppression() = default;
    AWS_MEDIATAILOR_API AvailSuppression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AvailSuppression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the ad suppression mode. By default, ad suppression is off and all ad
     * breaks are filled with ads or slate. When Mode is set to
     * <code>BEHIND_LIVE_EDGE</code>, ad suppression is active and MediaTailor won't
     * fill ad breaks on or behind the ad suppression Value time in the manifest
     * lookback window. When Mode is set to <code>AFTER_LIVE_EDGE</code>, ad
     * suppression is active and MediaTailor won't fill ad breaks that are within the
     * live edge plus the avail suppression value.</p>
     */
    inline Mode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(Mode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline AvailSuppression& WithMode(Mode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AvailSuppression& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the policy to apply to the avail suppression mode.
     * <code>BEHIND_LIVE_EDGE</code> will always use the full avail suppression policy.
     * <code>AFTER_LIVE_EDGE</code> mode can be used to invoke partial ad break fills
     * when a session starts mid-break.</p>
     */
    inline FillPolicy GetFillPolicy() const { return m_fillPolicy; }
    inline bool FillPolicyHasBeenSet() const { return m_fillPolicyHasBeenSet; }
    inline void SetFillPolicy(FillPolicy value) { m_fillPolicyHasBeenSet = true; m_fillPolicy = value; }
    inline AvailSuppression& WithFillPolicy(FillPolicy value) { SetFillPolicy(value); return *this;}
    ///@}
  private:

    Mode m_mode{Mode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    FillPolicy m_fillPolicy{FillPolicy::NOT_SET};
    bool m_fillPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
