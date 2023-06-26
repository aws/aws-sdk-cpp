/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CreateCollectionDetail.h>
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
  class CreateCollectionResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionResult();
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the collection.</p>
     */
    inline const CreateCollectionDetail& GetCreateCollectionDetail() const{ return m_createCollectionDetail; }

    /**
     * <p>Details about the collection.</p>
     */
    inline void SetCreateCollectionDetail(const CreateCollectionDetail& value) { m_createCollectionDetail = value; }

    /**
     * <p>Details about the collection.</p>
     */
    inline void SetCreateCollectionDetail(CreateCollectionDetail&& value) { m_createCollectionDetail = std::move(value); }

    /**
     * <p>Details about the collection.</p>
     */
    inline CreateCollectionResult& WithCreateCollectionDetail(const CreateCollectionDetail& value) { SetCreateCollectionDetail(value); return *this;}

    /**
     * <p>Details about the collection.</p>
     */
    inline CreateCollectionResult& WithCreateCollectionDetail(CreateCollectionDetail&& value) { SetCreateCollectionDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CreateCollectionDetail m_createCollectionDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
