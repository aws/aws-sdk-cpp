/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/InAppMessageCampaign.h>
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
   * <p>Get in-app messages response object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessagesResponse">AWS
   * API Reference</a></p>
   */
  class InAppMessagesResponse
  {
  public:
    AWS_PINPOINT_API InAppMessagesResponse();
    AWS_PINPOINT_API InAppMessagesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessagesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline const Aws::Vector<InAppMessageCampaign>& GetInAppMessageCampaigns() const{ return m_inAppMessageCampaigns; }

    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline bool InAppMessageCampaignsHasBeenSet() const { return m_inAppMessageCampaignsHasBeenSet; }

    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline void SetInAppMessageCampaigns(const Aws::Vector<InAppMessageCampaign>& value) { m_inAppMessageCampaignsHasBeenSet = true; m_inAppMessageCampaigns = value; }

    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline void SetInAppMessageCampaigns(Aws::Vector<InAppMessageCampaign>&& value) { m_inAppMessageCampaignsHasBeenSet = true; m_inAppMessageCampaigns = std::move(value); }

    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline InAppMessagesResponse& WithInAppMessageCampaigns(const Aws::Vector<InAppMessageCampaign>& value) { SetInAppMessageCampaigns(value); return *this;}

    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline InAppMessagesResponse& WithInAppMessageCampaigns(Aws::Vector<InAppMessageCampaign>&& value) { SetInAppMessageCampaigns(std::move(value)); return *this;}

    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline InAppMessagesResponse& AddInAppMessageCampaigns(const InAppMessageCampaign& value) { m_inAppMessageCampaignsHasBeenSet = true; m_inAppMessageCampaigns.push_back(value); return *this; }

    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline InAppMessagesResponse& AddInAppMessageCampaigns(InAppMessageCampaign&& value) { m_inAppMessageCampaignsHasBeenSet = true; m_inAppMessageCampaigns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InAppMessageCampaign> m_inAppMessageCampaigns;
    bool m_inAppMessageCampaignsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
