/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/IndexingRule.h>
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
namespace XRay
{
namespace Model
{
  class GetIndexingRulesResult
  {
  public:
    AWS_XRAY_API GetIndexingRulesResult();
    AWS_XRAY_API GetIndexingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetIndexingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Retrieves all indexing rules.</p>
     */
    inline const Aws::Vector<IndexingRule>& GetIndexingRules() const{ return m_indexingRules; }
    inline void SetIndexingRules(const Aws::Vector<IndexingRule>& value) { m_indexingRules = value; }
    inline void SetIndexingRules(Aws::Vector<IndexingRule>&& value) { m_indexingRules = std::move(value); }
    inline GetIndexingRulesResult& WithIndexingRules(const Aws::Vector<IndexingRule>& value) { SetIndexingRules(value); return *this;}
    inline GetIndexingRulesResult& WithIndexingRules(Aws::Vector<IndexingRule>&& value) { SetIndexingRules(std::move(value)); return *this;}
    inline GetIndexingRulesResult& AddIndexingRules(const IndexingRule& value) { m_indexingRules.push_back(value); return *this; }
    inline GetIndexingRulesResult& AddIndexingRules(IndexingRule&& value) { m_indexingRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify the pagination token returned by a previous request to retrieve the
     * next page of indexes. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetIndexingRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetIndexingRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetIndexingRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIndexingRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIndexingRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIndexingRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IndexingRule> m_indexingRules;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
