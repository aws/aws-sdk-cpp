/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafv2CustomHttpHeader.h>
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
   * <p> Custom request handling behavior that inserts custom headers into a web
   * request. WAF uses custom request handling when the rule action doesn't block the
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2CustomRequestHandlingDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2CustomRequestHandlingDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2CustomRequestHandlingDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2CustomRequestHandlingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2CustomRequestHandlingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline const Aws::Vector<AwsWafv2CustomHttpHeader>& GetInsertHeaders() const { return m_insertHeaders; }
    inline bool InsertHeadersHasBeenSet() const { return m_insertHeadersHasBeenSet; }
    template<typename InsertHeadersT = Aws::Vector<AwsWafv2CustomHttpHeader>>
    void SetInsertHeaders(InsertHeadersT&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders = std::forward<InsertHeadersT>(value); }
    template<typename InsertHeadersT = Aws::Vector<AwsWafv2CustomHttpHeader>>
    AwsWafv2CustomRequestHandlingDetails& WithInsertHeaders(InsertHeadersT&& value) { SetInsertHeaders(std::forward<InsertHeadersT>(value)); return *this;}
    template<typename InsertHeadersT = AwsWafv2CustomHttpHeader>
    AwsWafv2CustomRequestHandlingDetails& AddInsertHeaders(InsertHeadersT&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders.emplace_back(std::forward<InsertHeadersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsWafv2CustomHttpHeader> m_insertHeaders;
    bool m_insertHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
