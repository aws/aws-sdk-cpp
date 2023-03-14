/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/TrafficPolicyInstance.h>
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
   * <p>A complex type that contains information about the resource record sets that
   * Amazon Route 53 created based on a specified traffic policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetTrafficPolicyInstanceResponse">AWS
   * API Reference</a></p>
   */
  class GetTrafficPolicyInstanceResult
  {
  public:
    AWS_ROUTE53_API GetTrafficPolicyInstanceResult();
    AWS_ROUTE53_API GetTrafficPolicyInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetTrafficPolicyInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains settings for the traffic policy instance.</p>
     */
    inline const TrafficPolicyInstance& GetTrafficPolicyInstance() const{ return m_trafficPolicyInstance; }

    /**
     * <p>A complex type that contains settings for the traffic policy instance.</p>
     */
    inline void SetTrafficPolicyInstance(const TrafficPolicyInstance& value) { m_trafficPolicyInstance = value; }

    /**
     * <p>A complex type that contains settings for the traffic policy instance.</p>
     */
    inline void SetTrafficPolicyInstance(TrafficPolicyInstance&& value) { m_trafficPolicyInstance = std::move(value); }

    /**
     * <p>A complex type that contains settings for the traffic policy instance.</p>
     */
    inline GetTrafficPolicyInstanceResult& WithTrafficPolicyInstance(const TrafficPolicyInstance& value) { SetTrafficPolicyInstance(value); return *this;}

    /**
     * <p>A complex type that contains settings for the traffic policy instance.</p>
     */
    inline GetTrafficPolicyInstanceResult& WithTrafficPolicyInstance(TrafficPolicyInstance&& value) { SetTrafficPolicyInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTrafficPolicyInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTrafficPolicyInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTrafficPolicyInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TrafficPolicyInstance m_trafficPolicyInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
