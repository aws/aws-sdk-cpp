/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/SequenceStoreDetail.h>
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
  class ListSequenceStoresResult
  {
  public:
    AWS_OMICS_API ListSequenceStoresResult() = default;
    AWS_OMICS_API ListSequenceStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListSequenceStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSequenceStoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of sequence stores.</p>
     */
    inline const Aws::Vector<SequenceStoreDetail>& GetSequenceStores() const { return m_sequenceStores; }
    template<typename SequenceStoresT = Aws::Vector<SequenceStoreDetail>>
    void SetSequenceStores(SequenceStoresT&& value) { m_sequenceStoresHasBeenSet = true; m_sequenceStores = std::forward<SequenceStoresT>(value); }
    template<typename SequenceStoresT = Aws::Vector<SequenceStoreDetail>>
    ListSequenceStoresResult& WithSequenceStores(SequenceStoresT&& value) { SetSequenceStores(std::forward<SequenceStoresT>(value)); return *this;}
    template<typename SequenceStoresT = SequenceStoreDetail>
    ListSequenceStoresResult& AddSequenceStores(SequenceStoresT&& value) { m_sequenceStoresHasBeenSet = true; m_sequenceStores.emplace_back(std::forward<SequenceStoresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSequenceStoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SequenceStoreDetail> m_sequenceStores;
    bool m_sequenceStoresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
