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
    AWS_SECURITYHUB_API AwsWafv2CustomRequestHandlingDetails();
    AWS_SECURITYHUB_API AwsWafv2CustomRequestHandlingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2CustomRequestHandlingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline const Aws::Vector<AwsWafv2CustomHttpHeader>& GetInsertHeaders() const{ return m_insertHeaders; }

    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline bool InsertHeadersHasBeenSet() const { return m_insertHeadersHasBeenSet; }

    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline void SetInsertHeaders(const Aws::Vector<AwsWafv2CustomHttpHeader>& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders = value; }

    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline void SetInsertHeaders(Aws::Vector<AwsWafv2CustomHttpHeader>&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders = std::move(value); }

    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline AwsWafv2CustomRequestHandlingDetails& WithInsertHeaders(const Aws::Vector<AwsWafv2CustomHttpHeader>& value) { SetInsertHeaders(value); return *this;}

    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline AwsWafv2CustomRequestHandlingDetails& WithInsertHeaders(Aws::Vector<AwsWafv2CustomHttpHeader>&& value) { SetInsertHeaders(std::move(value)); return *this;}

    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline AwsWafv2CustomRequestHandlingDetails& AddInsertHeaders(const AwsWafv2CustomHttpHeader& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders.push_back(value); return *this; }

    /**
     * <p> The HTTP headers to insert into the request. </p>
     */
    inline AwsWafv2CustomRequestHandlingDetails& AddInsertHeaders(AwsWafv2CustomHttpHeader&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsWafv2CustomHttpHeader> m_insertHeaders;
    bool m_insertHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
