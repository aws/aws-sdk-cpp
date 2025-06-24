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
   * <p>A single regular expression. This is used in a <a>RegexPatternSet</a> and
   * also in the configuration for the Amazon Web Services Managed Rules rule group
   * <code>AWSManagedRulesAntiDDoSRuleSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Regex">AWS API
   * Reference</a></p>
   */
  class Regex
  {
  public:
    AWS_WAFV2_API Regex() = default;
    AWS_WAFV2_API Regex(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Regex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string representing the regular expression.</p>
     */
    inline const Aws::String& GetRegexString() const { return m_regexString; }
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }
    template<typename RegexStringT = Aws::String>
    void SetRegexString(RegexStringT&& value) { m_regexStringHasBeenSet = true; m_regexString = std::forward<RegexStringT>(value); }
    template<typename RegexStringT = Aws::String>
    Regex& WithRegexString(RegexStringT&& value) { SetRegexString(std::forward<RegexStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
