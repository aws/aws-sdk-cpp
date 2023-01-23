/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/WebACL.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{
  class GetWebACLForResourceResult
  {
  public:
    AWS_WAFV2_API GetWebACLForResourceResult();
    AWS_WAFV2_API GetWebACLForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetWebACLForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The web ACL that is associated with the resource. If there is no associated
     * resource, WAF returns a null web ACL.</p>
     */
    inline const WebACL& GetWebACL() const{ return m_webACL; }

    /**
     * <p>The web ACL that is associated with the resource. If there is no associated
     * resource, WAF returns a null web ACL.</p>
     */
    inline void SetWebACL(const WebACL& value) { m_webACL = value; }

    /**
     * <p>The web ACL that is associated with the resource. If there is no associated
     * resource, WAF returns a null web ACL.</p>
     */
    inline void SetWebACL(WebACL&& value) { m_webACL = std::move(value); }

    /**
     * <p>The web ACL that is associated with the resource. If there is no associated
     * resource, WAF returns a null web ACL.</p>
     */
    inline GetWebACLForResourceResult& WithWebACL(const WebACL& value) { SetWebACL(value); return *this;}

    /**
     * <p>The web ACL that is associated with the resource. If there is no associated
     * resource, WAF returns a null web ACL.</p>
     */
    inline GetWebACLForResourceResult& WithWebACL(WebACL&& value) { SetWebACL(std::move(value)); return *this;}

  private:

    WebACL m_webACL;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
