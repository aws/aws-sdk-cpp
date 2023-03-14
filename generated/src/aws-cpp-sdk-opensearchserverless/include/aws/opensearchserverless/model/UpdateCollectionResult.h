/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/UpdateCollectionDetail.h>
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
  class UpdateCollectionResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionResult();
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the updated collection.</p>
     */
    inline const UpdateCollectionDetail& GetUpdateCollectionDetail() const{ return m_updateCollectionDetail; }

    /**
     * <p>Details about the updated collection.</p>
     */
    inline void SetUpdateCollectionDetail(const UpdateCollectionDetail& value) { m_updateCollectionDetail = value; }

    /**
     * <p>Details about the updated collection.</p>
     */
    inline void SetUpdateCollectionDetail(UpdateCollectionDetail&& value) { m_updateCollectionDetail = std::move(value); }

    /**
     * <p>Details about the updated collection.</p>
     */
    inline UpdateCollectionResult& WithUpdateCollectionDetail(const UpdateCollectionDetail& value) { SetUpdateCollectionDetail(value); return *this;}

    /**
     * <p>Details about the updated collection.</p>
     */
    inline UpdateCollectionResult& WithUpdateCollectionDetail(UpdateCollectionDetail&& value) { SetUpdateCollectionDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    UpdateCollectionDetail m_updateCollectionDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
