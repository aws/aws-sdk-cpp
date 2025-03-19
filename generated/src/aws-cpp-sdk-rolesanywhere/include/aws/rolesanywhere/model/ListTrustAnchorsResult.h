/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/TrustAnchorDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class ListTrustAnchorsResult
  {
  public:
    AWS_ROLESANYWHERE_API ListTrustAnchorsResult() = default;
    AWS_ROLESANYWHERE_API ListTrustAnchorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ListTrustAnchorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrustAnchorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of trust anchors.</p>
     */
    inline const Aws::Vector<TrustAnchorDetail>& GetTrustAnchors() const { return m_trustAnchors; }
    template<typename TrustAnchorsT = Aws::Vector<TrustAnchorDetail>>
    void SetTrustAnchors(TrustAnchorsT&& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors = std::forward<TrustAnchorsT>(value); }
    template<typename TrustAnchorsT = Aws::Vector<TrustAnchorDetail>>
    ListTrustAnchorsResult& WithTrustAnchors(TrustAnchorsT&& value) { SetTrustAnchors(std::forward<TrustAnchorsT>(value)); return *this;}
    template<typename TrustAnchorsT = TrustAnchorDetail>
    ListTrustAnchorsResult& AddTrustAnchors(TrustAnchorsT&& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors.emplace_back(std::forward<TrustAnchorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrustAnchorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TrustAnchorDetail> m_trustAnchors;
    bool m_trustAnchorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
