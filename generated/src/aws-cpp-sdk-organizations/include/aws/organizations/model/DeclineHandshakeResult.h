/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Handshake.h>
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
namespace Organizations
{
namespace Model
{
  class DeclineHandshakeResult
  {
  public:
    AWS_ORGANIZATIONS_API DeclineHandshakeResult();
    AWS_ORGANIZATIONS_API DeclineHandshakeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DeclineHandshakeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains details about the declined handshake. The state is
     * updated to show the value <code>DECLINED</code>.</p>
     */
    inline const Handshake& GetHandshake() const{ return m_handshake; }

    /**
     * <p>A structure that contains details about the declined handshake. The state is
     * updated to show the value <code>DECLINED</code>.</p>
     */
    inline void SetHandshake(const Handshake& value) { m_handshake = value; }

    /**
     * <p>A structure that contains details about the declined handshake. The state is
     * updated to show the value <code>DECLINED</code>.</p>
     */
    inline void SetHandshake(Handshake&& value) { m_handshake = std::move(value); }

    /**
     * <p>A structure that contains details about the declined handshake. The state is
     * updated to show the value <code>DECLINED</code>.</p>
     */
    inline DeclineHandshakeResult& WithHandshake(const Handshake& value) { SetHandshake(value); return *this;}

    /**
     * <p>A structure that contains details about the declined handshake. The state is
     * updated to show the value <code>DECLINED</code>.</p>
     */
    inline DeclineHandshakeResult& WithHandshake(Handshake&& value) { SetHandshake(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeclineHandshakeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeclineHandshakeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeclineHandshakeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Handshake m_handshake;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
