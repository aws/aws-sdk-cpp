/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VariantStoreItem.h>
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
namespace Omics
{
namespace Model
{
  class ListVariantStoresResult
  {
  public:
    AWS_OMICS_API ListVariantStoresResult() = default;
    AWS_OMICS_API ListVariantStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListVariantStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of variant stores.</p>
     */
    inline const Aws::Vector<VariantStoreItem>& GetVariantStores() const { return m_variantStores; }
    template<typename VariantStoresT = Aws::Vector<VariantStoreItem>>
    void SetVariantStores(VariantStoresT&& value) { m_variantStoresHasBeenSet = true; m_variantStores = std::forward<VariantStoresT>(value); }
    template<typename VariantStoresT = Aws::Vector<VariantStoreItem>>
    ListVariantStoresResult& WithVariantStores(VariantStoresT&& value) { SetVariantStores(std::forward<VariantStoresT>(value)); return *this;}
    template<typename VariantStoresT = VariantStoreItem>
    ListVariantStoresResult& AddVariantStores(VariantStoresT&& value) { m_variantStoresHasBeenSet = true; m_variantStores.emplace_back(std::forward<VariantStoresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVariantStoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVariantStoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VariantStoreItem> m_variantStores;
    bool m_variantStoresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
