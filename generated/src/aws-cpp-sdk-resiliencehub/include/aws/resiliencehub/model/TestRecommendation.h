/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/RecommendationStatus.h>
#include <aws/resiliencehub/model/TestRisk.h>
#include <aws/resiliencehub/model/TestType.h>
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
   * <p>Defines a test recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/TestRecommendation">AWS
   * API Reference</a></p>
   */
  class TestRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API TestRecommendation() = default;
    AWS_RESILIENCEHUB_API TestRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API TestRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the identifier of the AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentId() const { return m_appComponentId; }
    inline bool AppComponentIdHasBeenSet() const { return m_appComponentIdHasBeenSet; }
    template<typename AppComponentIdT = Aws::String>
    void SetAppComponentId(AppComponentIdT&& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = std::forward<AppComponentIdT>(value); }
    template<typename AppComponentIdT = Aws::String>
    TestRecommendation& WithAppComponentId(AppComponentIdT&& value) { SetAppComponentId(std::forward<AppComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Application Component.</p>
     */
    inline const Aws::String& GetAppComponentName() const { return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    template<typename AppComponentNameT = Aws::String>
    void SetAppComponentName(AppComponentNameT&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::forward<AppComponentNameT>(value); }
    template<typename AppComponentNameT = Aws::String>
    TestRecommendation& WithAppComponentName(AppComponentNameT&& value) { SetAppComponentName(std::forward<AppComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of recommended alarms that are used in the test and must be exported
     * before or with the test. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDependsOnAlarms() const { return m_dependsOnAlarms; }
    inline bool DependsOnAlarmsHasBeenSet() const { return m_dependsOnAlarmsHasBeenSet; }
    template<typename DependsOnAlarmsT = Aws::Vector<Aws::String>>
    void SetDependsOnAlarms(DependsOnAlarmsT&& value) { m_dependsOnAlarmsHasBeenSet = true; m_dependsOnAlarms = std::forward<DependsOnAlarmsT>(value); }
    template<typename DependsOnAlarmsT = Aws::Vector<Aws::String>>
    TestRecommendation& WithDependsOnAlarms(DependsOnAlarmsT&& value) { SetDependsOnAlarms(std::forward<DependsOnAlarmsT>(value)); return *this;}
    template<typename DependsOnAlarmsT = Aws::String>
    TestRecommendation& AddDependsOnAlarms(DependsOnAlarmsT&& value) { m_dependsOnAlarmsHasBeenSet = true; m_dependsOnAlarms.emplace_back(std::forward<DependsOnAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description for the test recommendation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TestRecommendation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Intent of the test recommendation.</p>
     */
    inline const Aws::String& GetIntent() const { return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    template<typename IntentT = Aws::String>
    void SetIntent(IntentT&& value) { m_intentHasBeenSet = true; m_intent = std::forward<IntentT>(value); }
    template<typename IntentT = Aws::String>
    TestRecommendation& WithIntent(IntentT&& value) { SetIntent(std::forward<IntentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test recommendation items.</p>
     */
    inline const Aws::Vector<RecommendationItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<RecommendationItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<RecommendationItem>>
    TestRecommendation& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = RecommendationItem>
    TestRecommendation& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the test recommendation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TestRecommendation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prerequisite of the test recommendation.</p>
     */
    inline const Aws::String& GetPrerequisite() const { return m_prerequisite; }
    inline bool PrerequisiteHasBeenSet() const { return m_prerequisiteHasBeenSet; }
    template<typename PrerequisiteT = Aws::String>
    void SetPrerequisite(PrerequisiteT&& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = std::forward<PrerequisiteT>(value); }
    template<typename PrerequisiteT = Aws::String>
    TestRecommendation& WithPrerequisite(PrerequisiteT&& value) { SetPrerequisite(std::forward<PrerequisiteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the test recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    TestRecommendation& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the recommended test.</p>
     */
    inline RecommendationStatus GetRecommendationStatus() const { return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(RecommendationStatus value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline TestRecommendation& WithRecommendationStatus(RecommendationStatus value) { SetRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier for the test recommendation.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    TestRecommendation& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Level of risk for this test recommendation.</p>
     */
    inline TestRisk GetRisk() const { return m_risk; }
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }
    inline void SetRisk(TestRisk value) { m_riskHasBeenSet = true; m_risk = value; }
    inline TestRecommendation& WithRisk(TestRisk value) { SetRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of test recommendation.</p>
     */
    inline TestType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TestType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TestRecommendation& WithType(TestType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_appComponentId;
    bool m_appComponentIdHasBeenSet = false;

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependsOnAlarms;
    bool m_dependsOnAlarmsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_intent;
    bool m_intentHasBeenSet = false;

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

    TestRisk m_risk{TestRisk::NOT_SET};
    bool m_riskHasBeenSet = false;

    TestType m_type{TestType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
