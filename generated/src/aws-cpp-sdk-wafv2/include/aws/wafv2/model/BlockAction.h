/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CustomResponse.h>
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
   * <p>Specifies that WAF should block the request and optionally defines additional
   * custom handling for the response to the web request.</p> <p>This is used in the
   * context of other settings, for example to specify values for <a>RuleAction</a>
   * and web ACL <a>DefaultAction</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/BlockAction">AWS
   * API Reference</a></p>
   */
  class BlockAction
  {
  public:
    AWS_WAFV2_API BlockAction();
    AWS_WAFV2_API BlockAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API BlockAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines a custom response for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline const CustomResponse& GetCustomResponse() const{ return m_customResponse; }

    /**
     * <p>Defines a custom response for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline bool CustomResponseHasBeenSet() const { return m_customResponseHasBeenSet; }

    /**
     * <p>Defines a custom response for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomResponse(const CustomResponse& value) { m_customResponseHasBeenSet = true; m_customResponse = value; }

    /**
     * <p>Defines a custom response for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomResponse(CustomResponse&& value) { m_customResponseHasBeenSet = true; m_customResponse = std::move(value); }

    /**
     * <p>Defines a custom response for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline BlockAction& WithCustomResponse(const CustomResponse& value) { SetCustomResponse(value); return *this;}

    /**
     * <p>Defines a custom response for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline BlockAction& WithCustomResponse(CustomResponse&& value) { SetCustomResponse(std::move(value)); return *this;}

  private:

    CustomResponse m_customResponse;
    bool m_customResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
