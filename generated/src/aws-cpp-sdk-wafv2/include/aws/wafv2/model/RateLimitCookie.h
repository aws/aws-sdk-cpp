/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies a cookie as an aggregate key for a rate-based rule. Each distinct
   * value in the cookie contributes to the aggregation instance. If you use a single
   * cookie as your custom key, then each value fully defines an aggregation
   * instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitCookie">AWS
   * API Reference</a></p>
   */
  class RateLimitCookie
  {
  public:
    AWS_WAFV2_API RateLimitCookie() = default;
    AWS_WAFV2_API RateLimitCookie(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitCookie& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cookie to use. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RateLimitCookie& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    RateLimitCookie& WithTextTransformations(TextTransformationsT&& value) { SetTextTransformations(std::forward<TextTransformationsT>(value)); return *this;}
    template<typename TextTransformationsT = TextTransformation>
    RateLimitCookie& AddTextTransformations(TextTransformationsT&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.emplace_back(std::forward<TextTransformationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
