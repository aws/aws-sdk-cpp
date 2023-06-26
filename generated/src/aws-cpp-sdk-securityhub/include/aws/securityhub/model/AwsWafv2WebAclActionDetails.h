/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafv2ActionAllowDetails.h>
#include <aws/securityhub/model/AwsWafv2ActionBlockDetails.h>
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
   * <p> Specifies the action that Amazon CloudFront or WAF takes when a web request
   * matches the conditions in the rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2WebAclActionDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2WebAclActionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2WebAclActionDetails();
    AWS_SECURITYHUB_API AwsWafv2WebAclActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2WebAclActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies that WAF should allow requests by default. </p>
     */
    inline const AwsWafv2ActionAllowDetails& GetAllow() const{ return m_allow; }

    /**
     * <p> Specifies that WAF should allow requests by default. </p>
     */
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }

    /**
     * <p> Specifies that WAF should allow requests by default. </p>
     */
    inline void SetAllow(const AwsWafv2ActionAllowDetails& value) { m_allowHasBeenSet = true; m_allow = value; }

    /**
     * <p> Specifies that WAF should allow requests by default. </p>
     */
    inline void SetAllow(AwsWafv2ActionAllowDetails&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }

    /**
     * <p> Specifies that WAF should allow requests by default. </p>
     */
    inline AwsWafv2WebAclActionDetails& WithAllow(const AwsWafv2ActionAllowDetails& value) { SetAllow(value); return *this;}

    /**
     * <p> Specifies that WAF should allow requests by default. </p>
     */
    inline AwsWafv2WebAclActionDetails& WithAllow(AwsWafv2ActionAllowDetails&& value) { SetAllow(std::move(value)); return *this;}


    /**
     * <p> Specifies that WAF should block requests by default. </p>
     */
    inline const AwsWafv2ActionBlockDetails& GetBlock() const{ return m_block; }

    /**
     * <p> Specifies that WAF should block requests by default. </p>
     */
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }

    /**
     * <p> Specifies that WAF should block requests by default. </p>
     */
    inline void SetBlock(const AwsWafv2ActionBlockDetails& value) { m_blockHasBeenSet = true; m_block = value; }

    /**
     * <p> Specifies that WAF should block requests by default. </p>
     */
    inline void SetBlock(AwsWafv2ActionBlockDetails&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }

    /**
     * <p> Specifies that WAF should block requests by default. </p>
     */
    inline AwsWafv2WebAclActionDetails& WithBlock(const AwsWafv2ActionBlockDetails& value) { SetBlock(value); return *this;}

    /**
     * <p> Specifies that WAF should block requests by default. </p>
     */
    inline AwsWafv2WebAclActionDetails& WithBlock(AwsWafv2ActionBlockDetails&& value) { SetBlock(std::move(value)); return *this;}

  private:

    AwsWafv2ActionAllowDetails m_allow;
    bool m_allowHasBeenSet = false;

    AwsWafv2ActionBlockDetails m_block;
    bool m_blockHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
