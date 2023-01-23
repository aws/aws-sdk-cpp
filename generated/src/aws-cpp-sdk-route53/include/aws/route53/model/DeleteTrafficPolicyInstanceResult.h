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
   * <p>An empty element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteTrafficPolicyInstanceResponse">AWS
   * API Reference</a></p>
   */
  class DeleteTrafficPolicyInstanceResult
  {
  public:
    AWS_ROUTE53_API DeleteTrafficPolicyInstanceResult();
    AWS_ROUTE53_API DeleteTrafficPolicyInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API DeleteTrafficPolicyInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  };

} // namespace Model
} // namespace Route53
} // namespace Aws
