/**
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
  class ListHandshakesForAccountResult
  {
  public:
    AWS_ORGANIZATIONS_API ListHandshakesForAccountResult();
    AWS_ORGANIZATIONS_API ListHandshakesForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListHandshakesForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline const Aws::Vector<Handshake>& GetHandshakes() const{ return m_handshakes; }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline void SetHandshakes(const Aws::Vector<Handshake>& value) { m_handshakes = value; }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline void SetHandshakes(Aws::Vector<Handshake>&& value) { m_handshakes = std::move(value); }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& WithHandshakes(const Aws::Vector<Handshake>& value) { SetHandshakes(value); return *this;}

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& WithHandshakes(Aws::Vector<Handshake>&& value) { SetHandshakes(std::move(value)); return *this;}

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& AddHandshakes(const Handshake& value) { m_handshakes.push_back(value); return *this; }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& AddHandshakes(Handshake&& value) { m_handshakes.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListHandshakesForAccountResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListHandshakesForAccountResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListHandshakesForAccountResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Handshake> m_handshakes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
