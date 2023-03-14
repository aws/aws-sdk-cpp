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
    AWS_ROUTE53_API GetQueryLoggingConfigResult();
    AWS_ROUTE53_API GetQueryLoggingConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetQueryLoggingConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains information about the query logging
     * configuration that you specified in a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetQueryLoggingConfig.html">GetQueryLoggingConfig</a>
     * request.</p>
     */
    inline const QueryLoggingConfig& GetQueryLoggingConfig() const{ return m_queryLoggingConfig; }

    /**
     * <p>A complex type that contains information about the query logging
     * configuration that you specified in a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetQueryLoggingConfig.html">GetQueryLoggingConfig</a>
     * request.</p>
     */
    inline void SetQueryLoggingConfig(const QueryLoggingConfig& value) { m_queryLoggingConfig = value; }

    /**
     * <p>A complex type that contains information about the query logging
     * configuration that you specified in a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetQueryLoggingConfig.html">GetQueryLoggingConfig</a>
     * request.</p>
     */
    inline void SetQueryLoggingConfig(QueryLoggingConfig&& value) { m_queryLoggingConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about the query logging
     * configuration that you specified in a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetQueryLoggingConfig.html">GetQueryLoggingConfig</a>
     * request.</p>
     */
    inline GetQueryLoggingConfigResult& WithQueryLoggingConfig(const QueryLoggingConfig& value) { SetQueryLoggingConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about the query logging
     * configuration that you specified in a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetQueryLoggingConfig.html">GetQueryLoggingConfig</a>
     * request.</p>
     */
    inline GetQueryLoggingConfigResult& WithQueryLoggingConfig(QueryLoggingConfig&& value) { SetQueryLoggingConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQueryLoggingConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQueryLoggingConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQueryLoggingConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    QueryLoggingConfig m_queryLoggingConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
