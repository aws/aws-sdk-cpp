/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZone.h>
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
   * <code>UpdateHostedZoneComment</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateHostedZoneCommentResponse">AWS
   * API Reference</a></p>
   */
  class UpdateHostedZoneCommentResult
  {
  public:
    AWS_ROUTE53_API UpdateHostedZoneCommentResult();
    AWS_ROUTE53_API UpdateHostedZoneCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API UpdateHostedZoneCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains the response to the
     * <code>UpdateHostedZoneComment</code> request.</p>
     */
    inline const HostedZone& GetHostedZone() const{ return m_hostedZone; }

    /**
     * <p>A complex type that contains the response to the
     * <code>UpdateHostedZoneComment</code> request.</p>
     */
    inline void SetHostedZone(const HostedZone& value) { m_hostedZone = value; }

    /**
     * <p>A complex type that contains the response to the
     * <code>UpdateHostedZoneComment</code> request.</p>
     */
    inline void SetHostedZone(HostedZone&& value) { m_hostedZone = std::move(value); }

    /**
     * <p>A complex type that contains the response to the
     * <code>UpdateHostedZoneComment</code> request.</p>
     */
    inline UpdateHostedZoneCommentResult& WithHostedZone(const HostedZone& value) { SetHostedZone(value); return *this;}

    /**
     * <p>A complex type that contains the response to the
     * <code>UpdateHostedZoneComment</code> request.</p>
     */
    inline UpdateHostedZoneCommentResult& WithHostedZone(HostedZone&& value) { SetHostedZone(std::move(value)); return *this;}

  private:

    HostedZone m_hostedZone;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
