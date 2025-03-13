/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppSignupCallbackResult.h>
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
namespace SocialMessaging
{
namespace Model
{
  class AssociateWhatsAppBusinessAccountResult
  {
  public:
    AWS_SOCIALMESSAGING_API AssociateWhatsAppBusinessAccountResult() = default;
    AWS_SOCIALMESSAGING_API AssociateWhatsAppBusinessAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API AssociateWhatsAppBusinessAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains your WhatsApp registration status.</p>
     */
    inline const WhatsAppSignupCallbackResult& GetSignupCallbackResult() const { return m_signupCallbackResult; }
    template<typename SignupCallbackResultT = WhatsAppSignupCallbackResult>
    void SetSignupCallbackResult(SignupCallbackResultT&& value) { m_signupCallbackResultHasBeenSet = true; m_signupCallbackResult = std::forward<SignupCallbackResultT>(value); }
    template<typename SignupCallbackResultT = WhatsAppSignupCallbackResult>
    AssociateWhatsAppBusinessAccountResult& WithSignupCallbackResult(SignupCallbackResultT&& value) { SetSignupCallbackResult(std::forward<SignupCallbackResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code for the response.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline AssociateWhatsAppBusinessAccountResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateWhatsAppBusinessAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WhatsAppSignupCallbackResult m_signupCallbackResult;
    bool m_signupCallbackResultHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
