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
   * <p>A complex type that contains the response information for the
   * <code>CreateTrafficPolicyInstance</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyInstanceResponse">AWS
   * API Reference</a></p>
   */
  class CreateTrafficPolicyInstanceResult
  {
  public:
    AWS_ROUTE53_API CreateTrafficPolicyInstanceResult();
    AWS_ROUTE53_API CreateTrafficPolicyInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateTrafficPolicyInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains settings for the new traffic policy
     * instance.</p>
     */
    inline const TrafficPolicyInstance& GetTrafficPolicyInstance() const{ return m_trafficPolicyInstance; }

    /**
     * <p>A complex type that contains settings for the new traffic policy
     * instance.</p>
     */
    inline void SetTrafficPolicyInstance(const TrafficPolicyInstance& value) { m_trafficPolicyInstance = value; }

    /**
     * <p>A complex type that contains settings for the new traffic policy
     * instance.</p>
     */
    inline void SetTrafficPolicyInstance(TrafficPolicyInstance&& value) { m_trafficPolicyInstance = std::move(value); }

    /**
     * <p>A complex type that contains settings for the new traffic policy
     * instance.</p>
     */
    inline CreateTrafficPolicyInstanceResult& WithTrafficPolicyInstance(const TrafficPolicyInstance& value) { SetTrafficPolicyInstance(value); return *this;}

    /**
     * <p>A complex type that contains settings for the new traffic policy
     * instance.</p>
     */
    inline CreateTrafficPolicyInstanceResult& WithTrafficPolicyInstance(TrafficPolicyInstance&& value) { SetTrafficPolicyInstance(std::move(value)); return *this;}


    /**
     * <p>A unique URL that represents a new traffic policy instance.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A unique URL that represents a new traffic policy instance.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>A unique URL that represents a new traffic policy instance.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>A unique URL that represents a new traffic policy instance.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>A unique URL that represents a new traffic policy instance.</p>
     */
    inline CreateTrafficPolicyInstanceResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A unique URL that represents a new traffic policy instance.</p>
     */
    inline CreateTrafficPolicyInstanceResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A unique URL that represents a new traffic policy instance.</p>
     */
    inline CreateTrafficPolicyInstanceResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    TrafficPolicyInstance m_trafficPolicyInstance;

    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
