/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{
  class SendMessageResult
  {
  public:
    AWS_QCONNECT_API SendMessageResult();
    AWS_QCONNECT_API SendMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API SendMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next message, used by GetNextMessage.</p>
     */
    inline const Aws::String& GetNextMessageToken() const{ return m_nextMessageToken; }
    inline void SetNextMessageToken(const Aws::String& value) { m_nextMessageToken = value; }
    inline void SetNextMessageToken(Aws::String&& value) { m_nextMessageToken = std::move(value); }
    inline void SetNextMessageToken(const char* value) { m_nextMessageToken.assign(value); }
    inline SendMessageResult& WithNextMessageToken(const Aws::String& value) { SetNextMessageToken(value); return *this;}
    inline SendMessageResult& WithNextMessageToken(Aws::String&& value) { SetNextMessageToken(std::move(value)); return *this;}
    inline SendMessageResult& WithNextMessageToken(const char* value) { SetNextMessageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the submitted message.</p>
     */
    inline const Aws::String& GetRequestMessageId() const{ return m_requestMessageId; }
    inline void SetRequestMessageId(const Aws::String& value) { m_requestMessageId = value; }
    inline void SetRequestMessageId(Aws::String&& value) { m_requestMessageId = std::move(value); }
    inline void SetRequestMessageId(const char* value) { m_requestMessageId.assign(value); }
    inline SendMessageResult& WithRequestMessageId(const Aws::String& value) { SetRequestMessageId(value); return *this;}
    inline SendMessageResult& WithRequestMessageId(Aws::String&& value) { SetRequestMessageId(std::move(value)); return *this;}
    inline SendMessageResult& WithRequestMessageId(const char* value) { SetRequestMessageId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendMessageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendMessageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendMessageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMessageToken;

    Aws::String m_requestMessageId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
