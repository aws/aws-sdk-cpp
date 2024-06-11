﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/CampaignConfig.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class UpdateCampaignRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API UpdateCampaignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaign"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }
    inline UpdateCampaignRequest& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}
    inline UpdateCampaignRequest& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}
    inline UpdateCampaignRequest& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a new model to deploy. To specify the
     * latest solution version of your solution, specify the ARN of your
     * <i>solution</i> in <code>SolutionArn/$LATEST</code> format. You must use this
     * format if you set <code>syncWithLatestSolutionVersion</code> to
     * <code>True</code> in the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CampaignConfig.html">CampaignConfig</a>.
     * </p> <p> To deploy a model that isn't the latest solution version of your
     * solution, specify the ARN of the solution version. </p> <p> For more information
     * about automatic campaign updates, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/campaigns.html#create-campaign-automatic-latest-sv-update">Enabling
     * automatic campaign updates</a>. </p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }
    inline UpdateCampaignRequest& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline UpdateCampaignRequest& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline UpdateCampaignRequest& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support. A high
     * <code>minProvisionedTPS</code> will increase your bill. We recommend starting
     * with 1 for <code>minProvisionedTPS</code> (the default). Track your usage using
     * Amazon CloudWatch metrics, and increase the <code>minProvisionedTPS</code> as
     * necessary.</p>
     */
    inline int GetMinProvisionedTPS() const{ return m_minProvisionedTPS; }
    inline bool MinProvisionedTPSHasBeenSet() const { return m_minProvisionedTPSHasBeenSet; }
    inline void SetMinProvisionedTPS(int value) { m_minProvisionedTPSHasBeenSet = true; m_minProvisionedTPS = value; }
    inline UpdateCampaignRequest& WithMinProvisionedTPS(int value) { SetMinProvisionedTPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline const CampaignConfig& GetCampaignConfig() const{ return m_campaignConfig; }
    inline bool CampaignConfigHasBeenSet() const { return m_campaignConfigHasBeenSet; }
    inline void SetCampaignConfig(const CampaignConfig& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = value; }
    inline void SetCampaignConfig(CampaignConfig&& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = std::move(value); }
    inline UpdateCampaignRequest& WithCampaignConfig(const CampaignConfig& value) { SetCampaignConfig(value); return *this;}
    inline UpdateCampaignRequest& WithCampaignConfig(CampaignConfig&& value) { SetCampaignConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    int m_minProvisionedTPS;
    bool m_minProvisionedTPSHasBeenSet = false;

    CampaignConfig m_campaignConfig;
    bool m_campaignConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
