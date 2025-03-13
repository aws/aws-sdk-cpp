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
  class ListHandshakesForOrganizationResult
  {
  public:
    AWS_ORGANIZATIONS_API ListHandshakesForOrganizationResult() = default;
    AWS_ORGANIZATIONS_API ListHandshakesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListHandshakesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that are associated with an organization.</p>
     */
    inline const Aws::Vector<Handshake>& GetHandshakes() const { return m_handshakes; }
    template<typename HandshakesT = Aws::Vector<Handshake>>
    void SetHandshakes(HandshakesT&& value) { m_handshakesHasBeenSet = true; m_handshakes = std::forward<HandshakesT>(value); }
    template<typename HandshakesT = Aws::Vector<Handshake>>
    ListHandshakesForOrganizationResult& WithHandshakes(HandshakesT&& value) { SetHandshakes(std::forward<HandshakesT>(value)); return *this;}
    template<typename HandshakesT = Handshake>
    ListHandshakesForOrganizationResult& AddHandshakes(HandshakesT&& value) { m_handshakesHasBeenSet = true; m_handshakes.emplace_back(std::forward<HandshakesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHandshakesForOrganizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHandshakesForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Handshake> m_handshakes;
    bool m_handshakesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
