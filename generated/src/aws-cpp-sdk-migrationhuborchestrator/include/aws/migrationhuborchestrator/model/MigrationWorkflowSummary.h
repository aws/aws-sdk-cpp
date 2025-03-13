/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <aws/core/utils/DateTime.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The summary of a migration workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/MigrationWorkflowSummary">AWS
   * API Reference</a></p>
   */
  class MigrationWorkflowSummary
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API MigrationWorkflowSummary() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API MigrationWorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API MigrationWorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MigrationWorkflowSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MigrationWorkflowSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    MigrationWorkflowSummary& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline const Aws::String& GetAdsApplicationConfigurationName() const { return m_adsApplicationConfigurationName; }
    inline bool AdsApplicationConfigurationNameHasBeenSet() const { return m_adsApplicationConfigurationNameHasBeenSet; }
    template<typename AdsApplicationConfigurationNameT = Aws::String>
    void SetAdsApplicationConfigurationName(AdsApplicationConfigurationNameT&& value) { m_adsApplicationConfigurationNameHasBeenSet = true; m_adsApplicationConfigurationName = std::forward<AdsApplicationConfigurationNameT>(value); }
    template<typename AdsApplicationConfigurationNameT = Aws::String>
    MigrationWorkflowSummary& WithAdsApplicationConfigurationName(AdsApplicationConfigurationNameT&& value) { SetAdsApplicationConfigurationName(std::forward<AdsApplicationConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the migration workflow.</p>
     */
    inline MigrationWorkflowStatusEnum GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MigrationWorkflowStatusEnum value) { m_statusHasBeenSet = true; m_status = value; }
    inline MigrationWorkflowSummary& WithStatus(MigrationWorkflowStatusEnum value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MigrationWorkflowSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    MigrationWorkflowSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    MigrationWorkflowSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The steps completed in the migration workflow.</p>
     */
    inline int GetCompletedSteps() const { return m_completedSteps; }
    inline bool CompletedStepsHasBeenSet() const { return m_completedStepsHasBeenSet; }
    inline void SetCompletedSteps(int value) { m_completedStepsHasBeenSet = true; m_completedSteps = value; }
    inline MigrationWorkflowSummary& WithCompletedSteps(int value) { SetCompletedSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All the steps in a migration workflow.</p>
     */
    inline int GetTotalSteps() const { return m_totalSteps; }
    inline bool TotalStepsHasBeenSet() const { return m_totalStepsHasBeenSet; }
    inline void SetTotalSteps(int value) { m_totalStepsHasBeenSet = true; m_totalSteps = value; }
    inline MigrationWorkflowSummary& WithTotalSteps(int value) { SetTotalSteps(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_adsApplicationConfigurationName;
    bool m_adsApplicationConfigurationNameHasBeenSet = false;

    MigrationWorkflowStatusEnum m_status{MigrationWorkflowStatusEnum::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_completedSteps{0};
    bool m_completedStepsHasBeenSet = false;

    int m_totalSteps{0};
    bool m_totalStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
