/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeInfo.h>
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
   * <p>A complex type that contains the response information for the disassociate
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DisassociateVPCFromHostedZoneResponse">AWS
   * API Reference</a></p>
   */
  class DisassociateVPCFromHostedZoneResult
  {
  public:
    AWS_ROUTE53_API DisassociateVPCFromHostedZoneResult();
    AWS_ROUTE53_API DisassociateVPCFromHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API DisassociateVPCFromHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that describes the changes made to the specified private
     * hosted zone.</p>
     */
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }

    /**
     * <p>A complex type that describes the changes made to the specified private
     * hosted zone.</p>
     */
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }

    /**
     * <p>A complex type that describes the changes made to the specified private
     * hosted zone.</p>
     */
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = std::move(value); }

    /**
     * <p>A complex type that describes the changes made to the specified private
     * hosted zone.</p>
     */
    inline DisassociateVPCFromHostedZoneResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}

    /**
     * <p>A complex type that describes the changes made to the specified private
     * hosted zone.</p>
     */
    inline DisassociateVPCFromHostedZoneResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(std::move(value)); return *this;}

  private:

    ChangeInfo m_changeInfo;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
