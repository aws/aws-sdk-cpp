/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/TrafficPolicyInstance.h>
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
    AWS_ROUTE53_API UpdateTrafficPolicyInstanceResult();
    AWS_ROUTE53_API UpdateTrafficPolicyInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API UpdateTrafficPolicyInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline const TrafficPolicyInstance& GetTrafficPolicyInstance() const{ return m_trafficPolicyInstance; }

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline void SetTrafficPolicyInstance(const TrafficPolicyInstance& value) { m_trafficPolicyInstance = value; }

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline void SetTrafficPolicyInstance(TrafficPolicyInstance&& value) { m_trafficPolicyInstance = std::move(value); }

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline UpdateTrafficPolicyInstanceResult& WithTrafficPolicyInstance(const TrafficPolicyInstance& value) { SetTrafficPolicyInstance(value); return *this;}

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline UpdateTrafficPolicyInstanceResult& WithTrafficPolicyInstance(TrafficPolicyInstance&& value) { SetTrafficPolicyInstance(std::move(value)); return *this;}

  private:

    TrafficPolicyInstance m_trafficPolicyInstance;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
