/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A single label name condition for a <a>Condition</a> in a logging
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/LabelNameCondition">AWS
   * API Reference</a></p>
   */
  class LabelNameCondition
  {
  public:
    AWS_WAFV2_API LabelNameCondition() = default;
    AWS_WAFV2_API LabelNameCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LabelNameCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline const Aws::String& GetLabelName() const { return m_labelName; }
    inline bool LabelNameHasBeenSet() const { return m_labelNameHasBeenSet; }
    template<typename LabelNameT = Aws::String>
    void SetLabelName(LabelNameT&& value) { m_labelNameHasBeenSet = true; m_labelName = std::forward<LabelNameT>(value); }
    template<typename LabelNameT = Aws::String>
    LabelNameCondition& WithLabelName(LabelNameT&& value) { SetLabelName(std::forward<LabelNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelName;
    bool m_labelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
