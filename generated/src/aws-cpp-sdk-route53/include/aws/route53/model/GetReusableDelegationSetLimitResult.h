/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ReusableDelegationSetLimit.h>
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
   * <p>A complex type that contains the requested limit. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetLimitResponse">AWS
   * API Reference</a></p>
   */
  class GetReusableDelegationSetLimitResult
  {
  public:
    AWS_ROUTE53_API GetReusableDelegationSetLimitResult() = default;
    AWS_ROUTE53_API GetReusableDelegationSetLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetReusableDelegationSetLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current setting for the limit on hosted zones that you can associate with
     * the specified reusable delegation set.</p>
     */
    inline const ReusableDelegationSetLimit& GetLimit() const { return m_limit; }
    template<typename LimitT = ReusableDelegationSetLimit>
    void SetLimit(LimitT&& value) { m_limitHasBeenSet = true; m_limit = std::forward<LimitT>(value); }
    template<typename LimitT = ReusableDelegationSetLimit>
    GetReusableDelegationSetLimitResult& WithLimit(LimitT&& value) { SetLimit(std::forward<LimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of hosted zones that you can associate with the specified
     * reusable delegation set.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline GetReusableDelegationSetLimitResult& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReusableDelegationSetLimitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReusableDelegationSetLimit m_limit;
    bool m_limitHasBeenSet = false;

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
