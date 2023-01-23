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
    AWS_OMICS_API ListAnnotationStoresResult();
    AWS_OMICS_API ListAnnotationStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListAnnotationStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of stores.</p>
     */
    inline const Aws::Vector<AnnotationStoreItem>& GetAnnotationStores() const{ return m_annotationStores; }

    /**
     * <p>A list of stores.</p>
     */
    inline void SetAnnotationStores(const Aws::Vector<AnnotationStoreItem>& value) { m_annotationStores = value; }

    /**
     * <p>A list of stores.</p>
     */
    inline void SetAnnotationStores(Aws::Vector<AnnotationStoreItem>&& value) { m_annotationStores = std::move(value); }

    /**
     * <p>A list of stores.</p>
     */
    inline ListAnnotationStoresResult& WithAnnotationStores(const Aws::Vector<AnnotationStoreItem>& value) { SetAnnotationStores(value); return *this;}

    /**
     * <p>A list of stores.</p>
     */
    inline ListAnnotationStoresResult& WithAnnotationStores(Aws::Vector<AnnotationStoreItem>&& value) { SetAnnotationStores(std::move(value)); return *this;}

    /**
     * <p>A list of stores.</p>
     */
    inline ListAnnotationStoresResult& AddAnnotationStores(const AnnotationStoreItem& value) { m_annotationStores.push_back(value); return *this; }

    /**
     * <p>A list of stores.</p>
     */
    inline ListAnnotationStoresResult& AddAnnotationStores(AnnotationStoreItem&& value) { m_annotationStores.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListAnnotationStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListAnnotationStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListAnnotationStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AnnotationStoreItem> m_annotationStores;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
