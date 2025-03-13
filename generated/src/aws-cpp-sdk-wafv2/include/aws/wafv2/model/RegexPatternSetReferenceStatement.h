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
   * <p>A rule statement used to search web request components for matches with
   * regular expressions. To use this, create a <a>RegexPatternSet</a> that specifies
   * the expressions that you want to detect, then use the ARN of that set in this
   * statement. A web request matches the pattern set rule statement if the request
   * component matches any of the patterns in the set. To create a regex pattern set,
   * see <a>CreateRegexPatternSet</a>.</p> <p>Each regex pattern set rule statement
   * references a regex pattern set. You create and maintain the set independent of
   * your rules. This allows you to use the single set in multiple rules. When you
   * update the referenced set, WAF automatically updates all rules that reference
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RegexPatternSetReferenceStatement">AWS
   * API Reference</a></p>
   */
  class RegexPatternSetReferenceStatement
  {
  public:
    AWS_WAFV2_API RegexPatternSetReferenceStatement() = default;
    AWS_WAFV2_API RegexPatternSetReferenceStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RegexPatternSetReferenceStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a>RegexPatternSet</a> that this
     * statement references.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    RegexPatternSetReferenceStatement& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
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
    RegexPatternSetReferenceStatement& WithFieldToMatch(FieldToMatchT&& value) { SetFieldToMatch(std::forward<FieldToMatchT>(value)); return *this;}
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
    RegexPatternSetReferenceStatement& WithTextTransformations(TextTransformationsT&& value) { SetTextTransformations(std::forward<TextTransformationsT>(value)); return *this;}
    template<typename TextTransformationsT = TextTransformation>
    RegexPatternSetReferenceStatement& AddTextTransformations(TextTransformationsT&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.emplace_back(std::forward<TextTransformationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
