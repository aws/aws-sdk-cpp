/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/BlockAction.h>
#include <aws/shield/model/CountAction.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
   * that it creates on behalf of the protected resource in response to DDoS attacks.
   * You specify this as part of the configuration for the automatic application
   * layer DDoS mitigation feature, when you enable or update automatic mitigation.
   * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
   * inside the web ACL that you have associated with the resource. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ResponseAction">AWS
   * API Reference</a></p>
   */
  class ResponseAction
  {
  public:
    AWS_SHIELD_API ResponseAction();
    AWS_SHIELD_API ResponseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API ResponseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Block</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline const BlockAction& GetBlock() const{ return m_block; }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Block</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Block</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline void SetBlock(const BlockAction& value) { m_blockHasBeenSet = true; m_block = value; }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Block</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline void SetBlock(BlockAction&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Block</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline ResponseAction& WithBlock(const BlockAction& value) { SetBlock(value); return *this;}

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Block</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline ResponseAction& WithBlock(BlockAction&& value) { SetBlock(std::move(value)); return *this;}


    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Count</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline const CountAction& GetCount() const{ return m_count; }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Count</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Count</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline void SetCount(const CountAction& value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Count</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline void SetCount(CountAction&& value) { m_countHasBeenSet = true; m_count = std::move(value); }

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Count</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline ResponseAction& WithCount(const CountAction& value) { SetCount(value); return *this;}

    /**
     * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
     * <code>Count</code> action. </p> <p>You must specify exactly one action, either
     * <code>Block</code> or <code>Count</code>.</p>
     */
    inline ResponseAction& WithCount(CountAction&& value) { SetCount(std::move(value)); return *this;}

  private:

    BlockAction m_block;
    bool m_blockHasBeenSet = false;

    CountAction m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
