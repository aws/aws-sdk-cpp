﻿/**
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
    AWS_PINPOINTSMSVOICEV2_API DeleteOptedOutNumberResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteOptedOutNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteOptedOutNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The OptOutListArn that the phone number was removed from.</p>
     */
    inline const Aws::String& GetOptOutListArn() const{ return m_optOutListArn; }
    inline void SetOptOutListArn(const Aws::String& value) { m_optOutListArn = value; }
    inline void SetOptOutListArn(Aws::String&& value) { m_optOutListArn = std::move(value); }
    inline void SetOptOutListArn(const char* value) { m_optOutListArn.assign(value); }
    inline DeleteOptedOutNumberResult& WithOptOutListArn(const Aws::String& value) { SetOptOutListArn(value); return *this;}
    inline DeleteOptedOutNumberResult& WithOptOutListArn(Aws::String&& value) { SetOptOutListArn(std::move(value)); return *this;}
    inline DeleteOptedOutNumberResult& WithOptOutListArn(const char* value) { SetOptOutListArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OptOutListName that the phone number was removed from.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }
    inline DeleteOptedOutNumberResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline DeleteOptedOutNumberResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline DeleteOptedOutNumberResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that was removed from the OptOutList.</p>
     */
    inline const Aws::String& GetOptedOutNumber() const{ return m_optedOutNumber; }
    inline void SetOptedOutNumber(const Aws::String& value) { m_optedOutNumber = value; }
    inline void SetOptedOutNumber(Aws::String&& value) { m_optedOutNumber = std::move(value); }
    inline void SetOptedOutNumber(const char* value) { m_optedOutNumber.assign(value); }
    inline DeleteOptedOutNumberResult& WithOptedOutNumber(const Aws::String& value) { SetOptedOutNumber(value); return *this;}
    inline DeleteOptedOutNumberResult& WithOptedOutNumber(Aws::String&& value) { SetOptedOutNumber(std::move(value)); return *this;}
    inline DeleteOptedOutNumberResult& WithOptedOutNumber(const char* value) { SetOptedOutNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the number was removed at, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetOptedOutTimestamp() const{ return m_optedOutTimestamp; }
    inline void SetOptedOutTimestamp(const Aws::Utils::DateTime& value) { m_optedOutTimestamp = value; }
    inline void SetOptedOutTimestamp(Aws::Utils::DateTime&& value) { m_optedOutTimestamp = std::move(value); }
    inline DeleteOptedOutNumberResult& WithOptedOutTimestamp(const Aws::Utils::DateTime& value) { SetOptedOutTimestamp(value); return *this;}
    inline DeleteOptedOutNumberResult& WithOptedOutTimestamp(Aws::Utils::DateTime&& value) { SetOptedOutTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is true if it was the end user who requested their phone number be
     * removed. </p>
     */
    inline bool GetEndUserOptedOut() const{ return m_endUserOptedOut; }
    inline void SetEndUserOptedOut(bool value) { m_endUserOptedOut = value; }
    inline DeleteOptedOutNumberResult& WithEndUserOptedOut(bool value) { SetEndUserOptedOut(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteOptedOutNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteOptedOutNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteOptedOutNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_optOutListArn;

    Aws::String m_optOutListName;

    Aws::String m_optedOutNumber;

    Aws::Utils::DateTime m_optedOutTimestamp;

    bool m_endUserOptedOut;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
