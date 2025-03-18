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
    AWS_CLOUDWATCH_API DescribeInsightRulesResult() = default;
    AWS_CLOUDWATCH_API DescribeInsightRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeInsightRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If this parameter is present, it is a token that marks the start of the next
     * batch of returned results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInsightRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules returned by the operation.</p>
     */
    inline const Aws::Vector<InsightRule>& GetInsightRules() const { return m_insightRules; }
    template<typename InsightRulesT = Aws::Vector<InsightRule>>
    void SetInsightRules(InsightRulesT&& value) { m_insightRulesHasBeenSet = true; m_insightRules = std::forward<InsightRulesT>(value); }
    template<typename InsightRulesT = Aws::Vector<InsightRule>>
    DescribeInsightRulesResult& WithInsightRules(InsightRulesT&& value) { SetInsightRules(std::forward<InsightRulesT>(value)); return *this;}
    template<typename InsightRulesT = InsightRule>
    DescribeInsightRulesResult& AddInsightRules(InsightRulesT&& value) { m_insightRulesHasBeenSet = true; m_insightRules.emplace_back(std::forward<InsightRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInsightRulesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<InsightRule> m_insightRules;
    bool m_insightRulesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
