/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
   * <p>Specifies the request's query string as an aggregate key for a rate-based
   * rule. Each distinct string contributes to the aggregation instance. If you use
   * just the query string as your custom key, then each string fully defines an
   * aggregation instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitQueryString">AWS
   * API Reference</a></p>
   */
  class RateLimitQueryString
  {
  public:
    AWS_WAFV2_API RateLimitQueryString();
    AWS_WAFV2_API RateLimitQueryString(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitQueryString& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::Vector<TextTransformation>& GetTextTransformations() const{ return m_textTransformations; }

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
    inline bool TextTransformationsHasBeenSet() const { return m_textTransformationsHasBeenSet; }

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
    inline void SetTextTransformations(const Aws::Vector<TextTransformation>& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = value; }

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
    inline void SetTextTransformations(Aws::Vector<TextTransformation>&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = std::move(value); }

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
    inline RateLimitQueryString& WithTextTransformations(const Aws::Vector<TextTransformation>& value) { SetTextTransformations(value); return *this;}

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
    inline RateLimitQueryString& WithTextTransformations(Aws::Vector<TextTransformation>&& value) { SetTextTransformations(std::move(value)); return *this;}

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
    inline RateLimitQueryString& AddTextTransformations(const TextTransformation& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(value); return *this; }

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
    inline RateLimitQueryString& AddTextTransformations(TextTransformation&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
