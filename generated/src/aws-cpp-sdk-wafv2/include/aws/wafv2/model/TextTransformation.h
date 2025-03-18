/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/TextTransformationType.h>
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
   * <p>Text transformations eliminate some of the unusual formatting that attackers
   * use in web requests in an effort to bypass detection. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TextTransformation">AWS
   * API Reference</a></p>
   */
  class TextTransformation
  {
  public:
    AWS_WAFV2_API TextTransformation() = default;
    AWS_WAFV2_API TextTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API TextTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the relative processing order for multiple transformations. WAF
     * processes all transformations, from lowest priority to highest, before
     * inspecting the transformed content. The priorities don't need to be consecutive,
     * but they must all be different. </p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline TextTransformation& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For detailed descriptions of each of the transformation types, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-transformation.html">Text
     * transformations</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline TextTransformationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TextTransformationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TextTransformation& WithType(TextTransformationType value) { SetType(value); return *this;}
    ///@}
  private:

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    TextTransformationType m_type{TextTransformationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
