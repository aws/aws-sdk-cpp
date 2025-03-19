/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/IdentitySourceItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class ListIdentitySourcesResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ListIdentitySourcesResult() = default;
    AWS_VERIFIEDPERMISSIONS_API ListIdentitySourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API ListIdentitySourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentitySourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline const Aws::Vector<IdentitySourceItem>& GetIdentitySources() const { return m_identitySources; }
    template<typename IdentitySourcesT = Aws::Vector<IdentitySourceItem>>
    void SetIdentitySources(IdentitySourcesT&& value) { m_identitySourcesHasBeenSet = true; m_identitySources = std::forward<IdentitySourcesT>(value); }
    template<typename IdentitySourcesT = Aws::Vector<IdentitySourceItem>>
    ListIdentitySourcesResult& WithIdentitySources(IdentitySourcesT&& value) { SetIdentitySources(std::forward<IdentitySourcesT>(value)); return *this;}
    template<typename IdentitySourcesT = IdentitySourceItem>
    ListIdentitySourcesResult& AddIdentitySources(IdentitySourcesT&& value) { m_identitySourcesHasBeenSet = true; m_identitySources.emplace_back(std::forward<IdentitySourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdentitySourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IdentitySourceItem> m_identitySources;
    bool m_identitySourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
