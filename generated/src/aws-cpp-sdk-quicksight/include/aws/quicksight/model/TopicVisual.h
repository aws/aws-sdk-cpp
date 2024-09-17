/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualRole.h>
#include <aws/quicksight/model/TopicIR.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for a <code>TopicVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicVisual">AWS
   * API Reference</a></p>
   */
  class TopicVisual
  {
  public:
    AWS_QUICKSIGHT_API TopicVisual();
    AWS_QUICKSIGHT_API TopicVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visual ID for the <code>TopicVisual</code>.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }
    inline TopicVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline TopicVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline TopicVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role for the <code>TopicVisual</code>.</p>
     */
    inline const VisualRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const VisualRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(VisualRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline TopicVisual& WithRole(const VisualRole& value) { SetRole(value); return *this;}
    inline TopicVisual& WithRole(VisualRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ir for the <code>TopicVisual</code>.</p>
     */
    inline const TopicIR& GetIr() const{ return m_ir; }
    inline bool IrHasBeenSet() const { return m_irHasBeenSet; }
    inline void SetIr(const TopicIR& value) { m_irHasBeenSet = true; m_ir = value; }
    inline void SetIr(TopicIR&& value) { m_irHasBeenSet = true; m_ir = std::move(value); }
    inline TopicVisual& WithIr(const TopicIR& value) { SetIr(value); return *this;}
    inline TopicVisual& WithIr(TopicIR&& value) { SetIr(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supporting visuals for the <code>TopicVisual</code>.</p>
     */
    inline const Aws::Vector<TopicVisual>& GetSupportingVisuals() const{ return m_supportingVisuals; }
    inline bool SupportingVisualsHasBeenSet() const { return m_supportingVisualsHasBeenSet; }
    inline void SetSupportingVisuals(const Aws::Vector<TopicVisual>& value) { m_supportingVisualsHasBeenSet = true; m_supportingVisuals = value; }
    inline void SetSupportingVisuals(Aws::Vector<TopicVisual>&& value) { m_supportingVisualsHasBeenSet = true; m_supportingVisuals = std::move(value); }
    inline TopicVisual& WithSupportingVisuals(const Aws::Vector<TopicVisual>& value) { SetSupportingVisuals(value); return *this;}
    inline TopicVisual& WithSupportingVisuals(Aws::Vector<TopicVisual>&& value) { SetSupportingVisuals(std::move(value)); return *this;}
    inline TopicVisual& AddSupportingVisuals(const TopicVisual& value) { m_supportingVisualsHasBeenSet = true; m_supportingVisuals.push_back(value); return *this; }
    inline TopicVisual& AddSupportingVisuals(TopicVisual&& value) { m_supportingVisualsHasBeenSet = true; m_supportingVisuals.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualRole m_role;
    bool m_roleHasBeenSet = false;

    TopicIR m_ir;
    bool m_irHasBeenSet = false;

    Aws::Vector<TopicVisual> m_supportingVisuals;
    bool m_supportingVisualsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
