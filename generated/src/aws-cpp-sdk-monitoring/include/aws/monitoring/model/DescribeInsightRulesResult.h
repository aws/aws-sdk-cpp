/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/InsightRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class DescribeInsightRulesResult
  {
  public:
    AWS_CLOUDWATCH_API DescribeInsightRulesResult();
    AWS_CLOUDWATCH_API DescribeInsightRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeInsightRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline DescribeInsightRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline DescribeInsightRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline DescribeInsightRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The rules returned by the operation.</p>
     */
    inline const Aws::Vector<InsightRule>& GetInsightRules() const{ return m_insightRules; }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline void SetInsightRules(const Aws::Vector<InsightRule>& value) { m_insightRules = value; }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline void SetInsightRules(Aws::Vector<InsightRule>&& value) { m_insightRules = std::move(value); }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& WithInsightRules(const Aws::Vector<InsightRule>& value) { SetInsightRules(value); return *this;}

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& WithInsightRules(Aws::Vector<InsightRule>&& value) { SetInsightRules(std::move(value)); return *this;}

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& AddInsightRules(const InsightRule& value) { m_insightRules.push_back(value); return *this; }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& AddInsightRules(InsightRule&& value) { m_insightRules.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInsightRulesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInsightRulesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<InsightRule> m_insightRules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
