/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ChoiceContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/AdditionalResources.h>
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
   * <p>A choice available to answer question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Choice">AWS
   * API Reference</a></p>
   */
  class Choice
  {
  public:
    AWS_WELLARCHITECTED_API Choice() = default;
    AWS_WELLARCHITECTED_API Choice(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Choice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetChoiceId() const { return m_choiceId; }
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }
    template<typename ChoiceIdT = Aws::String>
    void SetChoiceId(ChoiceIdT&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::forward<ChoiceIdT>(value); }
    template<typename ChoiceIdT = Aws::String>
    Choice& WithChoiceId(ChoiceIdT&& value) { SetChoiceId(std::forward<ChoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Choice& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Choice& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The helpful resource (both text and URL) for a particular choice.</p> <p>This
     * field only applies to custom lenses. Each choice can have only one helpful
     * resource.</p>
     */
    inline const ChoiceContent& GetHelpfulResource() const { return m_helpfulResource; }
    inline bool HelpfulResourceHasBeenSet() const { return m_helpfulResourceHasBeenSet; }
    template<typename HelpfulResourceT = ChoiceContent>
    void SetHelpfulResource(HelpfulResourceT&& value) { m_helpfulResourceHasBeenSet = true; m_helpfulResource = std::forward<HelpfulResourceT>(value); }
    template<typename HelpfulResourceT = ChoiceContent>
    Choice& WithHelpfulResource(HelpfulResourceT&& value) { SetHelpfulResource(std::forward<HelpfulResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The improvement plan (both text and URL) for a particular choice.</p> <p>This
     * field only applies to custom lenses. Each choice can have only one improvement
     * plan.</p>
     */
    inline const ChoiceContent& GetImprovementPlan() const { return m_improvementPlan; }
    inline bool ImprovementPlanHasBeenSet() const { return m_improvementPlanHasBeenSet; }
    template<typename ImprovementPlanT = ChoiceContent>
    void SetImprovementPlan(ImprovementPlanT&& value) { m_improvementPlanHasBeenSet = true; m_improvementPlan = std::forward<ImprovementPlanT>(value); }
    template<typename ImprovementPlanT = ChoiceContent>
    Choice& WithImprovementPlan(ImprovementPlanT&& value) { SetImprovementPlan(std::forward<ImprovementPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional resources for a choice in a custom lens.</p> <p>A choice can
     * have up to two additional resources: one of type <code>HELPFUL_RESOURCE</code>,
     * one of type <code>IMPROVEMENT_PLAN</code>, or both.</p>
     */
    inline const Aws::Vector<AdditionalResources>& GetAdditionalResources() const { return m_additionalResources; }
    inline bool AdditionalResourcesHasBeenSet() const { return m_additionalResourcesHasBeenSet; }
    template<typename AdditionalResourcesT = Aws::Vector<AdditionalResources>>
    void SetAdditionalResources(AdditionalResourcesT&& value) { m_additionalResourcesHasBeenSet = true; m_additionalResources = std::forward<AdditionalResourcesT>(value); }
    template<typename AdditionalResourcesT = Aws::Vector<AdditionalResources>>
    Choice& WithAdditionalResources(AdditionalResourcesT&& value) { SetAdditionalResources(std::forward<AdditionalResourcesT>(value)); return *this;}
    template<typename AdditionalResourcesT = AdditionalResources>
    Choice& AddAdditionalResources(AdditionalResourcesT&& value) { m_additionalResourcesHasBeenSet = true; m_additionalResources.emplace_back(std::forward<AdditionalResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ChoiceContent m_helpfulResource;
    bool m_helpfulResourceHasBeenSet = false;

    ChoiceContent m_improvementPlan;
    bool m_improvementPlanHasBeenSet = false;

    Aws::Vector<AdditionalResources> m_additionalResources;
    bool m_additionalResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
