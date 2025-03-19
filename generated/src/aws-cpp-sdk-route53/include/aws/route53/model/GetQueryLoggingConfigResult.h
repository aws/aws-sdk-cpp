/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/QueryLoggingConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetQueryLoggingConfigResult
  {
  public:
    AWS_ROUTE53_API GetQueryLoggingConfigResult() = default;
    AWS_ROUTE53_API GetQueryLoggingConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetQueryLoggingConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains information about the query logging
     * configuration that you specified in a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetQueryLoggingConfig.html">GetQueryLoggingConfig</a>
     * request.</p>
     */
    inline const QueryLoggingConfig& GetQueryLoggingConfig() const { return m_queryLoggingConfig; }
    template<typename QueryLoggingConfigT = QueryLoggingConfig>
    void SetQueryLoggingConfig(QueryLoggingConfigT&& value) { m_queryLoggingConfigHasBeenSet = true; m_queryLoggingConfig = std::forward<QueryLoggingConfigT>(value); }
    template<typename QueryLoggingConfigT = QueryLoggingConfig>
    GetQueryLoggingConfigResult& WithQueryLoggingConfig(QueryLoggingConfigT&& value) { SetQueryLoggingConfig(std::forward<QueryLoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryLoggingConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryLoggingConfig m_queryLoggingConfig;
    bool m_queryLoggingConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
