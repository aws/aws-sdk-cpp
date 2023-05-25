/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/DeleteCollectionDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class DeleteCollectionResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionResult();
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of the deleted collection.</p>
     */
    inline const DeleteCollectionDetail& GetDeleteCollectionDetail() const{ return m_deleteCollectionDetail; }

    /**
     * <p>Details of the deleted collection.</p>
     */
    inline void SetDeleteCollectionDetail(const DeleteCollectionDetail& value) { m_deleteCollectionDetail = value; }

    /**
     * <p>Details of the deleted collection.</p>
     */
    inline void SetDeleteCollectionDetail(DeleteCollectionDetail&& value) { m_deleteCollectionDetail = std::move(value); }

    /**
     * <p>Details of the deleted collection.</p>
     */
    inline DeleteCollectionResult& WithDeleteCollectionDetail(const DeleteCollectionDetail& value) { SetDeleteCollectionDetail(value); return *this;}

    /**
     * <p>Details of the deleted collection.</p>
     */
    inline DeleteCollectionResult& WithDeleteCollectionDetail(DeleteCollectionDetail&& value) { SetDeleteCollectionDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeleteCollectionDetail m_deleteCollectionDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
