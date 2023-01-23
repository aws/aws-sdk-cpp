/**
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


    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline UpdateCampaignRequest& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline UpdateCampaignRequest& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline UpdateCampaignRequest& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}


    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline UpdateCampaignRequest& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline UpdateCampaignRequest& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a new solution version to deploy.</p>
     */
    inline UpdateCampaignRequest& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline int GetMinProvisionedTPS() const{ return m_minProvisionedTPS; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline bool MinProvisionedTPSHasBeenSet() const { return m_minProvisionedTPSHasBeenSet; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline void SetMinProvisionedTPS(int value) { m_minProvisionedTPSHasBeenSet = true; m_minProvisionedTPS = value; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline UpdateCampaignRequest& WithMinProvisionedTPS(int value) { SetMinProvisionedTPS(value); return *this;}


    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline const CampaignConfig& GetCampaignConfig() const{ return m_campaignConfig; }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline bool CampaignConfigHasBeenSet() const { return m_campaignConfigHasBeenSet; }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline void SetCampaignConfig(const CampaignConfig& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = value; }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline void SetCampaignConfig(CampaignConfig&& value) { m_campaignConfigHasBeenSet = true; m_campaignConfig = std::move(value); }

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline UpdateCampaignRequest& WithCampaignConfig(const CampaignConfig& value) { SetCampaignConfig(value); return *this;}

    /**
     * <p>The configuration details of a campaign.</p>
     */
    inline UpdateCampaignRequest& WithCampaignConfig(CampaignConfig&& value) { SetCampaignConfig(std::move(value)); return *this;}

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
