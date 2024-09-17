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


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReferenceStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReferenceStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReferenceStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reference stores.</p>
     */
    inline const Aws::Vector<ReferenceStoreDetail>& GetReferenceStores() const{ return m_referenceStores; }
    inline void SetReferenceStores(const Aws::Vector<ReferenceStoreDetail>& value) { m_referenceStores = value; }
    inline void SetReferenceStores(Aws::Vector<ReferenceStoreDetail>&& value) { m_referenceStores = std::move(value); }
    inline ListReferenceStoresResult& WithReferenceStores(const Aws::Vector<ReferenceStoreDetail>& value) { SetReferenceStores(value); return *this;}
    inline ListReferenceStoresResult& WithReferenceStores(Aws::Vector<ReferenceStoreDetail>&& value) { SetReferenceStores(std::move(value)); return *this;}
    inline ListReferenceStoresResult& AddReferenceStores(const ReferenceStoreDetail& value) { m_referenceStores.push_back(value); return *this; }
    inline ListReferenceStoresResult& AddReferenceStores(ReferenceStoreDetail&& value) { m_referenceStores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReferenceStoresResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReferenceStoresResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReferenceStoresResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ReferenceStoreDetail> m_referenceStores;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
