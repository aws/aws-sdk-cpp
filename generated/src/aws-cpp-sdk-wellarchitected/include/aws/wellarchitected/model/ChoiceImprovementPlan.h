/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The choice level improvement plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ChoiceImprovementPlan">AWS
   * API Reference</a></p>
   */
  class ChoiceImprovementPlan
  {
  public:
    AWS_WELLARCHITECTED_API ChoiceImprovementPlan() = default;
    AWS_WELLARCHITECTED_API ChoiceImprovementPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceImprovementPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetChoiceId() const { return m_choiceId; }
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }
    template<typename ChoiceIdT = Aws::String>
    void SetChoiceId(ChoiceIdT&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::forward<ChoiceIdT>(value); }
    template<typename ChoiceIdT = Aws::String>
    ChoiceImprovementPlan& WithChoiceId(ChoiceIdT&& value) { SetChoiceId(std::forward<ChoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline const Aws::String& GetDisplayText() const { return m_displayText; }
    inline bool DisplayTextHasBeenSet() const { return m_displayTextHasBeenSet; }
    template<typename DisplayTextT = Aws::String>
    void SetDisplayText(DisplayTextT&& value) { m_displayTextHasBeenSet = true; m_displayText = std::forward<DisplayTextT>(value); }
    template<typename DisplayTextT = Aws::String>
    ChoiceImprovementPlan& WithDisplayText(DisplayTextT&& value) { SetDisplayText(std::forward<DisplayTextT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetImprovementPlanUrl() const { return m_improvementPlanUrl; }
    inline bool ImprovementPlanUrlHasBeenSet() const { return m_improvementPlanUrlHasBeenSet; }
    template<typename ImprovementPlanUrlT = Aws::String>
    void SetImprovementPlanUrl(ImprovementPlanUrlT&& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = std::forward<ImprovementPlanUrlT>(value); }
    template<typename ImprovementPlanUrlT = Aws::String>
    ChoiceImprovementPlan& WithImprovementPlanUrl(ImprovementPlanUrlT&& value) { SetImprovementPlanUrl(std::forward<ImprovementPlanUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    Aws::String m_displayText;
    bool m_displayTextHasBeenSet = false;

    Aws::String m_improvementPlanUrl;
    bool m_improvementPlanUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
