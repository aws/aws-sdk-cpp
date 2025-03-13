/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CollectionDetail.h>
#include <aws/opensearchserverless/model/CollectionErrorDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class BatchGetCollectionResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionResult() = default;
    AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each collection.</p>
     */
    inline const Aws::Vector<CollectionDetail>& GetCollectionDetails() const { return m_collectionDetails; }
    template<typename CollectionDetailsT = Aws::Vector<CollectionDetail>>
    void SetCollectionDetails(CollectionDetailsT&& value) { m_collectionDetailsHasBeenSet = true; m_collectionDetails = std::forward<CollectionDetailsT>(value); }
    template<typename CollectionDetailsT = Aws::Vector<CollectionDetail>>
    BatchGetCollectionResult& WithCollectionDetails(CollectionDetailsT&& value) { SetCollectionDetails(std::forward<CollectionDetailsT>(value)); return *this;}
    template<typename CollectionDetailsT = CollectionDetail>
    BatchGetCollectionResult& AddCollectionDetails(CollectionDetailsT&& value) { m_collectionDetailsHasBeenSet = true; m_collectionDetails.emplace_back(std::forward<CollectionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error information for the request.</p>
     */
    inline const Aws::Vector<CollectionErrorDetail>& GetCollectionErrorDetails() const { return m_collectionErrorDetails; }
    template<typename CollectionErrorDetailsT = Aws::Vector<CollectionErrorDetail>>
    void SetCollectionErrorDetails(CollectionErrorDetailsT&& value) { m_collectionErrorDetailsHasBeenSet = true; m_collectionErrorDetails = std::forward<CollectionErrorDetailsT>(value); }
    template<typename CollectionErrorDetailsT = Aws::Vector<CollectionErrorDetail>>
    BatchGetCollectionResult& WithCollectionErrorDetails(CollectionErrorDetailsT&& value) { SetCollectionErrorDetails(std::forward<CollectionErrorDetailsT>(value)); return *this;}
    template<typename CollectionErrorDetailsT = CollectionErrorDetail>
    BatchGetCollectionResult& AddCollectionErrorDetails(CollectionErrorDetailsT&& value) { m_collectionErrorDetailsHasBeenSet = true; m_collectionErrorDetails.emplace_back(std::forward<CollectionErrorDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CollectionDetail> m_collectionDetails;
    bool m_collectionDetailsHasBeenSet = false;

    Aws::Vector<CollectionErrorDetail> m_collectionErrorDetails;
    bool m_collectionErrorDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
