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
    AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionResult();
    AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each collection.</p>
     */
    inline const Aws::Vector<CollectionDetail>& GetCollectionDetails() const{ return m_collectionDetails; }
    inline void SetCollectionDetails(const Aws::Vector<CollectionDetail>& value) { m_collectionDetails = value; }
    inline void SetCollectionDetails(Aws::Vector<CollectionDetail>&& value) { m_collectionDetails = std::move(value); }
    inline BatchGetCollectionResult& WithCollectionDetails(const Aws::Vector<CollectionDetail>& value) { SetCollectionDetails(value); return *this;}
    inline BatchGetCollectionResult& WithCollectionDetails(Aws::Vector<CollectionDetail>&& value) { SetCollectionDetails(std::move(value)); return *this;}
    inline BatchGetCollectionResult& AddCollectionDetails(const CollectionDetail& value) { m_collectionDetails.push_back(value); return *this; }
    inline BatchGetCollectionResult& AddCollectionDetails(CollectionDetail&& value) { m_collectionDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error information for the request.</p>
     */
    inline const Aws::Vector<CollectionErrorDetail>& GetCollectionErrorDetails() const{ return m_collectionErrorDetails; }
    inline void SetCollectionErrorDetails(const Aws::Vector<CollectionErrorDetail>& value) { m_collectionErrorDetails = value; }
    inline void SetCollectionErrorDetails(Aws::Vector<CollectionErrorDetail>&& value) { m_collectionErrorDetails = std::move(value); }
    inline BatchGetCollectionResult& WithCollectionErrorDetails(const Aws::Vector<CollectionErrorDetail>& value) { SetCollectionErrorDetails(value); return *this;}
    inline BatchGetCollectionResult& WithCollectionErrorDetails(Aws::Vector<CollectionErrorDetail>&& value) { SetCollectionErrorDetails(std::move(value)); return *this;}
    inline BatchGetCollectionResult& AddCollectionErrorDetails(const CollectionErrorDetail& value) { m_collectionErrorDetails.push_back(value); return *this; }
    inline BatchGetCollectionResult& AddCollectionErrorDetails(CollectionErrorDetail&& value) { m_collectionErrorDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CollectionDetail> m_collectionDetails;

    Aws::Vector<CollectionErrorDetail> m_collectionErrorDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
