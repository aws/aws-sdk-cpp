/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceItem.h>
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
namespace SSM
{
namespace Model
{
  class ListComplianceItemsResult
  {
  public:
    AWS_SSM_API ListComplianceItemsResult();
    AWS_SSM_API ListComplianceItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListComplianceItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline const Aws::Vector<ComplianceItem>& GetComplianceItems() const{ return m_complianceItems; }

    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline void SetComplianceItems(const Aws::Vector<ComplianceItem>& value) { m_complianceItems = value; }

    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline void SetComplianceItems(Aws::Vector<ComplianceItem>&& value) { m_complianceItems = std::move(value); }

    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline ListComplianceItemsResult& WithComplianceItems(const Aws::Vector<ComplianceItem>& value) { SetComplianceItems(value); return *this;}

    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline ListComplianceItemsResult& WithComplianceItems(Aws::Vector<ComplianceItem>&& value) { SetComplianceItems(std::move(value)); return *this;}

    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline ListComplianceItemsResult& AddComplianceItems(const ComplianceItem& value) { m_complianceItems.push_back(value); return *this; }

    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline ListComplianceItemsResult& AddComplianceItems(ComplianceItem&& value) { m_complianceItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListComplianceItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListComplianceItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListComplianceItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListComplianceItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListComplianceItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListComplianceItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ComplianceItem> m_complianceItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
