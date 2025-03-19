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
    AWS_QUICKSIGHT_API TopicVisual() = default;
    AWS_QUICKSIGHT_API TopicVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visual ID for the <code>TopicVisual</code>.</p>
     */
    inline const Aws::String& GetVisualId() const { return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    template<typename VisualIdT = Aws::String>
    void SetVisualId(VisualIdT&& value) { m_visualIdHasBeenSet = true; m_visualId = std::forward<VisualIdT>(value); }
    template<typename VisualIdT = Aws::String>
    TopicVisual& WithVisualId(VisualIdT&& value) { SetVisualId(std::forward<VisualIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role for the <code>TopicVisual</code>.</p>
     */
    inline VisualRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(VisualRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline TopicVisual& WithRole(VisualRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ir for the <code>TopicVisual</code>.</p>
     */
    inline const TopicIR& GetIr() const { return m_ir; }
    inline bool IrHasBeenSet() const { return m_irHasBeenSet; }
    template<typename IrT = TopicIR>
    void SetIr(IrT&& value) { m_irHasBeenSet = true; m_ir = std::forward<IrT>(value); }
    template<typename IrT = TopicIR>
    TopicVisual& WithIr(IrT&& value) { SetIr(std::forward<IrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supporting visuals for the <code>TopicVisual</code>.</p>
     */
    inline const Aws::Vector<TopicVisual>& GetSupportingVisuals() const { return m_supportingVisuals; }
    inline bool SupportingVisualsHasBeenSet() const { return m_supportingVisualsHasBeenSet; }
    template<typename SupportingVisualsT = Aws::Vector<TopicVisual>>
    void SetSupportingVisuals(SupportingVisualsT&& value) { m_supportingVisualsHasBeenSet = true; m_supportingVisuals = std::forward<SupportingVisualsT>(value); }
    template<typename SupportingVisualsT = Aws::Vector<TopicVisual>>
    TopicVisual& WithSupportingVisuals(SupportingVisualsT&& value) { SetSupportingVisuals(std::forward<SupportingVisualsT>(value)); return *this;}
    template<typename SupportingVisualsT = TopicVisual>
    TopicVisual& AddSupportingVisuals(SupportingVisualsT&& value) { m_supportingVisualsHasBeenSet = true; m_supportingVisuals.emplace_back(std::forward<SupportingVisualsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualRole m_role{VisualRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    TopicIR m_ir;
    bool m_irHasBeenSet = false;

    Aws::Vector<TopicVisual> m_supportingVisuals;
    bool m_supportingVisualsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
