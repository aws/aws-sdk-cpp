/**
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
  class AssociateOriginationIdentityResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API AssociateOriginationIdentityResult() = default;
    AWS_PINPOINTSMSVOICEV2_API AssociateOriginationIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API AssociateOriginationIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pool that is now associated with the
     * origination identity.</p>
     */
    inline const Aws::String& GetPoolArn() const { return m_poolArn; }
    template<typename PoolArnT = Aws::String>
    void SetPoolArn(PoolArnT&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::forward<PoolArnT>(value); }
    template<typename PoolArnT = Aws::String>
    AssociateOriginationIdentityResult& WithPoolArn(PoolArnT&& value) { SetPoolArn(std::forward<PoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PoolId of the pool that is now associated with the origination
     * identity.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    AssociateOriginationIdentityResult& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberArn or SenderIdArn of the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const { return m_originationIdentityArn; }
    template<typename OriginationIdentityArnT = Aws::String>
    void SetOriginationIdentityArn(OriginationIdentityArnT&& value) { m_originationIdentityArnHasBeenSet = true; m_originationIdentityArn = std::forward<OriginationIdentityArnT>(value); }
    template<typename OriginationIdentityArnT = Aws::String>
    AssociateOriginationIdentityResult& WithOriginationIdentityArn(OriginationIdentityArnT&& value) { SetOriginationIdentityArn(std::forward<OriginationIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId or SenderId of the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    AssociateOriginationIdentityResult& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    AssociateOriginationIdentityResult& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateOriginationIdentityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_originationIdentityArn;
    bool m_originationIdentityArnHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
