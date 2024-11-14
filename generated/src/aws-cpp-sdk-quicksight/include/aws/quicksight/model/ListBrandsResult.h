/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/BrandSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class ListBrandsResult
  {
  public:
    AWS_QUICKSIGHT_API ListBrandsResult();
    AWS_QUICKSIGHT_API ListBrandsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListBrandsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBrandsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBrandsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBrandsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all brands in your Amazon Web Services account. This structure
     * provides basic information about each brand.</p>
     */
    inline const Aws::Vector<BrandSummary>& GetBrands() const{ return m_brands; }
    inline void SetBrands(const Aws::Vector<BrandSummary>& value) { m_brands = value; }
    inline void SetBrands(Aws::Vector<BrandSummary>&& value) { m_brands = std::move(value); }
    inline ListBrandsResult& WithBrands(const Aws::Vector<BrandSummary>& value) { SetBrands(value); return *this;}
    inline ListBrandsResult& WithBrands(Aws::Vector<BrandSummary>&& value) { SetBrands(std::move(value)); return *this;}
    inline ListBrandsResult& AddBrands(const BrandSummary& value) { m_brands.push_back(value); return *this; }
    inline ListBrandsResult& AddBrands(BrandSummary&& value) { m_brands.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBrandsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBrandsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBrandsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<BrandSummary> m_brands;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
