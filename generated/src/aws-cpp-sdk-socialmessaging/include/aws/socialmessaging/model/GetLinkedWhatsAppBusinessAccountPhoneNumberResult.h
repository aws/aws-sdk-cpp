/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppPhoneNumberDetail.h>
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
  class GetLinkedWhatsAppBusinessAccountPhoneNumberResult
  {
  public:
    AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountPhoneNumberResult();
    AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountPhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountPhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const WhatsAppPhoneNumberDetail& GetPhoneNumber() const{ return m_phoneNumber; }
    inline void SetPhoneNumber(const WhatsAppPhoneNumberDetail& value) { m_phoneNumber = value; }
    inline void SetPhoneNumber(WhatsAppPhoneNumberDetail&& value) { m_phoneNumber = std::move(value); }
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithPhoneNumber(const WhatsAppPhoneNumberDetail& value) { SetPhoneNumber(value); return *this;}
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithPhoneNumber(WhatsAppPhoneNumberDetail&& value) { SetPhoneNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WABA identifier linked to the phone number, formatted as
     * <code>waba-01234567890123456789012345678901</code>.</p>
     */
    inline const Aws::String& GetLinkedWhatsAppBusinessAccountId() const{ return m_linkedWhatsAppBusinessAccountId; }
    inline void SetLinkedWhatsAppBusinessAccountId(const Aws::String& value) { m_linkedWhatsAppBusinessAccountId = value; }
    inline void SetLinkedWhatsAppBusinessAccountId(Aws::String&& value) { m_linkedWhatsAppBusinessAccountId = std::move(value); }
    inline void SetLinkedWhatsAppBusinessAccountId(const char* value) { m_linkedWhatsAppBusinessAccountId.assign(value); }
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithLinkedWhatsAppBusinessAccountId(const Aws::String& value) { SetLinkedWhatsAppBusinessAccountId(value); return *this;}
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithLinkedWhatsAppBusinessAccountId(Aws::String&& value) { SetLinkedWhatsAppBusinessAccountId(std::move(value)); return *this;}
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithLinkedWhatsAppBusinessAccountId(const char* value) { SetLinkedWhatsAppBusinessAccountId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLinkedWhatsAppBusinessAccountPhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WhatsAppPhoneNumberDetail m_phoneNumber;

    Aws::String m_linkedWhatsAppBusinessAccountId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
