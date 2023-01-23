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
    AWS_OMICS_API ListReferenceStoresResult();
    AWS_OMICS_API ListReferenceStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReferenceStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListReferenceStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReferenceStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReferenceStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of reference stores.</p>
     */
    inline const Aws::Vector<ReferenceStoreDetail>& GetReferenceStores() const{ return m_referenceStores; }

    /**
     * <p>A list of reference stores.</p>
     */
    inline void SetReferenceStores(const Aws::Vector<ReferenceStoreDetail>& value) { m_referenceStores = value; }

    /**
     * <p>A list of reference stores.</p>
     */
    inline void SetReferenceStores(Aws::Vector<ReferenceStoreDetail>&& value) { m_referenceStores = std::move(value); }

    /**
     * <p>A list of reference stores.</p>
     */
    inline ListReferenceStoresResult& WithReferenceStores(const Aws::Vector<ReferenceStoreDetail>& value) { SetReferenceStores(value); return *this;}

    /**
     * <p>A list of reference stores.</p>
     */
    inline ListReferenceStoresResult& WithReferenceStores(Aws::Vector<ReferenceStoreDetail>&& value) { SetReferenceStores(std::move(value)); return *this;}

    /**
     * <p>A list of reference stores.</p>
     */
    inline ListReferenceStoresResult& AddReferenceStores(const ReferenceStoreDetail& value) { m_referenceStores.push_back(value); return *this; }

    /**
     * <p>A list of reference stores.</p>
     */
    inline ListReferenceStoresResult& AddReferenceStores(ReferenceStoreDetail&& value) { m_referenceStores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReferenceStoreDetail> m_referenceStores;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
