/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The information for an opted out number in an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/OptedOutNumberInformation">AWS
   * API Reference</a></p>
   */
  class OptedOutNumberInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API OptedOutNumberInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API OptedOutNumberInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API OptedOutNumberInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone number that is opted out.</p>
     */
    inline const Aws::String& GetOptedOutNumber() const { return m_optedOutNumber; }
    inline bool OptedOutNumberHasBeenSet() const { return m_optedOutNumberHasBeenSet; }
    template<typename OptedOutNumberT = Aws::String>
    void SetOptedOutNumber(OptedOutNumberT&& value) { m_optedOutNumberHasBeenSet = true; m_optedOutNumber = std::forward<OptedOutNumberT>(value); }
    template<typename OptedOutNumberT = Aws::String>
    OptedOutNumberInformation& WithOptedOutNumber(OptedOutNumberT&& value) { SetOptedOutNumber(std::forward<OptedOutNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the op tout occurred, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetOptedOutTimestamp() const { return m_optedOutTimestamp; }
    inline bool OptedOutTimestampHasBeenSet() const { return m_optedOutTimestampHasBeenSet; }
    template<typename OptedOutTimestampT = Aws::Utils::DateTime>
    void SetOptedOutTimestamp(OptedOutTimestampT&& value) { m_optedOutTimestampHasBeenSet = true; m_optedOutTimestamp = std::forward<OptedOutTimestampT>(value); }
    template<typename OptedOutTimestampT = Aws::Utils::DateTime>
    OptedOutNumberInformation& WithOptedOutTimestamp(OptedOutTimestampT&& value) { SetOptedOutTimestamp(std::forward<OptedOutTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is set to true if it was the end recipient that opted out.</p>
     */
    inline bool GetEndUserOptedOut() const { return m_endUserOptedOut; }
    inline bool EndUserOptedOutHasBeenSet() const { return m_endUserOptedOutHasBeenSet; }
    inline void SetEndUserOptedOut(bool value) { m_endUserOptedOutHasBeenSet = true; m_endUserOptedOut = value; }
    inline OptedOutNumberInformation& WithEndUserOptedOut(bool value) { SetEndUserOptedOut(value); return *this;}
    ///@}
  private:

    Aws::String m_optedOutNumber;
    bool m_optedOutNumberHasBeenSet = false;

    Aws::Utils::DateTime m_optedOutTimestamp{};
    bool m_optedOutTimestampHasBeenSet = false;

    bool m_endUserOptedOut{false};
    bool m_endUserOptedOutHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
