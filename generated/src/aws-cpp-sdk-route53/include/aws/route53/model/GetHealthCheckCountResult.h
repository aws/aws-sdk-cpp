/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>

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
  /**
   * <p>A complex type that contains the response to a
   * <code>GetHealthCheckCount</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckCountResponse">AWS
   * API Reference</a></p>
   */
  class GetHealthCheckCountResult
  {
  public:
    AWS_ROUTE53_API GetHealthCheckCountResult();
    AWS_ROUTE53_API GetHealthCheckCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetHealthCheckCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The number of health checks associated with the current Amazon Web Services
     * account.</p>
     */
    inline long long GetHealthCheckCount() const{ return m_healthCheckCount; }

    /**
     * <p>The number of health checks associated with the current Amazon Web Services
     * account.</p>
     */
    inline void SetHealthCheckCount(long long value) { m_healthCheckCount = value; }

    /**
     * <p>The number of health checks associated with the current Amazon Web Services
     * account.</p>
     */
    inline GetHealthCheckCountResult& WithHealthCheckCount(long long value) { SetHealthCheckCount(value); return *this;}

  private:

    long long m_healthCheckCount;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
