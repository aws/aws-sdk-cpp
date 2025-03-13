/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NamespaceInfoV2.h>
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
namespace QuickSight
{
namespace Model
{
  class ListNamespacesResult
  {
  public:
    AWS_QUICKSIGHT_API ListNamespacesResult() = default;
    AWS_QUICKSIGHT_API ListNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information about the namespaces in this Amazon Web Services account. The
     * response includes the namespace ARN, name, Amazon Web Services Region,
     * notification email address, creation status, and identity store.</p>
     */
    inline const Aws::Vector<NamespaceInfoV2>& GetNamespaces() const { return m_namespaces; }
    template<typename NamespacesT = Aws::Vector<NamespaceInfoV2>>
    void SetNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces = std::forward<NamespacesT>(value); }
    template<typename NamespacesT = Aws::Vector<NamespaceInfoV2>>
    ListNamespacesResult& WithNamespaces(NamespacesT&& value) { SetNamespaces(std::forward<NamespacesT>(value)); return *this;}
    template<typename NamespacesT = NamespaceInfoV2>
    ListNamespacesResult& AddNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces.emplace_back(std::forward<NamespacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique pagination token that can be used in a subsequent request. Receiving
     * <code>NextToken</code> in your response inticates that there is more data that
     * can be returned. To receive the data, make another <code>ListNamespaces</code>
     * API call with the returned token to retrieve the next page of data. Each token
     * is valid for 24 hours. If you try to make a <code>ListNamespaces</code> API call
     * with an expired token, you will receive a <code>HTTP 400
     * InvalidNextTokenException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNamespacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNamespacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListNamespacesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<NamespaceInfoV2> m_namespaces;
    bool m_namespacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
