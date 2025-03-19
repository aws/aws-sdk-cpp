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
    AWS_ROUTE53_API GetTrafficPolicyInstanceCountResult() = default;
    AWS_ROUTE53_API GetTrafficPolicyInstanceCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetTrafficPolicyInstanceCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The number of traffic policy instances that are associated with the current
     * Amazon Web Services account.</p>
     */
    inline int GetTrafficPolicyInstanceCount() const { return m_trafficPolicyInstanceCount; }
    inline void SetTrafficPolicyInstanceCount(int value) { m_trafficPolicyInstanceCountHasBeenSet = true; m_trafficPolicyInstanceCount = value; }
    inline GetTrafficPolicyInstanceCountResult& WithTrafficPolicyInstanceCount(int value) { SetTrafficPolicyInstanceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTrafficPolicyInstanceCountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_trafficPolicyInstanceCount{0};
    bool m_trafficPolicyInstanceCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
