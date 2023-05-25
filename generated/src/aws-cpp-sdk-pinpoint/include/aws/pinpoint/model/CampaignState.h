/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CampaignStatus.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the status of a campaign.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignState">AWS
   * API Reference</a></p>
   */
  class CampaignState
  {
  public:
    AWS_PINPOINT_API CampaignState();
    AWS_PINPOINT_API CampaignState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the campaign, or the current status of a treatment that
     * belongs to an A/B test campaign.</p> <p>If a campaign uses A/B testing, the
     * campaign has a status of COMPLETED only if all campaign treatments have a status
     * of COMPLETED. If you delete the segment that's associated with a campaign, the
     * campaign fails and has a status of DELETED.</p>
     */
    inline const CampaignStatus& GetCampaignStatus() const{ return m_campaignStatus; }

    /**
     * <p>The current status of the campaign, or the current status of a treatment that
     * belongs to an A/B test campaign.</p> <p>If a campaign uses A/B testing, the
     * campaign has a status of COMPLETED only if all campaign treatments have a status
     * of COMPLETED. If you delete the segment that's associated with a campaign, the
     * campaign fails and has a status of DELETED.</p>
     */
    inline bool CampaignStatusHasBeenSet() const { return m_campaignStatusHasBeenSet; }

    /**
     * <p>The current status of the campaign, or the current status of a treatment that
     * belongs to an A/B test campaign.</p> <p>If a campaign uses A/B testing, the
     * campaign has a status of COMPLETED only if all campaign treatments have a status
     * of COMPLETED. If you delete the segment that's associated with a campaign, the
     * campaign fails and has a status of DELETED.</p>
     */
    inline void SetCampaignStatus(const CampaignStatus& value) { m_campaignStatusHasBeenSet = true; m_campaignStatus = value; }

    /**
     * <p>The current status of the campaign, or the current status of a treatment that
     * belongs to an A/B test campaign.</p> <p>If a campaign uses A/B testing, the
     * campaign has a status of COMPLETED only if all campaign treatments have a status
     * of COMPLETED. If you delete the segment that's associated with a campaign, the
     * campaign fails and has a status of DELETED.</p>
     */
    inline void SetCampaignStatus(CampaignStatus&& value) { m_campaignStatusHasBeenSet = true; m_campaignStatus = std::move(value); }

    /**
     * <p>The current status of the campaign, or the current status of a treatment that
     * belongs to an A/B test campaign.</p> <p>If a campaign uses A/B testing, the
     * campaign has a status of COMPLETED only if all campaign treatments have a status
     * of COMPLETED. If you delete the segment that's associated with a campaign, the
     * campaign fails and has a status of DELETED.</p>
     */
    inline CampaignState& WithCampaignStatus(const CampaignStatus& value) { SetCampaignStatus(value); return *this;}

    /**
     * <p>The current status of the campaign, or the current status of a treatment that
     * belongs to an A/B test campaign.</p> <p>If a campaign uses A/B testing, the
     * campaign has a status of COMPLETED only if all campaign treatments have a status
     * of COMPLETED. If you delete the segment that's associated with a campaign, the
     * campaign fails and has a status of DELETED.</p>
     */
    inline CampaignState& WithCampaignStatus(CampaignStatus&& value) { SetCampaignStatus(std::move(value)); return *this;}

  private:

    CampaignStatus m_campaignStatus;
    bool m_campaignStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
