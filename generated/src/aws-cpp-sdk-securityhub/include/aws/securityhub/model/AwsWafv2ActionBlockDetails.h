﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafv2CustomResponseDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies that WAF should block the request and optionally defines
   * additional custom handling for the response to the web request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2ActionBlockDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2ActionBlockDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2ActionBlockDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2ActionBlockDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2ActionBlockDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Defines a custom response for the web request. For information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline const AwsWafv2CustomResponseDetails& GetCustomResponse() const { return m_customResponse; }
    inline bool CustomResponseHasBeenSet() const { return m_customResponseHasBeenSet; }
    template<typename CustomResponseT = AwsWafv2CustomResponseDetails>
    void SetCustomResponse(CustomResponseT&& value) { m_customResponseHasBeenSet = true; m_customResponse = std::forward<CustomResponseT>(value); }
    template<typename CustomResponseT = AwsWafv2CustomResponseDetails>
    AwsWafv2ActionBlockDetails& WithCustomResponse(CustomResponseT&& value) { SetCustomResponse(std::forward<CustomResponseT>(value)); return *this;}
    ///@}
  private:

    AwsWafv2CustomResponseDetails m_customResponse;
    bool m_customResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
