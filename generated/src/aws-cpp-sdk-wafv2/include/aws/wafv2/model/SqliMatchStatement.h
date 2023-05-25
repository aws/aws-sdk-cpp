/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FieldToMatch.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/SensitivityLevel.h>
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
   * <p>A rule statement that inspects for malicious SQL code. Attackers insert
   * malicious SQL code into web requests to do things like modify your database or
   * extract data from it. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SqliMatchStatement">AWS
   * API Reference</a></p>
   */
  class SqliMatchStatement
  {
  public:
    AWS_WAFV2_API SqliMatchStatement();
    AWS_WAFV2_API SqliMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API SqliMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SqliMatchStatement& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline SqliMatchStatement& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


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
    inline SqliMatchStatement& WithTextTransformations(const Aws::Vector<TextTransformation>& value) { SetTextTransformations(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SqliMatchStatement& WithTextTransformations(Aws::Vector<TextTransformation>&& value) { SetTextTransformations(std::move(value)); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SqliMatchStatement& AddTextTransformations(const TextTransformation& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(value); return *this; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SqliMatchStatement& AddTextTransformations(TextTransformation&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(std::move(value)); return *this; }


    /**
     * <p>The sensitivity that you want WAF to use to inspect for SQL injection
     * attacks. </p> <p> <code>HIGH</code> detects more attacks, but might generate
     * more false positives, especially if your web requests frequently contain unusual
     * strings. For information about identifying and mitigating false positives, see
     * <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-testing.html">Testing
     * and tuning</a> in the <i>WAF Developer Guide</i>.</p> <p> <code>LOW</code> is
     * generally a better choice for resources that already have other protections
     * against SQL injection attacks or that have a low tolerance for false positives.
     * </p> <p>Default: <code>LOW</code> </p>
     */
    inline const SensitivityLevel& GetSensitivityLevel() const{ return m_sensitivityLevel; }

    /**
     * <p>The sensitivity that you want WAF to use to inspect for SQL injection
     * attacks. </p> <p> <code>HIGH</code> detects more attacks, but might generate
     * more false positives, especially if your web requests frequently contain unusual
     * strings. For information about identifying and mitigating false positives, see
     * <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-testing.html">Testing
     * and tuning</a> in the <i>WAF Developer Guide</i>.</p> <p> <code>LOW</code> is
     * generally a better choice for resources that already have other protections
     * against SQL injection attacks or that have a low tolerance for false positives.
     * </p> <p>Default: <code>LOW</code> </p>
     */
    inline bool SensitivityLevelHasBeenSet() const { return m_sensitivityLevelHasBeenSet; }

    /**
     * <p>The sensitivity that you want WAF to use to inspect for SQL injection
     * attacks. </p> <p> <code>HIGH</code> detects more attacks, but might generate
     * more false positives, especially if your web requests frequently contain unusual
     * strings. For information about identifying and mitigating false positives, see
     * <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-testing.html">Testing
     * and tuning</a> in the <i>WAF Developer Guide</i>.</p> <p> <code>LOW</code> is
     * generally a better choice for resources that already have other protections
     * against SQL injection attacks or that have a low tolerance for false positives.
     * </p> <p>Default: <code>LOW</code> </p>
     */
    inline void SetSensitivityLevel(const SensitivityLevel& value) { m_sensitivityLevelHasBeenSet = true; m_sensitivityLevel = value; }

    /**
     * <p>The sensitivity that you want WAF to use to inspect for SQL injection
     * attacks. </p> <p> <code>HIGH</code> detects more attacks, but might generate
     * more false positives, especially if your web requests frequently contain unusual
     * strings. For information about identifying and mitigating false positives, see
     * <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-testing.html">Testing
     * and tuning</a> in the <i>WAF Developer Guide</i>.</p> <p> <code>LOW</code> is
     * generally a better choice for resources that already have other protections
     * against SQL injection attacks or that have a low tolerance for false positives.
     * </p> <p>Default: <code>LOW</code> </p>
     */
    inline void SetSensitivityLevel(SensitivityLevel&& value) { m_sensitivityLevelHasBeenSet = true; m_sensitivityLevel = std::move(value); }

    /**
     * <p>The sensitivity that you want WAF to use to inspect for SQL injection
     * attacks. </p> <p> <code>HIGH</code> detects more attacks, but might generate
     * more false positives, especially if your web requests frequently contain unusual
     * strings. For information about identifying and mitigating false positives, see
     * <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-testing.html">Testing
     * and tuning</a> in the <i>WAF Developer Guide</i>.</p> <p> <code>LOW</code> is
     * generally a better choice for resources that already have other protections
     * against SQL injection attacks or that have a low tolerance for false positives.
     * </p> <p>Default: <code>LOW</code> </p>
     */
    inline SqliMatchStatement& WithSensitivityLevel(const SensitivityLevel& value) { SetSensitivityLevel(value); return *this;}

    /**
     * <p>The sensitivity that you want WAF to use to inspect for SQL injection
     * attacks. </p> <p> <code>HIGH</code> detects more attacks, but might generate
     * more false positives, especially if your web requests frequently contain unusual
     * strings. For information about identifying and mitigating false positives, see
     * <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-testing.html">Testing
     * and tuning</a> in the <i>WAF Developer Guide</i>.</p> <p> <code>LOW</code> is
     * generally a better choice for resources that already have other protections
     * against SQL injection attacks or that have a low tolerance for false positives.
     * </p> <p>Default: <code>LOW</code> </p>
     */
    inline SqliMatchStatement& WithSensitivityLevel(SensitivityLevel&& value) { SetSensitivityLevel(std::move(value)); return *this;}

  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;

    SensitivityLevel m_sensitivityLevel;
    bool m_sensitivityLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
