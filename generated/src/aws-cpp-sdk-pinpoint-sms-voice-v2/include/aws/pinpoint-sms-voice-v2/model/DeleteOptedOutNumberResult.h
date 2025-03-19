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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DeleteOptedOutNumberResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteOptedOutNumberResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DeleteOptedOutNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteOptedOutNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The OptOutListArn that the phone number was removed from.</p>
     */
    inline const Aws::String& GetOptOutListArn() const { return m_optOutListArn; }
    template<typename OptOutListArnT = Aws::String>
    void SetOptOutListArn(OptOutListArnT&& value) { m_optOutListArnHasBeenSet = true; m_optOutListArn = std::forward<OptOutListArnT>(value); }
    template<typename OptOutListArnT = Aws::String>
    DeleteOptedOutNumberResult& WithOptOutListArn(OptOutListArnT&& value) { SetOptOutListArn(std::forward<OptOutListArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OptOutListName that the phone number was removed from.</p>
     */
    inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
    template<typename OptOutListNameT = Aws::String>
    void SetOptOutListName(OptOutListNameT&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::forward<OptOutListNameT>(value); }
    template<typename OptOutListNameT = Aws::String>
    DeleteOptedOutNumberResult& WithOptOutListName(OptOutListNameT&& value) { SetOptOutListName(std::forward<OptOutListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that was removed from the OptOutList.</p>
     */
    inline const Aws::String& GetOptedOutNumber() const { return m_optedOutNumber; }
    template<typename OptedOutNumberT = Aws::String>
    void SetOptedOutNumber(OptedOutNumberT&& value) { m_optedOutNumberHasBeenSet = true; m_optedOutNumber = std::forward<OptedOutNumberT>(value); }
    template<typename OptedOutNumberT = Aws::String>
    DeleteOptedOutNumberResult& WithOptedOutNumber(OptedOutNumberT&& value) { SetOptedOutNumber(std::forward<OptedOutNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the number was removed at, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetOptedOutTimestamp() const { return m_optedOutTimestamp; }
    template<typename OptedOutTimestampT = Aws::Utils::DateTime>
    void SetOptedOutTimestamp(OptedOutTimestampT&& value) { m_optedOutTimestampHasBeenSet = true; m_optedOutTimestamp = std::forward<OptedOutTimestampT>(value); }
    template<typename OptedOutTimestampT = Aws::Utils::DateTime>
    DeleteOptedOutNumberResult& WithOptedOutTimestamp(OptedOutTimestampT&& value) { SetOptedOutTimestamp(std::forward<OptedOutTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is true if it was the end user who requested their phone number be
     * removed. </p>
     */
    inline bool GetEndUserOptedOut() const { return m_endUserOptedOut; }
    inline void SetEndUserOptedOut(bool value) { m_endUserOptedOutHasBeenSet = true; m_endUserOptedOut = value; }
    inline DeleteOptedOutNumberResult& WithEndUserOptedOut(bool value) { SetEndUserOptedOut(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteOptedOutNumberResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_optOutListArn;
    bool m_optOutListArnHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::String m_optedOutNumber;
    bool m_optedOutNumberHasBeenSet = false;

    Aws::Utils::DateTime m_optedOutTimestamp{};
    bool m_optedOutTimestampHasBeenSet = false;

    bool m_endUserOptedOut{false};
    bool m_endUserOptedOutHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
