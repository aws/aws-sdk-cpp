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
    AWS_PINPOINT_API InAppMessagesResponse() = default;
    AWS_PINPOINT_API InAppMessagesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessagesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of targeted in-app message campaigns.</p>
     */
    inline const Aws::Vector<InAppMessageCampaign>& GetInAppMessageCampaigns() const { return m_inAppMessageCampaigns; }
    inline bool InAppMessageCampaignsHasBeenSet() const { return m_inAppMessageCampaignsHasBeenSet; }
    template<typename InAppMessageCampaignsT = Aws::Vector<InAppMessageCampaign>>
    void SetInAppMessageCampaigns(InAppMessageCampaignsT&& value) { m_inAppMessageCampaignsHasBeenSet = true; m_inAppMessageCampaigns = std::forward<InAppMessageCampaignsT>(value); }
    template<typename InAppMessageCampaignsT = Aws::Vector<InAppMessageCampaign>>
    InAppMessagesResponse& WithInAppMessageCampaigns(InAppMessageCampaignsT&& value) { SetInAppMessageCampaigns(std::forward<InAppMessageCampaignsT>(value)); return *this;}
    template<typename InAppMessageCampaignsT = InAppMessageCampaign>
    InAppMessagesResponse& AddInAppMessageCampaigns(InAppMessageCampaignsT&& value) { m_inAppMessageCampaignsHasBeenSet = true; m_inAppMessageCampaigns.emplace_back(std::forward<InAppMessageCampaignsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InAppMessageCampaign> m_inAppMessageCampaigns;
    bool m_inAppMessageCampaignsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
