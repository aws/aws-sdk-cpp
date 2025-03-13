/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/AnnotationStoreItem.h>
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
  class ListAnnotationStoresResult
  {
  public:
    AWS_OMICS_API ListAnnotationStoresResult() = default;
    AWS_OMICS_API ListAnnotationStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListAnnotationStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of stores.</p>
     */
    inline const Aws::Vector<AnnotationStoreItem>& GetAnnotationStores() const { return m_annotationStores; }
    template<typename AnnotationStoresT = Aws::Vector<AnnotationStoreItem>>
    void SetAnnotationStores(AnnotationStoresT&& value) { m_annotationStoresHasBeenSet = true; m_annotationStores = std::forward<AnnotationStoresT>(value); }
    template<typename AnnotationStoresT = Aws::Vector<AnnotationStoreItem>>
    ListAnnotationStoresResult& WithAnnotationStores(AnnotationStoresT&& value) { SetAnnotationStores(std::forward<AnnotationStoresT>(value)); return *this;}
    template<typename AnnotationStoresT = AnnotationStoreItem>
    ListAnnotationStoresResult& AddAnnotationStores(AnnotationStoresT&& value) { m_annotationStoresHasBeenSet = true; m_annotationStores.emplace_back(std::forward<AnnotationStoresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnnotationStoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnnotationStoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnnotationStoreItem> m_annotationStores;
    bool m_annotationStoresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
