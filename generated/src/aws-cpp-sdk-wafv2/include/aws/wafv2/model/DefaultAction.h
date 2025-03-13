/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BlockAction.h>
#include <aws/wafv2/model/AllowAction.h>
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
   * <p>In a <a>WebACL</a>, this is the action that you want WAF to perform when a
   * web request doesn't match any of the rules in the <code>WebACL</code>. The
   * default action must be a terminating action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DefaultAction">AWS
   * API Reference</a></p>
   */
  class DefaultAction
  {
  public:
    AWS_WAFV2_API DefaultAction() = default;
    AWS_WAFV2_API DefaultAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API DefaultAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies that WAF should block requests by default. </p>
     */
    inline const BlockAction& GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    template<typename BlockT = BlockAction>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = BlockAction>
    DefaultAction& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that WAF should allow requests by default.</p>
     */
    inline const AllowAction& GetAllow() const { return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    template<typename AllowT = AllowAction>
    void SetAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow = std::forward<AllowT>(value); }
    template<typename AllowT = AllowAction>
    DefaultAction& WithAllow(AllowT&& value) { SetAllow(std::forward<AllowT>(value)); return *this;}
    ///@}
  private:

    BlockAction m_block;
    bool m_blockHasBeenSet = false;

    AllowAction m_allow;
    bool m_allowHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
