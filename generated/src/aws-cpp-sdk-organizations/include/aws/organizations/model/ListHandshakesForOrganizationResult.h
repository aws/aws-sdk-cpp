﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/Handshake.h>
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
  class ListHandshakesForOrganizationResult
  {
  public:
    AWS_ORGANIZATIONS_API ListHandshakesForOrganizationResult();
    AWS_ORGANIZATIONS_API ListHandshakesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListHandshakesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that are associated with an organization.</p>
     */
    inline const Aws::Vector<Handshake>& GetHandshakes() const{ return m_handshakes; }
    inline void SetHandshakes(const Aws::Vector<Handshake>& value) { m_handshakes = value; }
    inline void SetHandshakes(Aws::Vector<Handshake>&& value) { m_handshakes = std::move(value); }
    inline ListHandshakesForOrganizationResult& WithHandshakes(const Aws::Vector<Handshake>& value) { SetHandshakes(value); return *this;}
    inline ListHandshakesForOrganizationResult& WithHandshakes(Aws::Vector<Handshake>&& value) { SetHandshakes(std::move(value)); return *this;}
    inline ListHandshakesForOrganizationResult& AddHandshakes(const Handshake& value) { m_handshakes.push_back(value); return *this; }
    inline ListHandshakesForOrganizationResult& AddHandshakes(Handshake&& value) { m_handshakes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHandshakesForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHandshakesForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHandshakesForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHandshakesForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHandshakesForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHandshakesForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Handshake> m_handshakes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
