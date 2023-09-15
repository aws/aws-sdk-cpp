/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/AnnotationStoreVersionItem.h>
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
  class ListAnnotationStoreVersionsResult
  {
  public:
    AWS_OMICS_API ListAnnotationStoreVersionsResult();
    AWS_OMICS_API ListAnnotationStoreVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListAnnotationStoreVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline const Aws::Vector<AnnotationStoreVersionItem>& GetAnnotationStoreVersions() const{ return m_annotationStoreVersions; }

    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline void SetAnnotationStoreVersions(const Aws::Vector<AnnotationStoreVersionItem>& value) { m_annotationStoreVersions = value; }

    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline void SetAnnotationStoreVersions(Aws::Vector<AnnotationStoreVersionItem>&& value) { m_annotationStoreVersions = std::move(value); }

    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline ListAnnotationStoreVersionsResult& WithAnnotationStoreVersions(const Aws::Vector<AnnotationStoreVersionItem>& value) { SetAnnotationStoreVersions(value); return *this;}

    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline ListAnnotationStoreVersionsResult& WithAnnotationStoreVersions(Aws::Vector<AnnotationStoreVersionItem>&& value) { SetAnnotationStoreVersions(std::move(value)); return *this;}

    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline ListAnnotationStoreVersionsResult& AddAnnotationStoreVersions(const AnnotationStoreVersionItem& value) { m_annotationStoreVersions.push_back(value); return *this; }

    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline ListAnnotationStoreVersionsResult& AddAnnotationStoreVersions(AnnotationStoreVersionItem&& value) { m_annotationStoreVersions.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline ListAnnotationStoreVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline ListAnnotationStoreVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline ListAnnotationStoreVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAnnotationStoreVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAnnotationStoreVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAnnotationStoreVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnnotationStoreVersionItem> m_annotationStoreVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
