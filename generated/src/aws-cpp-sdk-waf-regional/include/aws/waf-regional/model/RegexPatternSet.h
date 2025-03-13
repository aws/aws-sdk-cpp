/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>The
   * <code>RegexPatternSet</code> specifies the regular expression (regex) pattern
   * that you want AWS WAF to search for, such as <code>B[a@]dB[o0]t</code>. You can
   * then configure AWS WAF to reject those requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexPatternSet">AWS
   * API Reference</a></p>
   */
  class RegexPatternSet
  {
  public:
    AWS_WAFREGIONAL_API RegexPatternSet() = default;
    AWS_WAFREGIONAL_API RegexPatternSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RegexPatternSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline const Aws::String& GetRegexPatternSetId() const { return m_regexPatternSetId; }
    inline bool RegexPatternSetIdHasBeenSet() const { return m_regexPatternSetIdHasBeenSet; }
    template<typename RegexPatternSetIdT = Aws::String>
    void SetRegexPatternSetId(RegexPatternSetIdT&& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = std::forward<RegexPatternSetIdT>(value); }
    template<typename RegexPatternSetIdT = Aws::String>
    RegexPatternSet& WithRegexPatternSetId(RegexPatternSetIdT&& value) { SetRegexPatternSetId(std::forward<RegexPatternSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RegexPatternSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegexPatternStrings() const { return m_regexPatternStrings; }
    inline bool RegexPatternStringsHasBeenSet() const { return m_regexPatternStringsHasBeenSet; }
    template<typename RegexPatternStringsT = Aws::Vector<Aws::String>>
    void SetRegexPatternStrings(RegexPatternStringsT&& value) { m_regexPatternStringsHasBeenSet = true; m_regexPatternStrings = std::forward<RegexPatternStringsT>(value); }
    template<typename RegexPatternStringsT = Aws::Vector<Aws::String>>
    RegexPatternSet& WithRegexPatternStrings(RegexPatternStringsT&& value) { SetRegexPatternStrings(std::forward<RegexPatternStringsT>(value)); return *this;}
    template<typename RegexPatternStringsT = Aws::String>
    RegexPatternSet& AddRegexPatternStrings(RegexPatternStringsT&& value) { m_regexPatternStringsHasBeenSet = true; m_regexPatternStrings.emplace_back(std::forward<RegexPatternStringsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_regexPatternSetId;
    bool m_regexPatternSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_regexPatternStrings;
    bool m_regexPatternStringsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
