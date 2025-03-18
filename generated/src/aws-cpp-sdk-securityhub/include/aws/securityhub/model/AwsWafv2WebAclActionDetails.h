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
    AWS_SECURITYHUB_API AwsWafv2WebAclActionDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2WebAclActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2WebAclActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies that WAF should allow requests by default. </p>
     */
    inline const AwsWafv2ActionAllowDetails& GetAllow() const { return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    template<typename AllowT = AwsWafv2ActionAllowDetails>
    void SetAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow = std::forward<AllowT>(value); }
    template<typename AllowT = AwsWafv2ActionAllowDetails>
    AwsWafv2WebAclActionDetails& WithAllow(AllowT&& value) { SetAllow(std::forward<AllowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies that WAF should block requests by default. </p>
     */
    inline const AwsWafv2ActionBlockDetails& GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    template<typename BlockT = AwsWafv2ActionBlockDetails>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = AwsWafv2ActionBlockDetails>
    AwsWafv2WebAclActionDetails& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    ///@}
  private:

    AwsWafv2ActionAllowDetails m_allow;
    bool m_allowHasBeenSet = false;

    AwsWafv2ActionBlockDetails m_block;
    bool m_blockHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
