/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/FieldToMatch.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/TextTransformation.h>
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
   * <p>A rule statement used to search web request components for a match against a
   * single regular expression. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RegexMatchStatement">AWS
   * API Reference</a></p>
   */
  class RegexMatchStatement
  {
  public:
    AWS_WAFV2_API RegexMatchStatement() = default;
    AWS_WAFV2_API RegexMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RegexMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RegexMatchStatement& WithRegexString(RegexStringT&& value) { SetRegexString(std::forward<RegexStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline const FieldToMatch& GetFieldToMatch() const { return m_fieldToMatch; }
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }
    template<typename FieldToMatchT = FieldToMatch>
    void SetFieldToMatch(FieldToMatchT&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::forward<FieldToMatchT>(value); }
    template<typename FieldToMatchT = FieldToMatch>
    RegexMatchStatement& WithFieldToMatch(FieldToMatchT&& value) { SetFieldToMatch(std::forward<FieldToMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. Text transformations are
     * used in rule match statements, to transform the <code>FieldToMatch</code>
     * request component before inspecting it, and they're used in rate-based rule
     * statements, to transform request components before using them as custom
     * aggregation keys. If you specify one or more transformations to apply, WAF
     * performs all transformations on the specified content, starting from the lowest
     * priority setting, and then uses the transformed component contents. </p>
     */
    inline const Aws::Vector<TextTransformation>& GetTextTransformations() const { return m_textTransformations; }
    inline bool TextTransformationsHasBeenSet() const { return m_textTransformationsHasBeenSet; }
    template<typename TextTransformationsT = Aws::Vector<TextTransformation>>
    void SetTextTransformations(TextTransformationsT&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = std::forward<TextTransformationsT>(value); }
    template<typename TextTransformationsT = Aws::Vector<TextTransformation>>
    RegexMatchStatement& WithTextTransformations(TextTransformationsT&& value) { SetTextTransformations(std::forward<TextTransformationsT>(value)); return *this;}
    template<typename TextTransformationsT = TextTransformation>
    RegexMatchStatement& AddTextTransformations(TextTransformationsT&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.emplace_back(std::forward<TextTransformationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet = false;

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
