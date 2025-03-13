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
    AWS_PERSONALIZE_API Campaign() = default;
    AWS_PERSONALIZE_API Campaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Campaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Campaign& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline const Aws::String& GetCampaignArn() const { return m_campaignArn; }
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }
    template<typename CampaignArnT = Aws::String>
    void SetCampaignArn(CampaignArnT&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::forward<CampaignArnT>(value); }
    template<typename CampaignArnT = Aws::String>
    Campaign& WithCampaignArn(CampaignArnT&& value) { SetCampaignArn(std::forward<CampaignArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution version the campaign uses.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const { return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    template<typename SolutionVersionArnT = Aws::String>
    void SetSolutionVersionArn(SolutionVersionArnT&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::forward<SolutionVersionArnT>(value); }
    template<typename SolutionVersionArnT = Aws::String>
    Campaign& WithSolutionVersionArn(SolutionVersionArnT&& value) { SetSolutionVersionArn(std::forward<SolutionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second. A high <code>minProvisionedTPS</code> will increase your bill. We
     * recommend starting with 1 for <code>minProvisionedTPS</code> (the default).
     * Track your usage using Amazon CloudWatch metrics, and increase the
     * <code>minProvisionedTPS</code> as necessary.</p>
     */
    inline int GetMinProvisionedTPS() const { return m_minProvisionedTPS; }
    inline bool MinProvisionedTPSHasBeenSet() const { return m_minProvisionedTPSHasBeenSet; }
    inline void SetMinProvisionedTPS(int value) { m_minProvisionedTPSHasBeenSet = true; m_minProvisionedTPS = value; }
    inline Campaign& WithMinProvisionedTPS(int value) { SetMinProvisionedTPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline const CampaignConfig& GetCampaignConfig() const { return m_campaignConfig; }
    inline bool CampaignConfigHasBeenSet() const { return m_campaignConfigHasBeenSet; }
    template<typename CampaignConfigT = CampaignConfig>
    void SetCampaignConfig(CampaignConfigT&& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = std::forward<CampaignConfigT>(value); }
    template<typename CampaignConfigT = CampaignConfig>
    Campaign& WithCampaignConfig(CampaignConfigT&& value) { SetCampaignConfig(std::forward<CampaignConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the campaign.</p> <p>A campaign can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Campaign& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a campaign fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    Campaign& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the campaign was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    Campaign& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the campaign was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    Campaign& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CampaignUpdateSummary& GetLatestCampaignUpdate() const { return m_latestCampaignUpdate; }
    inline bool LatestCampaignUpdateHasBeenSet() const { return m_latestCampaignUpdateHasBeenSet; }
    template<typename LatestCampaignUpdateT = CampaignUpdateSummary>
    void SetLatestCampaignUpdate(LatestCampaignUpdateT&& value) { m_latestCampaignUpdateHasBeenSet = true; m_latestCampaignUpdate = std::forward<LatestCampaignUpdateT>(value); }
    template<typename LatestCampaignUpdateT = CampaignUpdateSummary>
    Campaign& WithLatestCampaignUpdate(LatestCampaignUpdateT&& value) { SetLatestCampaignUpdate(std::forward<LatestCampaignUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    int m_minProvisionedTPS{0};
    bool m_minProvisionedTPSHasBeenSet = false;

    CampaignConfig m_campaignConfig;
    bool m_campaignConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    CampaignUpdateSummary m_latestCampaignUpdate;
    bool m_latestCampaignUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
