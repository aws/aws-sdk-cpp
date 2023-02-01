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
    AWS_WAFV2_API LabelNameCondition();
    AWS_WAFV2_API LabelNameCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LabelNameCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline const Aws::String& GetLabelName() const{ return m_labelName; }

    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline bool LabelNameHasBeenSet() const { return m_labelNameHasBeenSet; }

    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline void SetLabelName(const Aws::String& value) { m_labelNameHasBeenSet = true; m_labelName = value; }

    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline void SetLabelName(Aws::String&& value) { m_labelNameHasBeenSet = true; m_labelName = std::move(value); }

    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline void SetLabelName(const char* value) { m_labelNameHasBeenSet = true; m_labelName.assign(value); }

    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline LabelNameCondition& WithLabelName(const Aws::String& value) { SetLabelName(value); return *this;}

    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline LabelNameCondition& WithLabelName(Aws::String&& value) { SetLabelName(std::move(value)); return *this;}

    /**
     * <p>The label name that a log record must contain in order to meet the condition.
     * This must be a fully qualified label name. Fully qualified labels have a prefix,
     * optional namespaces, and label name. The prefix identifies the rule group or web
     * ACL context of the rule that added the label. </p>
     */
    inline LabelNameCondition& WithLabelName(const char* value) { SetLabelName(value); return *this;}

  private:

    Aws::String m_labelName;
    bool m_labelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
