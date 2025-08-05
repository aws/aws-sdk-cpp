/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/TrustStoreSummary.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class ListTrustStoresResult
  {
  public:
    AWS_WORKSPACESWEB_API ListTrustStoresResult() = default;
    AWS_WORKSPACESWEB_API ListTrustStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListTrustStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The trust stores.</p>
     */
    inline const Aws::Vector<TrustStoreSummary>& GetTrustStores() const { return m_trustStores; }
    template<typename TrustStoresT = Aws::Vector<TrustStoreSummary>>
    void SetTrustStores(TrustStoresT&& value) { m_trustStoresHasBeenSet = true; m_trustStores = std::forward<TrustStoresT>(value); }
    template<typename TrustStoresT = Aws::Vector<TrustStoreSummary>>
    ListTrustStoresResult& WithTrustStores(TrustStoresT&& value) { SetTrustStores(std::forward<TrustStoresT>(value)); return *this;}
    template<typename TrustStoresT = TrustStoreSummary>
    ListTrustStoresResult& AddTrustStores(TrustStoresT&& value) { m_trustStoresHasBeenSet = true; m_trustStores.emplace_back(std::forward<TrustStoresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrustStoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrustStoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustStoreSummary> m_trustStores;
    bool m_trustStoresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
