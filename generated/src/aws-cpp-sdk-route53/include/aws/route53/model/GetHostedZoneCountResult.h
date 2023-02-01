/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>

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
   * <p>A complex type that contains the response to a
   * <code>GetHostedZoneCount</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneCountResponse">AWS
   * API Reference</a></p>
   */
  class GetHostedZoneCountResult
  {
  public:
    AWS_ROUTE53_API GetHostedZoneCountResult();
    AWS_ROUTE53_API GetHostedZoneCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetHostedZoneCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The total number of public and private hosted zones that are associated with
     * the current Amazon Web Services account.</p>
     */
    inline long long GetHostedZoneCount() const{ return m_hostedZoneCount; }

    /**
     * <p>The total number of public and private hosted zones that are associated with
     * the current Amazon Web Services account.</p>
     */
    inline void SetHostedZoneCount(long long value) { m_hostedZoneCount = value; }

    /**
     * <p>The total number of public and private hosted zones that are associated with
     * the current Amazon Web Services account.</p>
     */
    inline GetHostedZoneCountResult& WithHostedZoneCount(long long value) { SetHostedZoneCount(value); return *this;}

  private:

    long long m_hostedZoneCount;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
