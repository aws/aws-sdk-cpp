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
    AWS_RESILIENCEHUB_API TestRecommendation();
    AWS_RESILIENCEHUB_API TestRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API TestRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the identifier of the AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentId() const{ return m_appComponentId; }
    inline bool AppComponentIdHasBeenSet() const { return m_appComponentIdHasBeenSet; }
    inline void SetAppComponentId(const Aws::String& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = value; }
    inline void SetAppComponentId(Aws::String&& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = std::move(value); }
    inline void SetAppComponentId(const char* value) { m_appComponentIdHasBeenSet = true; m_appComponentId.assign(value); }
    inline TestRecommendation& WithAppComponentId(const Aws::String& value) { SetAppComponentId(value); return *this;}
    inline TestRecommendation& WithAppComponentId(Aws::String&& value) { SetAppComponentId(std::move(value)); return *this;}
    inline TestRecommendation& WithAppComponentId(const char* value) { SetAppComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Application Component.</p>
     */
    inline const Aws::String& GetAppComponentName() const{ return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    inline void SetAppComponentName(const Aws::String& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = value; }
    inline void SetAppComponentName(Aws::String&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::move(value); }
    inline void SetAppComponentName(const char* value) { m_appComponentNameHasBeenSet = true; m_appComponentName.assign(value); }
    inline TestRecommendation& WithAppComponentName(const Aws::String& value) { SetAppComponentName(value); return *this;}
    inline TestRecommendation& WithAppComponentName(Aws::String&& value) { SetAppComponentName(std::move(value)); return *this;}
    inline TestRecommendation& WithAppComponentName(const char* value) { SetAppComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of recommended alarms that are used in the test and must be exported
     * before or with the test. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDependsOnAlarms() const{ return m_dependsOnAlarms; }
    inline bool DependsOnAlarmsHasBeenSet() const { return m_dependsOnAlarmsHasBeenSet; }
    inline void SetDependsOnAlarms(const Aws::Vector<Aws::String>& value) { m_dependsOnAlarmsHasBeenSet = true; m_dependsOnAlarms = value; }
    inline void SetDependsOnAlarms(Aws::Vector<Aws::String>&& value) { m_dependsOnAlarmsHasBeenSet = true; m_dependsOnAlarms = std::move(value); }
    inline TestRecommendation& WithDependsOnAlarms(const Aws::Vector<Aws::String>& value) { SetDependsOnAlarms(value); return *this;}
    inline TestRecommendation& WithDependsOnAlarms(Aws::Vector<Aws::String>&& value) { SetDependsOnAlarms(std::move(value)); return *this;}
    inline TestRecommendation& AddDependsOnAlarms(const Aws::String& value) { m_dependsOnAlarmsHasBeenSet = true; m_dependsOnAlarms.push_back(value); return *this; }
    inline TestRecommendation& AddDependsOnAlarms(Aws::String&& value) { m_dependsOnAlarmsHasBeenSet = true; m_dependsOnAlarms.push_back(std::move(value)); return *this; }
    inline TestRecommendation& AddDependsOnAlarms(const char* value) { m_dependsOnAlarmsHasBeenSet = true; m_dependsOnAlarms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description for the test recommendation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TestRecommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TestRecommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TestRecommendation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Intent of the test recommendation.</p>
     */
    inline const Aws::String& GetIntent() const{ return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    inline void SetIntent(const Aws::String& value) { m_intentHasBeenSet = true; m_intent = value; }
    inline void SetIntent(Aws::String&& value) { m_intentHasBeenSet = true; m_intent = std::move(value); }
    inline void SetIntent(const char* value) { m_intentHasBeenSet = true; m_intent.assign(value); }
    inline TestRecommendation& WithIntent(const Aws::String& value) { SetIntent(value); return *this;}
    inline TestRecommendation& WithIntent(Aws::String&& value) { SetIntent(std::move(value)); return *this;}
    inline TestRecommendation& WithIntent(const char* value) { SetIntent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test recommendation items.</p>
     */
    inline const Aws::Vector<RecommendationItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<RecommendationItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<RecommendationItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline TestRecommendation& WithItems(const Aws::Vector<RecommendationItem>& value) { SetItems(value); return *this;}
    inline TestRecommendation& WithItems(Aws::Vector<RecommendationItem>&& value) { SetItems(std::move(value)); return *this;}
    inline TestRecommendation& AddItems(const RecommendationItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline TestRecommendation& AddItems(RecommendationItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the test recommendation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TestRecommendation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TestRecommendation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TestRecommendation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prerequisite of the test recommendation.</p>
     */
    inline const Aws::String& GetPrerequisite() const{ return m_prerequisite; }
    inline bool PrerequisiteHasBeenSet() const { return m_prerequisiteHasBeenSet; }
    inline void SetPrerequisite(const Aws::String& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = value; }
    inline void SetPrerequisite(Aws::String&& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = std::move(value); }
    inline void SetPrerequisite(const char* value) { m_prerequisiteHasBeenSet = true; m_prerequisite.assign(value); }
    inline TestRecommendation& WithPrerequisite(const Aws::String& value) { SetPrerequisite(value); return *this;}
    inline TestRecommendation& WithPrerequisite(Aws::String&& value) { SetPrerequisite(std::move(value)); return *this;}
    inline TestRecommendation& WithPrerequisite(const char* value) { SetPrerequisite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the test recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline TestRecommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline TestRecommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline TestRecommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the recommended test.</p>
     */
    inline const RecommendationStatus& GetRecommendationStatus() const{ return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(const RecommendationStatus& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline void SetRecommendationStatus(RecommendationStatus&& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = std::move(value); }
    inline TestRecommendation& WithRecommendationStatus(const RecommendationStatus& value) { SetRecommendationStatus(value); return *this;}
    inline TestRecommendation& WithRecommendationStatus(RecommendationStatus&& value) { SetRecommendationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier for the test recommendation.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }
    inline TestRecommendation& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}
    inline TestRecommendation& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}
    inline TestRecommendation& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Level of risk for this test recommendation.</p>
     */
    inline const TestRisk& GetRisk() const{ return m_risk; }
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }
    inline void SetRisk(const TestRisk& value) { m_riskHasBeenSet = true; m_risk = value; }
    inline void SetRisk(TestRisk&& value) { m_riskHasBeenSet = true; m_risk = std::move(value); }
    inline TestRecommendation& WithRisk(const TestRisk& value) { SetRisk(value); return *this;}
    inline TestRecommendation& WithRisk(TestRisk&& value) { SetRisk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of test recommendation.</p>
     */
    inline const TestType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TestType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TestType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TestRecommendation& WithType(const TestType& value) { SetType(value); return *this;}
    inline TestRecommendation& WithType(TestType&& value) { SetType(std::move(value)); return *this;}
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

    RecommendationStatus m_recommendationStatus;
    bool m_recommendationStatusHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    TestRisk m_risk;
    bool m_riskHasBeenSet = false;

    TestType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
