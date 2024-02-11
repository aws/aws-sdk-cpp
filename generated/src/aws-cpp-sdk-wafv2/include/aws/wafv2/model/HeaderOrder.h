/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/OversizeHandling.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Inspect a string containing the list of the request's header names, ordered
   * as they appear in the web request that WAF receives for inspection. WAF
   * generates the string and then uses that as the field to match component in its
   * inspection. WAF separates the header names in the string using colons and no
   * added spaces, for example
   * <code>host:user-agent:accept:authorization:referer</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/HeaderOrder">AWS
   * API Reference</a></p>
   */
  class HeaderOrder
  {
  public:
    AWS_WAFV2_API HeaderOrder();
    AWS_WAFV2_API HeaderOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API HeaderOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>What WAF should do if the headers of the request are more numerous or larger
     * than WAF can inspect. WAF does not support inspecting the entire contents of
     * request headers when they exceed 8 KB (8192 bytes) or 200 total headers. The
     * underlying host service forwards a maximum of 200 headers and at most 8 KB of
     * header contents to WAF. </p> <p>The options for oversize handling are the
     * following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect the available
     * headers normally, according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     */
    inline const OversizeHandling& GetOversizeHandling() const{ return m_oversizeHandling; }

    /**
     * <p>What WAF should do if the headers of the request are more numerous or larger
     * than WAF can inspect. WAF does not support inspecting the entire contents of
     * request headers when they exceed 8 KB (8192 bytes) or 200 total headers. The
     * underlying host service forwards a maximum of 200 headers and at most 8 KB of
     * header contents to WAF. </p> <p>The options for oversize handling are the
     * following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect the available
     * headers normally, according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     */
    inline bool OversizeHandlingHasBeenSet() const { return m_oversizeHandlingHasBeenSet; }

    /**
     * <p>What WAF should do if the headers of the request are more numerous or larger
     * than WAF can inspect. WAF does not support inspecting the entire contents of
     * request headers when they exceed 8 KB (8192 bytes) or 200 total headers. The
     * underlying host service forwards a maximum of 200 headers and at most 8 KB of
     * header contents to WAF. </p> <p>The options for oversize handling are the
     * following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect the available
     * headers normally, according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     */
    inline void SetOversizeHandling(const OversizeHandling& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = value; }

    /**
     * <p>What WAF should do if the headers of the request are more numerous or larger
     * than WAF can inspect. WAF does not support inspecting the entire contents of
     * request headers when they exceed 8 KB (8192 bytes) or 200 total headers. The
     * underlying host service forwards a maximum of 200 headers and at most 8 KB of
     * header contents to WAF. </p> <p>The options for oversize handling are the
     * following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect the available
     * headers normally, according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     */
    inline void SetOversizeHandling(OversizeHandling&& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = std::move(value); }

    /**
     * <p>What WAF should do if the headers of the request are more numerous or larger
     * than WAF can inspect. WAF does not support inspecting the entire contents of
     * request headers when they exceed 8 KB (8192 bytes) or 200 total headers. The
     * underlying host service forwards a maximum of 200 headers and at most 8 KB of
     * header contents to WAF. </p> <p>The options for oversize handling are the
     * following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect the available
     * headers normally, according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     */
    inline HeaderOrder& WithOversizeHandling(const OversizeHandling& value) { SetOversizeHandling(value); return *this;}

    /**
     * <p>What WAF should do if the headers of the request are more numerous or larger
     * than WAF can inspect. WAF does not support inspecting the entire contents of
     * request headers when they exceed 8 KB (8192 bytes) or 200 total headers. The
     * underlying host service forwards a maximum of 200 headers and at most 8 KB of
     * header contents to WAF. </p> <p>The options for oversize handling are the
     * following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect the available
     * headers normally, according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     */
    inline HeaderOrder& WithOversizeHandling(OversizeHandling&& value) { SetOversizeHandling(std::move(value)); return *this;}

  private:

    OversizeHandling m_oversizeHandling;
    bool m_oversizeHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
