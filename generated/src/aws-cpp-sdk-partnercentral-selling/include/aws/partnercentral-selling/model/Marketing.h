/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/MarketingSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/AwsFundingUsed.h>
#include <aws/partnercentral-selling/model/Channel.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>An object that contains marketing details for the
   * <code>Opportunity</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Marketing">AWS
   * API Reference</a></p>
   */
  class Marketing
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Marketing() = default;
    AWS_PARTNERCENTRALSELLING_API Marketing(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Marketing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code> marketing campaign code. The Amazon
     * Web Services campaign code is a reference to specific marketing initiatives,
     * promotions, or activities. This field captures the identifier used to track and
     * categorize the <code>Opportunity</code> within marketing campaigns. If you don't
     * have a campaign code, contact your Amazon Web Services point of contact to
     * obtain one.</p>
     */
    inline const Aws::String& GetCampaignName() const { return m_campaignName; }
    inline bool CampaignNameHasBeenSet() const { return m_campaignNameHasBeenSet; }
    template<typename CampaignNameT = Aws::String>
    void SetCampaignName(CampaignNameT&& value) { m_campaignNameHasBeenSet = true; m_campaignName = std::forward<CampaignNameT>(value); }
    template<typename CampaignNameT = Aws::String>
    Marketing& WithCampaignName(CampaignNameT&& value) { SetCampaignName(std::forward<CampaignNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the <code>Opportunity</code> was sourced from an Amazon Web
     * Services marketing activity. Use the value <code>Marketing Activity</code>. Use
     * <code>None</code> if it's not associated with an Amazon Web Services marketing
     * activity. This field helps Amazon Web Services track the return on marketing
     * investments and enables better distribution of marketing budgets among
     * partners.</p>
     */
    inline MarketingSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(MarketingSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline Marketing& WithSource(MarketingSource value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the marketing activity use case or purpose that led to the
     * <code>Opportunity</code>'s creation or contact. This field captures the context
     * or marketing activity's execution's intention and the direct correlation to the
     * generated opportunity or contact. Must be empty when
     * <code>Marketing.AWSFundingUsed = No</code>.</p> <p>Valid values: <code>AI/ML |
     * Analytics | Application Integration | Blockchain | Business Applications | Cloud
     * Financial Management | Compute | Containers | Customer Engagement | Databases |
     * Developer Tools | End User Computing | Front End Web &amp; Mobile | Game Tech |
     * IoT | Management &amp; Governance | Media Services | Migration &amp; Transfer |
     * Networking &amp; Content Delivery | Quantum Technologies | Robotics | Satellite
     * | Security | Serverless | Storage | VR &amp; AR</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetUseCases() const { return m_useCases; }
    inline bool UseCasesHasBeenSet() const { return m_useCasesHasBeenSet; }
    template<typename UseCasesT = Aws::Vector<Aws::String>>
    void SetUseCases(UseCasesT&& value) { m_useCasesHasBeenSet = true; m_useCases = std::forward<UseCasesT>(value); }
    template<typename UseCasesT = Aws::Vector<Aws::String>>
    Marketing& WithUseCases(UseCasesT&& value) { SetUseCases(std::forward<UseCasesT>(value)); return *this;}
    template<typename UseCasesT = Aws::String>
    Marketing& AddUseCases(UseCasesT&& value) { m_useCasesHasBeenSet = true; m_useCases.emplace_back(std::forward<UseCasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s channel that the marketing activity
     * is associated with or was contacted through. This field provides information
     * about the specific marketing channel that contributed to the generation of the
     * lead or contact.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    template<typename ChannelsT = Aws::Vector<Channel>>
    void SetChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels = std::forward<ChannelsT>(value); }
    template<typename ChannelsT = Aws::Vector<Channel>>
    Marketing& WithChannels(ChannelsT&& value) { SetChannels(std::forward<ChannelsT>(value)); return *this;}
    inline Marketing& AddChannels(Channel value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if the <code>Opportunity</code> is a marketing development fund
     * (MDF) funded activity.</p>
     */
    inline AwsFundingUsed GetAwsFundingUsed() const { return m_awsFundingUsed; }
    inline bool AwsFundingUsedHasBeenSet() const { return m_awsFundingUsedHasBeenSet; }
    inline void SetAwsFundingUsed(AwsFundingUsed value) { m_awsFundingUsedHasBeenSet = true; m_awsFundingUsed = value; }
    inline Marketing& WithAwsFundingUsed(AwsFundingUsed value) { SetAwsFundingUsed(value); return *this;}
    ///@}
  private:

    Aws::String m_campaignName;
    bool m_campaignNameHasBeenSet = false;

    MarketingSource m_source{MarketingSource::NOT_SET};
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_useCases;
    bool m_useCasesHasBeenSet = false;

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;

    AwsFundingUsed m_awsFundingUsed{AwsFundingUsed::NOT_SET};
    bool m_awsFundingUsedHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
