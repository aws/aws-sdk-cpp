/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/LinkedWhatsAppBusinessAccount.h>
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
  class GetLinkedWhatsAppBusinessAccountResult
  {
  public:
    AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountResult();
    AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API GetLinkedWhatsAppBusinessAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the linked WhatsApp Business Account.</p>
     */
    inline const LinkedWhatsAppBusinessAccount& GetAccount() const{ return m_account; }
    inline void SetAccount(const LinkedWhatsAppBusinessAccount& value) { m_account = value; }
    inline void SetAccount(LinkedWhatsAppBusinessAccount&& value) { m_account = std::move(value); }
    inline GetLinkedWhatsAppBusinessAccountResult& WithAccount(const LinkedWhatsAppBusinessAccount& value) { SetAccount(value); return *this;}
    inline GetLinkedWhatsAppBusinessAccountResult& WithAccount(LinkedWhatsAppBusinessAccount&& value) { SetAccount(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLinkedWhatsAppBusinessAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLinkedWhatsAppBusinessAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLinkedWhatsAppBusinessAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LinkedWhatsAppBusinessAccount m_account;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
