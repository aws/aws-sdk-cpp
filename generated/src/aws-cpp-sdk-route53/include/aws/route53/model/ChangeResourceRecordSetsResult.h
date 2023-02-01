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
   * <p>A complex type containing the response for the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeResourceRecordSetsResponse">AWS
   * API Reference</a></p>
   */
  class ChangeResourceRecordSetsResult
  {
  public:
    AWS_ROUTE53_API ChangeResourceRecordSetsResult();
    AWS_ROUTE53_API ChangeResourceRecordSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ChangeResourceRecordSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains information about changes made to your hosted
     * zone.</p> <p>This element contains an ID that you use when performing a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>
     * action to get detailed information about the change.</p>
     */
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }

    /**
     * <p>A complex type that contains information about changes made to your hosted
     * zone.</p> <p>This element contains an ID that you use when performing a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>
     * action to get detailed information about the change.</p>
     */
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }

    /**
     * <p>A complex type that contains information about changes made to your hosted
     * zone.</p> <p>This element contains an ID that you use when performing a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>
     * action to get detailed information about the change.</p>
     */
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = std::move(value); }

    /**
     * <p>A complex type that contains information about changes made to your hosted
     * zone.</p> <p>This element contains an ID that you use when performing a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>
     * action to get detailed information about the change.</p>
     */
    inline ChangeResourceRecordSetsResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}

    /**
     * <p>A complex type that contains information about changes made to your hosted
     * zone.</p> <p>This element contains an ID that you use when performing a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>
     * action to get detailed information about the change.</p>
     */
    inline ChangeResourceRecordSetsResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(std::move(value)); return *this;}

  private:

    ChangeInfo m_changeInfo;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
