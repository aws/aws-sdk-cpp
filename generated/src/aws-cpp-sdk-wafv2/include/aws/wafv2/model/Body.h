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
   * <p>Inspect the body of the web request. The body immediately follows the request
   * headers.</p> <p>This is used to indicate the web request component to inspect,
   * in the <a>FieldToMatch</a> specification. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Body">AWS API
   * Reference</a></p>
   */
  class Body
  {
  public:
    AWS_WAFV2_API Body();
    AWS_WAFV2_API Body(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Body& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline const OversizeHandling& GetOversizeHandling() const{ return m_oversizeHandling; }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline bool OversizeHandlingHasBeenSet() const { return m_oversizeHandlingHasBeenSet; }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline void SetOversizeHandling(const OversizeHandling& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = value; }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline void SetOversizeHandling(OversizeHandling&& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = std::move(value); }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline Body& WithOversizeHandling(const OversizeHandling& value) { SetOversizeHandling(value); return *this;}

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline Body& WithOversizeHandling(OversizeHandling&& value) { SetOversizeHandling(std::move(value)); return *this;}

  private:

    OversizeHandling m_oversizeHandling;
    bool m_oversizeHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
