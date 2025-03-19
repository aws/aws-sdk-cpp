/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/RecommendationStatus.h>
#include <aws/resiliencehub/model/AlarmType.h>
#include <aws/resiliencehub/model/RecommendationItem.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a recommendation for a CloudWatch alarm.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AlarmRecommendation">AWS
   * API Reference</a></p>
   */
  class AlarmRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API AlarmRecommendation() = default;
    AWS_RESILIENCEHUB_API AlarmRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AlarmRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of Application Component names for the CloudWatch alarm
     * recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppComponentNames() const { return m_appComponentNames; }
    inline bool AppComponentNamesHasBeenSet() const { return m_appComponentNamesHasBeenSet; }
    template<typename AppComponentNamesT = Aws::Vector<Aws::String>>
    void SetAppComponentNames(AppComponentNamesT&& value) { m_appComponentNamesHasBeenSet = true; m_appComponentNames = std::forward<AppComponentNamesT>(value); }
    template<typename AppComponentNamesT = Aws::Vector<Aws::String>>
    AlarmRecommendation& WithAppComponentNames(AppComponentNamesT&& value) { SetAppComponentNames(std::forward<AppComponentNamesT>(value)); return *this;}
    template<typename AppComponentNamesT = Aws::String>
    AlarmRecommendation& AddAppComponentNames(AppComponentNamesT&& value) { m_appComponentNamesHasBeenSet = true; m_appComponentNames.emplace_back(std::forward<AppComponentNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description of the alarm recommendation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AlarmRecommendation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of CloudWatch alarm recommendations.</p>
     */
    inline const Aws::Vector<RecommendationItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<RecommendationItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<RecommendationItem>>
    AlarmRecommendation& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = RecommendationItem>
    AlarmRecommendation& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the alarm recommendation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AlarmRecommendation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline const Aws::String& GetPrerequisite() const { return m_prerequisite; }
    inline bool PrerequisiteHasBeenSet() const { return m_prerequisiteHasBeenSet; }
    template<typename PrerequisiteT = Aws::String>
    void SetPrerequisite(PrerequisiteT&& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = std::forward<PrerequisiteT>(value); }
    template<typename PrerequisiteT = Aws::String>
    AlarmRecommendation& WithPrerequisite(PrerequisiteT&& value) { SetPrerequisite(std::forward<PrerequisiteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the alarm recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    AlarmRecommendation& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the recommended Amazon CloudWatch alarm.</p>
     */
    inline RecommendationStatus GetRecommendationStatus() const { return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(RecommendationStatus value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline AlarmRecommendation& WithRecommendationStatus(RecommendationStatus value) { SetRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the alarm recommendation.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    AlarmRecommendation& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of alarm recommendation.</p>
     */
    inline AlarmType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AlarmType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AlarmRecommendation& WithType(AlarmType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_appComponentNames;
    bool m_appComponentNamesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<RecommendationItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_prerequisite;
    bool m_prerequisiteHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    RecommendationStatus m_recommendationStatus{RecommendationStatus::NOT_SET};
    bool m_recommendationStatusHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    AlarmType m_type{AlarmType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
