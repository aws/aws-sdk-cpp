/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/QueryLoggingConfig.h>
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
namespace Route53
{
namespace Model
{
  class ListQueryLoggingConfigsResult
  {
  public:
    AWS_ROUTE53_API ListQueryLoggingConfigsResult() = default;
    AWS_ROUTE53_API ListQueryLoggingConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListQueryLoggingConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<QueryLoggingConfig>& GetQueryLoggingConfigs() const { return m_queryLoggingConfigs; }
    template<typename QueryLoggingConfigsT = Aws::Vector<QueryLoggingConfig>>
    void SetQueryLoggingConfigs(QueryLoggingConfigsT&& value) { m_queryLoggingConfigsHasBeenSet = true; m_queryLoggingConfigs = std::forward<QueryLoggingConfigsT>(value); }
    template<typename QueryLoggingConfigsT = Aws::Vector<QueryLoggingConfig>>
    ListQueryLoggingConfigsResult& WithQueryLoggingConfigs(QueryLoggingConfigsT&& value) { SetQueryLoggingConfigs(std::forward<QueryLoggingConfigsT>(value)); return *this;}
    template<typename QueryLoggingConfigsT = QueryLoggingConfig>
    ListQueryLoggingConfigsResult& AddQueryLoggingConfigs(QueryLoggingConfigsT&& value) { m_queryLoggingConfigsHasBeenSet = true; m_queryLoggingConfigs.emplace_back(std::forward<QueryLoggingConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQueryLoggingConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQueryLoggingConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueryLoggingConfig> m_queryLoggingConfigs;
    bool m_queryLoggingConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
