/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/PreParseTextTransformationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>A pre-parse text transformation that normalizes the raw query string before
 * WAF parses it into individual query arguments. Pre-parse text transformations
 * are only supported when <code>FieldToMatch</code> is
 * <code>SingleQueryArgument</code> or <code>AllQueryArguments</code>.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PreParseTextTransformation">AWS
 * API Reference</a></p>
 */
class PreParseTextTransformation {
 public:
  AWS_WAFV2_API PreParseTextTransformation() = default;
  AWS_WAFV2_API PreParseTextTransformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API PreParseTextTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sets the relative processing order for the pre-parse text transformations
   * that you define. WAF processes all transformations, from lowest priority value
   * to highest, before inspecting the transformed content. </p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline PreParseTextTransformation& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of pre-parse text transformation to apply to the raw query
   * string.</p>
   */
  inline PreParseTextTransformationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PreParseTextTransformationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PreParseTextTransformation& WithType(PreParseTextTransformationType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  int m_priority{0};

  PreParseTextTransformationType m_type{PreParseTextTransformationType::NOT_SET};
  bool m_priorityHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
