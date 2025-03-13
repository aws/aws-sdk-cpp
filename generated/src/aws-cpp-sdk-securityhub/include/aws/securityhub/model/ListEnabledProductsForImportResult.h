/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListEnabledProductsForImportResult
  {
  public:
    AWS_SECURITYHUB_API ListEnabledProductsForImportResult() = default;
    AWS_SECURITYHUB_API ListEnabledProductsForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListEnabledProductsForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProductSubscriptions() const { return m_productSubscriptions; }
    template<typename ProductSubscriptionsT = Aws::Vector<Aws::String>>
    void SetProductSubscriptions(ProductSubscriptionsT&& value) { m_productSubscriptionsHasBeenSet = true; m_productSubscriptions = std::forward<ProductSubscriptionsT>(value); }
    template<typename ProductSubscriptionsT = Aws::Vector<Aws::String>>
    ListEnabledProductsForImportResult& WithProductSubscriptions(ProductSubscriptionsT&& value) { SetProductSubscriptions(std::forward<ProductSubscriptionsT>(value)); return *this;}
    template<typename ProductSubscriptionsT = Aws::String>
    ListEnabledProductsForImportResult& AddProductSubscriptions(ProductSubscriptionsT&& value) { m_productSubscriptionsHasBeenSet = true; m_productSubscriptions.emplace_back(std::forward<ProductSubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnabledProductsForImportResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnabledProductsForImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_productSubscriptions;
    bool m_productSubscriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
