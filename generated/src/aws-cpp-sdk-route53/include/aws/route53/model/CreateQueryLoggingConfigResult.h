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
  class CreateQueryLoggingConfigResult
  {
  public:
    AWS_ROUTE53_API CreateQueryLoggingConfigResult() = default;
    AWS_ROUTE53_API CreateQueryLoggingConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateQueryLoggingConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains the ID for a query logging configuration, the ID
     * of the hosted zone that you want to log queries for, and the ARN for the log
     * group that you want Amazon Route 53 to send query logs to.</p>
     */
    inline const QueryLoggingConfig& GetQueryLoggingConfig() const { return m_queryLoggingConfig; }
    template<typename QueryLoggingConfigT = QueryLoggingConfig>
    void SetQueryLoggingConfig(QueryLoggingConfigT&& value) { m_queryLoggingConfigHasBeenSet = true; m_queryLoggingConfig = std::forward<QueryLoggingConfigT>(value); }
    template<typename QueryLoggingConfigT = QueryLoggingConfig>
    CreateQueryLoggingConfigResult& WithQueryLoggingConfig(QueryLoggingConfigT&& value) { SetQueryLoggingConfig(std::forward<QueryLoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateQueryLoggingConfigResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateQueryLoggingConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryLoggingConfig m_queryLoggingConfig;
    bool m_queryLoggingConfigHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
