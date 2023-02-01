/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/SequenceStoreDetail.h>
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
  class ListSequenceStoresResult
  {
  public:
    AWS_OMICS_API ListSequenceStoresResult();
    AWS_OMICS_API ListSequenceStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListSequenceStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListSequenceStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListSequenceStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListSequenceStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of sequence stores.</p>
     */
    inline const Aws::Vector<SequenceStoreDetail>& GetSequenceStores() const{ return m_sequenceStores; }

    /**
     * <p>A list of sequence stores.</p>
     */
    inline void SetSequenceStores(const Aws::Vector<SequenceStoreDetail>& value) { m_sequenceStores = value; }

    /**
     * <p>A list of sequence stores.</p>
     */
    inline void SetSequenceStores(Aws::Vector<SequenceStoreDetail>&& value) { m_sequenceStores = std::move(value); }

    /**
     * <p>A list of sequence stores.</p>
     */
    inline ListSequenceStoresResult& WithSequenceStores(const Aws::Vector<SequenceStoreDetail>& value) { SetSequenceStores(value); return *this;}

    /**
     * <p>A list of sequence stores.</p>
     */
    inline ListSequenceStoresResult& WithSequenceStores(Aws::Vector<SequenceStoreDetail>&& value) { SetSequenceStores(std::move(value)); return *this;}

    /**
     * <p>A list of sequence stores.</p>
     */
    inline ListSequenceStoresResult& AddSequenceStores(const SequenceStoreDetail& value) { m_sequenceStores.push_back(value); return *this; }

    /**
     * <p>A list of sequence stores.</p>
     */
    inline ListSequenceStoresResult& AddSequenceStores(SequenceStoreDetail&& value) { m_sequenceStores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SequenceStoreDetail> m_sequenceStores;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
