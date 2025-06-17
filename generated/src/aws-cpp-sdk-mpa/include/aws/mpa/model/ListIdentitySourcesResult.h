/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/model/IdentitySourceForList.h>
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
namespace MPA
{
namespace Model
{
  class ListIdentitySourcesResult
  {
  public:
    AWS_MPA_API ListIdentitySourcesResult() = default;
    AWS_MPA_API ListIdentitySourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API ListIdentitySourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a next call to the operation to get more output. You can repeat this until
     * the <code>NextToken</code> response element returns <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentitySourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>IdentitySources</code>. Contains details for identity sources.</p>
     */
    inline const Aws::Vector<IdentitySourceForList>& GetIdentitySources() const { return m_identitySources; }
    template<typename IdentitySourcesT = Aws::Vector<IdentitySourceForList>>
    void SetIdentitySources(IdentitySourcesT&& value) { m_identitySourcesHasBeenSet = true; m_identitySources = std::forward<IdentitySourcesT>(value); }
    template<typename IdentitySourcesT = Aws::Vector<IdentitySourceForList>>
    ListIdentitySourcesResult& WithIdentitySources(IdentitySourcesT&& value) { SetIdentitySources(std::forward<IdentitySourcesT>(value)); return *this;}
    template<typename IdentitySourcesT = IdentitySourceForList>
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

    Aws::Vector<IdentitySourceForList> m_identitySources;
    bool m_identitySourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
