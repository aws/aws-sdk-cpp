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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateTrafficPolicyInstanceResponse">AWS
   * API Reference</a></p>
   */
  class UpdateTrafficPolicyInstanceResult
  {
  public:
    AWS_ROUTE53_API UpdateTrafficPolicyInstanceResult() = default;
    AWS_ROUTE53_API UpdateTrafficPolicyInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API UpdateTrafficPolicyInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline const TrafficPolicyInstance& GetTrafficPolicyInstance() const { return m_trafficPolicyInstance; }
    template<typename TrafficPolicyInstanceT = TrafficPolicyInstance>
    void SetTrafficPolicyInstance(TrafficPolicyInstanceT&& value) { m_trafficPolicyInstanceHasBeenSet = true; m_trafficPolicyInstance = std::forward<TrafficPolicyInstanceT>(value); }
    template<typename TrafficPolicyInstanceT = TrafficPolicyInstance>
    UpdateTrafficPolicyInstanceResult& WithTrafficPolicyInstance(TrafficPolicyInstanceT&& value) { SetTrafficPolicyInstance(std::forward<TrafficPolicyInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateTrafficPolicyInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TrafficPolicyInstance m_trafficPolicyInstance;
    bool m_trafficPolicyInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
