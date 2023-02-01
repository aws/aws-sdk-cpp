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
    AWS_MIGRATIONHUBORCHESTRATOR_API MigrationWorkflowSummary();
    AWS_MIGRATIONHUBORCHESTRATOR_API MigrationWorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API MigrationWorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID of the template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline MigrationWorkflowSummary& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline MigrationWorkflowSummary& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline MigrationWorkflowSummary& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline const Aws::String& GetAdsApplicationConfigurationName() const{ return m_adsApplicationConfigurationName; }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline bool AdsApplicationConfigurationNameHasBeenSet() const { return m_adsApplicationConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationConfigurationName(const Aws::String& value) { m_adsApplicationConfigurationNameHasBeenSet = true; m_adsApplicationConfigurationName = value; }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationConfigurationName(Aws::String&& value) { m_adsApplicationConfigurationNameHasBeenSet = true; m_adsApplicationConfigurationName = std::move(value); }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationConfigurationName(const char* value) { m_adsApplicationConfigurationNameHasBeenSet = true; m_adsApplicationConfigurationName.assign(value); }

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline MigrationWorkflowSummary& WithAdsApplicationConfigurationName(const Aws::String& value) { SetAdsApplicationConfigurationName(value); return *this;}

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline MigrationWorkflowSummary& WithAdsApplicationConfigurationName(Aws::String&& value) { SetAdsApplicationConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline MigrationWorkflowSummary& WithAdsApplicationConfigurationName(const char* value) { SetAdsApplicationConfigurationName(value); return *this;}


    /**
     * <p>The status of the migration workflow.</p>
     */
    inline const MigrationWorkflowStatusEnum& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline void SetStatus(const MigrationWorkflowStatusEnum& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline void SetStatus(MigrationWorkflowStatusEnum&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithStatus(const MigrationWorkflowStatusEnum& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithStatus(MigrationWorkflowStatusEnum&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline MigrationWorkflowSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline MigrationWorkflowSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline MigrationWorkflowSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline MigrationWorkflowSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The steps completed in the migration workflow.</p>
     */
    inline int GetCompletedSteps() const{ return m_completedSteps; }

    /**
     * <p>The steps completed in the migration workflow.</p>
     */
    inline bool CompletedStepsHasBeenSet() const { return m_completedStepsHasBeenSet; }

    /**
     * <p>The steps completed in the migration workflow.</p>
     */
    inline void SetCompletedSteps(int value) { m_completedStepsHasBeenSet = true; m_completedSteps = value; }

    /**
     * <p>The steps completed in the migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithCompletedSteps(int value) { SetCompletedSteps(value); return *this;}


    /**
     * <p>All the steps in a migration workflow.</p>
     */
    inline int GetTotalSteps() const{ return m_totalSteps; }

    /**
     * <p>All the steps in a migration workflow.</p>
     */
    inline bool TotalStepsHasBeenSet() const { return m_totalStepsHasBeenSet; }

    /**
     * <p>All the steps in a migration workflow.</p>
     */
    inline void SetTotalSteps(int value) { m_totalStepsHasBeenSet = true; m_totalSteps = value; }

    /**
     * <p>All the steps in a migration workflow.</p>
     */
    inline MigrationWorkflowSummary& WithTotalSteps(int value) { SetTotalSteps(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_adsApplicationConfigurationName;
    bool m_adsApplicationConfigurationNameHasBeenSet = false;

    MigrationWorkflowStatusEnum m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_completedSteps;
    bool m_completedStepsHasBeenSet = false;

    int m_totalSteps;
    bool m_totalStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
