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
   * <code>CreateTrafficPolicyVersion</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyVersionResponse">AWS
   * API Reference</a></p>
   */
  class CreateTrafficPolicyVersionResult
  {
  public:
    AWS_ROUTE53_API CreateTrafficPolicyVersionResult() = default;
    AWS_ROUTE53_API CreateTrafficPolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateTrafficPolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains settings for the new version of the traffic
     * policy.</p>
     */
    inline const TrafficPolicy& GetTrafficPolicy() const { return m_trafficPolicy; }
    template<typename TrafficPolicyT = TrafficPolicy>
    void SetTrafficPolicy(TrafficPolicyT&& value) { m_trafficPolicyHasBeenSet = true; m_trafficPolicy = std::forward<TrafficPolicyT>(value); }
    template<typename TrafficPolicyT = TrafficPolicy>
    CreateTrafficPolicyVersionResult& WithTrafficPolicy(TrafficPolicyT&& value) { SetTrafficPolicy(std::forward<TrafficPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique URL that represents a new traffic policy version.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateTrafficPolicyVersionResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTrafficPolicyVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TrafficPolicy m_trafficPolicy;
    bool m_trafficPolicyHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
