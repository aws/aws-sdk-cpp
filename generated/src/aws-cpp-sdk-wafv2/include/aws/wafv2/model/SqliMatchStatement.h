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
    AWS_WAFV2_API SqliMatchStatement() = default;
    AWS_WAFV2_API SqliMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API SqliMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline const FieldToMatch& GetFieldToMatch() const { return m_fieldToMatch; }
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }
    template<typename FieldToMatchT = FieldToMatch>
    void SetFieldToMatch(FieldToMatchT&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::forward<FieldToMatchT>(value); }
    template<typename FieldToMatchT = FieldToMatch>
    SqliMatchStatement& WithFieldToMatch(FieldToMatchT&& value) { SetFieldToMatch(std::forward<FieldToMatchT>(value)); return *this;}
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
    SqliMatchStatement& WithTextTransformations(TextTransformationsT&& value) { SetTextTransformations(std::forward<TextTransformationsT>(value)); return *this;}
    template<typename TextTransformationsT = TextTransformation>
    SqliMatchStatement& AddTextTransformations(TextTransformationsT&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.emplace_back(std::forward<TextTransformationsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline SensitivityLevel GetSensitivityLevel() const { return m_sensitivityLevel; }
    inline bool SensitivityLevelHasBeenSet() const { return m_sensitivityLevelHasBeenSet; }
    inline void SetSensitivityLevel(SensitivityLevel value) { m_sensitivityLevelHasBeenSet = true; m_sensitivityLevel = value; }
    inline SqliMatchStatement& WithSensitivityLevel(SensitivityLevel value) { SetSensitivityLevel(value); return *this;}
    ///@}
  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;

    SensitivityLevel m_sensitivityLevel{SensitivityLevel::NOT_SET};
    bool m_sensitivityLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
