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
    AWS_WAFV2_API RegexMatchStatement();
    AWS_WAFV2_API RegexMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RegexMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string representing the regular expression.</p>
     */
    inline const Aws::String& GetRegexString() const{ return m_regexString; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(const Aws::String& value) { m_regexStringHasBeenSet = true; m_regexString = value; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(Aws::String&& value) { m_regexStringHasBeenSet = true; m_regexString = std::move(value); }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(const char* value) { m_regexStringHasBeenSet = true; m_regexString.assign(value); }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline RegexMatchStatement& WithRegexString(const Aws::String& value) { SetRegexString(value); return *this;}

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline RegexMatchStatement& WithRegexString(Aws::String&& value) { SetRegexString(std::move(value)); return *this;}

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline RegexMatchStatement& WithRegexString(const char* value) { SetRegexString(value); return *this;}


    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline RegexMatchStatement& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline RegexMatchStatement& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline const Aws::Vector<TextTransformation>& GetTextTransformations() const{ return m_textTransformations; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline bool TextTransformationsHasBeenSet() const { return m_textTransformationsHasBeenSet; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(const Aws::Vector<TextTransformation>& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = value; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(Aws::Vector<TextTransformation>&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = std::move(value); }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline RegexMatchStatement& WithTextTransformations(const Aws::Vector<TextTransformation>& value) { SetTextTransformations(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline RegexMatchStatement& WithTextTransformations(Aws::Vector<TextTransformation>&& value) { SetTextTransformations(std::move(value)); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline RegexMatchStatement& AddTextTransformations(const TextTransformation& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(value); return *this; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline RegexMatchStatement& AddTextTransformations(TextTransformation&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(std::move(value)); return *this; }

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
