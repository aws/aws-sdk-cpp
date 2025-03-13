/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ReferenceStoreDetail.h>
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
  class ListReferenceStoresResult
  {
  public:
    AWS_OMICS_API ListReferenceStoresResult() = default;
    AWS_OMICS_API ListReferenceStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReferenceStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReferenceStoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reference stores.</p>
     */
    inline const Aws::Vector<ReferenceStoreDetail>& GetReferenceStores() const { return m_referenceStores; }
    template<typename ReferenceStoresT = Aws::Vector<ReferenceStoreDetail>>
    void SetReferenceStores(ReferenceStoresT&& value) { m_referenceStoresHasBeenSet = true; m_referenceStores = std::forward<ReferenceStoresT>(value); }
    template<typename ReferenceStoresT = Aws::Vector<ReferenceStoreDetail>>
    ListReferenceStoresResult& WithReferenceStores(ReferenceStoresT&& value) { SetReferenceStores(std::forward<ReferenceStoresT>(value)); return *this;}
    template<typename ReferenceStoresT = ReferenceStoreDetail>
    ListReferenceStoresResult& AddReferenceStores(ReferenceStoresT&& value) { m_referenceStoresHasBeenSet = true; m_referenceStores.emplace_back(std::forward<ReferenceStoresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReferenceStoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReferenceStoreDetail> m_referenceStores;
    bool m_referenceStoresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
