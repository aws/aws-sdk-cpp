/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/TrafficPolicy.h>
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
   * <p>A complex type that contains the response information for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetTrafficPolicyResponse">AWS
   * API Reference</a></p>
   */
  class GetTrafficPolicyResult
  {
  public:
    AWS_ROUTE53_API GetTrafficPolicyResult();
    AWS_ROUTE53_API GetTrafficPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetTrafficPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains settings for the specified traffic policy.</p>
     */
    inline const TrafficPolicy& GetTrafficPolicy() const{ return m_trafficPolicy; }

    /**
     * <p>A complex type that contains settings for the specified traffic policy.</p>
     */
    inline void SetTrafficPolicy(const TrafficPolicy& value) { m_trafficPolicy = value; }

    /**
     * <p>A complex type that contains settings for the specified traffic policy.</p>
     */
    inline void SetTrafficPolicy(TrafficPolicy&& value) { m_trafficPolicy = std::move(value); }

    /**
     * <p>A complex type that contains settings for the specified traffic policy.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicy(const TrafficPolicy& value) { SetTrafficPolicy(value); return *this;}

    /**
     * <p>A complex type that contains settings for the specified traffic policy.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicy(TrafficPolicy&& value) { SetTrafficPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTrafficPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTrafficPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTrafficPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TrafficPolicy m_trafficPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
