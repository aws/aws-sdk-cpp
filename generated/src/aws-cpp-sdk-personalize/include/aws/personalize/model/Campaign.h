/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/CampaignConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/CampaignUpdateSummary.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>An object that describes the deployment of a solution version. For more
   * information on campaigns, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateCampaign.html">CreateCampaign</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Campaign">AWS
   * API Reference</a></p>
   */
  class Campaign
  {
  public:
    AWS_PERSONALIZE_API Campaign();
    AWS_PERSONALIZE_API Campaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Campaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Campaign& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Campaign& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Campaign& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }
    inline Campaign& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}
    inline Campaign& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}
    inline Campaign& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution version the campaign uses.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }
    inline Campaign& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline Campaign& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline Campaign& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second. A high <code>minProvisionedTPS</code> will increase your bill. We
     * recommend starting with 1 for <code>minProvisionedTPS</code> (the default).
     * Track your usage using Amazon CloudWatch metrics, and increase the
     * <code>minProvisionedTPS</code> as necessary.</p>
     */
    inline int GetMinProvisionedTPS() const{ return m_minProvisionedTPS; }
    inline bool MinProvisionedTPSHasBeenSet() const { return m_minProvisionedTPSHasBeenSet; }
    inline void SetMinProvisionedTPS(int value) { m_minProvisionedTPSHasBeenSet = true; m_minProvisionedTPS = value; }
    inline Campaign& WithMinProvisionedTPS(int value) { SetMinProvisionedTPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline const CampaignConfig& GetCampaignConfig() const{ return m_campaignConfig; }
    inline bool CampaignConfigHasBeenSet() const { return m_campaignConfigHasBeenSet; }
    inline void SetCampaignConfig(const CampaignConfig& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = value; }
    inline void SetCampaignConfig(CampaignConfig&& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = std::move(value); }
    inline Campaign& WithCampaignConfig(const CampaignConfig& value) { SetCampaignConfig(value); return *this;}
    inline Campaign& WithCampaignConfig(CampaignConfig&& value) { SetCampaignConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the campaign.</p> <p>A campaign can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Campaign& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Campaign& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Campaign& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a campaign fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline Campaign& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline Campaign& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline Campaign& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the campaign was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline Campaign& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline Campaign& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the campaign was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline Campaign& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline Campaign& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CampaignUpdateSummary& GetLatestCampaignUpdate() const{ return m_latestCampaignUpdate; }
    inline bool LatestCampaignUpdateHasBeenSet() const { return m_latestCampaignUpdateHasBeenSet; }
    inline void SetLatestCampaignUpdate(const CampaignUpdateSummary& value) { m_latestCampaignUpdateHasBeenSet = true; m_latestCampaignUpdate = value; }
    inline void SetLatestCampaignUpdate(CampaignUpdateSummary&& value) { m_latestCampaignUpdateHasBeenSet = true; m_latestCampaignUpdate = std::move(value); }
    inline Campaign& WithLatestCampaignUpdate(const CampaignUpdateSummary& value) { SetLatestCampaignUpdate(value); return *this;}
    inline Campaign& WithLatestCampaignUpdate(CampaignUpdateSummary&& value) { SetLatestCampaignUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    int m_minProvisionedTPS;
    bool m_minProvisionedTPSHasBeenSet = false;

    CampaignConfig m_campaignConfig;
    bool m_campaignConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    CampaignUpdateSummary m_latestCampaignUpdate;
    bool m_latestCampaignUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
