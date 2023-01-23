/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies a single rule in a rule group whose action you want to override to
   * <code>Count</code>. </p>  <p>Instead of this option, use
   * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
   * <code>Count</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ExcludedRule">AWS
   * API Reference</a></p>
   */
  class ExcludedRule
  {
  public:
    AWS_WAFV2_API ExcludedRule();
    AWS_WAFV2_API ExcludedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ExcludedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline ExcludedRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline ExcludedRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule whose action you want to override to
     * <code>Count</code>.</p>
     */
    inline ExcludedRule& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
