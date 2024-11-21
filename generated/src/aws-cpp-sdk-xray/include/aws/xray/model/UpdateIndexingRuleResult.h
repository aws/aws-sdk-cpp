/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/IndexingRule.h>
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
namespace XRay
{
namespace Model
{
  class UpdateIndexingRuleResult
  {
  public:
    AWS_XRAY_API UpdateIndexingRuleResult();
    AWS_XRAY_API UpdateIndexingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API UpdateIndexingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Updated indexing rule. </p>
     */
    inline const IndexingRule& GetIndexingRule() const{ return m_indexingRule; }
    inline void SetIndexingRule(const IndexingRule& value) { m_indexingRule = value; }
    inline void SetIndexingRule(IndexingRule&& value) { m_indexingRule = std::move(value); }
    inline UpdateIndexingRuleResult& WithIndexingRule(const IndexingRule& value) { SetIndexingRule(value); return *this;}
    inline UpdateIndexingRuleResult& WithIndexingRule(IndexingRule&& value) { SetIndexingRule(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateIndexingRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateIndexingRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateIndexingRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IndexingRule m_indexingRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
