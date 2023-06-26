/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetTrafficPolicyInstanceCountResponse">AWS
   * API Reference</a></p>
   */
  class GetTrafficPolicyInstanceCountResult
  {
  public:
    AWS_ROUTE53_API GetTrafficPolicyInstanceCountResult();
    AWS_ROUTE53_API GetTrafficPolicyInstanceCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetTrafficPolicyInstanceCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The number of traffic policy instances that are associated with the current
     * Amazon Web Services account.</p>
     */
    inline int GetTrafficPolicyInstanceCount() const{ return m_trafficPolicyInstanceCount; }

    /**
     * <p>The number of traffic policy instances that are associated with the current
     * Amazon Web Services account.</p>
     */
    inline void SetTrafficPolicyInstanceCount(int value) { m_trafficPolicyInstanceCount = value; }

    /**
     * <p>The number of traffic policy instances that are associated with the current
     * Amazon Web Services account.</p>
     */
    inline GetTrafficPolicyInstanceCountResult& WithTrafficPolicyInstanceCount(int value) { SetTrafficPolicyInstanceCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTrafficPolicyInstanceCountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTrafficPolicyInstanceCountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTrafficPolicyInstanceCountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_trafficPolicyInstanceCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
