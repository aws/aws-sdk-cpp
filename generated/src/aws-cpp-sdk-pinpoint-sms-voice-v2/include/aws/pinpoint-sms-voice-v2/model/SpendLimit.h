/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/SpendLimitName.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Describes the current monthly spend limits for sending voice and text
   * messages. For more information on increasing your monthly spend limit, see <a
   * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/awssupport-spend-threshold.html">
   * Requesting a spending quota increase </a> in the <i>AWS End User Messaging SMS
   * User Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SpendLimit">AWS
   * API Reference</a></p>
   */
  class SpendLimit
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SpendLimit() = default;
    AWS_PINPOINTSMSVOICEV2_API SpendLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SpendLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the SpendLimit.</p>
     */
    inline SpendLimitName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(SpendLimitName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SpendLimit& WithName(SpendLimitName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of money, in US dollars, that you want to be able to spend
     * sending messages each month. This value has to be less than or equal to the
     * amount in <code>MaxLimit</code>. To use this custom limit,
     * <code>Overridden</code> must be set to true.</p>
     */
    inline long long GetEnforcedLimit() const { return m_enforcedLimit; }
    inline bool EnforcedLimitHasBeenSet() const { return m_enforcedLimitHasBeenSet; }
    inline void SetEnforcedLimit(long long value) { m_enforcedLimitHasBeenSet = true; m_enforcedLimit = value; }
    inline SpendLimit& WithEnforcedLimit(long long value) { SetEnforcedLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum amount of money that you are able to spend to send messages each
     * month, in US dollars.</p>
     */
    inline long long GetMaxLimit() const { return m_maxLimit; }
    inline bool MaxLimitHasBeenSet() const { return m_maxLimitHasBeenSet; }
    inline void SetMaxLimit(long long value) { m_maxLimitHasBeenSet = true; m_maxLimit = value; }
    inline SpendLimit& WithMaxLimit(long long value) { SetMaxLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>True</code>, the value that has been specified in the
     * <code>EnforcedLimit</code> is used to determine the maximum amount in US dollars
     * that can be spent to send messages each month, in US dollars.</p>
     */
    inline bool GetOverridden() const { return m_overridden; }
    inline bool OverriddenHasBeenSet() const { return m_overriddenHasBeenSet; }
    inline void SetOverridden(bool value) { m_overriddenHasBeenSet = true; m_overridden = value; }
    inline SpendLimit& WithOverridden(bool value) { SetOverridden(value); return *this;}
    ///@}
  private:

    SpendLimitName m_name{SpendLimitName::NOT_SET};
    bool m_nameHasBeenSet = false;

    long long m_enforcedLimit{0};
    bool m_enforcedLimitHasBeenSet = false;

    long long m_maxLimit{0};
    bool m_maxLimitHasBeenSet = false;

    bool m_overridden{false};
    bool m_overriddenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
