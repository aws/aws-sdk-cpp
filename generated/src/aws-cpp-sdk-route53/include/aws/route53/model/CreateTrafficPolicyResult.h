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
   * <code>CreateTrafficPolicy</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyResponse">AWS
   * API Reference</a></p>
   */
  class CreateTrafficPolicyResult
  {
  public:
    AWS_ROUTE53_API CreateTrafficPolicyResult();
    AWS_ROUTE53_API CreateTrafficPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateTrafficPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline const TrafficPolicy& GetTrafficPolicy() const{ return m_trafficPolicy; }

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline void SetTrafficPolicy(const TrafficPolicy& value) { m_trafficPolicy = value; }

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline void SetTrafficPolicy(TrafficPolicy&& value) { m_trafficPolicy = std::move(value); }

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithTrafficPolicy(const TrafficPolicy& value) { SetTrafficPolicy(value); return *this;}

    /**
     * <p>A complex type that contains settings for the new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithTrafficPolicy(TrafficPolicy&& value) { SetTrafficPolicy(std::move(value)); return *this;}


    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A unique URL that represents a new traffic policy.</p>
     */
    inline CreateTrafficPolicyResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    TrafficPolicy m_trafficPolicy;

    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
