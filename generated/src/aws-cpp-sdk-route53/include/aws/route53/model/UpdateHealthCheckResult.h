/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheck.h>
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
  /**
   * <p>A complex type that contains the response to the
   * <code>UpdateHealthCheck</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateHealthCheckResponse">AWS
   * API Reference</a></p>
   */
  class UpdateHealthCheckResult
  {
  public:
    AWS_ROUTE53_API UpdateHealthCheckResult();
    AWS_ROUTE53_API UpdateHealthCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API UpdateHealthCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains the response to an
     * <code>UpdateHealthCheck</code> request.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>A complex type that contains the response to an
     * <code>UpdateHealthCheck</code> request.</p>
     */
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheck = value; }

    /**
     * <p>A complex type that contains the response to an
     * <code>UpdateHealthCheck</code> request.</p>
     */
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheck = std::move(value); }

    /**
     * <p>A complex type that contains the response to an
     * <code>UpdateHealthCheck</code> request.</p>
     */
    inline UpdateHealthCheckResult& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>A complex type that contains the response to an
     * <code>UpdateHealthCheck</code> request.</p>
     */
    inline UpdateHealthCheckResult& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateHealthCheckResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateHealthCheckResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateHealthCheckResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    HealthCheck m_healthCheck;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
