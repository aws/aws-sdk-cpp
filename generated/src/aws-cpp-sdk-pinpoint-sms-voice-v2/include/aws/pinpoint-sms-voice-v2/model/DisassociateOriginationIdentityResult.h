﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DisassociateOriginationIdentityResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DisassociateOriginationIdentityResult();
    AWS_PINPOINTSMSVOICEV2_API DisassociateOriginationIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DisassociateOriginationIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pool.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }
    inline void SetPoolArn(const Aws::String& value) { m_poolArn = value; }
    inline void SetPoolArn(Aws::String&& value) { m_poolArn = std::move(value); }
    inline void SetPoolArn(const char* value) { m_poolArn.assign(value); }
    inline DisassociateOriginationIdentityResult& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}
    inline DisassociateOriginationIdentityResult& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}
    inline DisassociateOriginationIdentityResult& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PoolId of the pool no longer associated with the origination
     * identity.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline void SetPoolId(const Aws::String& value) { m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolId.assign(value); }
    inline DisassociateOriginationIdentityResult& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline DisassociateOriginationIdentityResult& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline DisassociateOriginationIdentityResult& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberArn or SenderIdArn of the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const{ return m_originationIdentityArn; }
    inline void SetOriginationIdentityArn(const Aws::String& value) { m_originationIdentityArn = value; }
    inline void SetOriginationIdentityArn(Aws::String&& value) { m_originationIdentityArn = std::move(value); }
    inline void SetOriginationIdentityArn(const char* value) { m_originationIdentityArn.assign(value); }
    inline DisassociateOriginationIdentityResult& WithOriginationIdentityArn(const Aws::String& value) { SetOriginationIdentityArn(value); return *this;}
    inline DisassociateOriginationIdentityResult& WithOriginationIdentityArn(Aws::String&& value) { SetOriginationIdentityArn(std::move(value)); return *this;}
    inline DisassociateOriginationIdentityResult& WithOriginationIdentityArn(const char* value) { SetOriginationIdentityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId or SenderId of the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentity.assign(value); }
    inline DisassociateOriginationIdentityResult& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline DisassociateOriginationIdentityResult& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline DisassociateOriginationIdentityResult& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCode.assign(value); }
    inline DisassociateOriginationIdentityResult& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline DisassociateOriginationIdentityResult& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline DisassociateOriginationIdentityResult& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisassociateOriginationIdentityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisassociateOriginationIdentityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisassociateOriginationIdentityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_poolArn;

    Aws::String m_poolId;

    Aws::String m_originationIdentityArn;

    Aws::String m_originationIdentity;

    Aws::String m_isoCountryCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
