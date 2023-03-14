/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListEnabledProductsForImportResult
  {
  public:
    AWS_SECURITYHUB_API ListEnabledProductsForImportResult();
    AWS_SECURITYHUB_API ListEnabledProductsForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListEnabledProductsForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProductSubscriptions() const{ return m_productSubscriptions; }

    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline void SetProductSubscriptions(const Aws::Vector<Aws::String>& value) { m_productSubscriptions = value; }

    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline void SetProductSubscriptions(Aws::Vector<Aws::String>&& value) { m_productSubscriptions = std::move(value); }

    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& WithProductSubscriptions(const Aws::Vector<Aws::String>& value) { SetProductSubscriptions(value); return *this;}

    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& WithProductSubscriptions(Aws::Vector<Aws::String>&& value) { SetProductSubscriptions(std::move(value)); return *this;}

    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& AddProductSubscriptions(const Aws::String& value) { m_productSubscriptions.push_back(value); return *this; }

    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& AddProductSubscriptions(Aws::String&& value) { m_productSubscriptions.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& AddProductSubscriptions(const char* value) { m_productSubscriptions.push_back(value); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListEnabledProductsForImportResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListEnabledProductsForImportResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListEnabledProductsForImportResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEnabledProductsForImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEnabledProductsForImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEnabledProductsForImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_productSubscriptions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
