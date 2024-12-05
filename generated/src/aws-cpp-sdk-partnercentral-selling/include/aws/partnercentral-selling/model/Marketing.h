/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsFundingUsed.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/MarketingSource.h>
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
    AWS_PARTNERCENTRALSELLING_API Marketing();
    AWS_PARTNERCENTRALSELLING_API Marketing(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Marketing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if the <code>Opportunity</code> is a marketing development fund
     * (MDF) funded activity.</p>
     */
    inline const AwsFundingUsed& GetAwsFundingUsed() const{ return m_awsFundingUsed; }
    inline bool AwsFundingUsedHasBeenSet() const { return m_awsFundingUsedHasBeenSet; }
    inline void SetAwsFundingUsed(const AwsFundingUsed& value) { m_awsFundingUsedHasBeenSet = true; m_awsFundingUsed = value; }
    inline void SetAwsFundingUsed(AwsFundingUsed&& value) { m_awsFundingUsedHasBeenSet = true; m_awsFundingUsed = std::move(value); }
    inline Marketing& WithAwsFundingUsed(const AwsFundingUsed& value) { SetAwsFundingUsed(value); return *this;}
    inline Marketing& WithAwsFundingUsed(AwsFundingUsed&& value) { SetAwsFundingUsed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code> marketing campaign code. The Amazon
     * Web Services campaign code is a reference to specific marketing initiatives,
     * promotions, or activities. This field captures the identifier used to track and
     * categorize the <code>Opportunity</code> within marketing campaigns. If you don't
     * have a campaign code, contact your Amazon Web Services point of contact to
     * obtain one.</p>
     */
    inline const Aws::String& GetCampaignName() const{ return m_campaignName; }
    inline bool CampaignNameHasBeenSet() const { return m_campaignNameHasBeenSet; }
    inline void SetCampaignName(const Aws::String& value) { m_campaignNameHasBeenSet = true; m_campaignName = value; }
    inline void SetCampaignName(Aws::String&& value) { m_campaignNameHasBeenSet = true; m_campaignName = std::move(value); }
    inline void SetCampaignName(const char* value) { m_campaignNameHasBeenSet = true; m_campaignName.assign(value); }
    inline Marketing& WithCampaignName(const Aws::String& value) { SetCampaignName(value); return *this;}
    inline Marketing& WithCampaignName(Aws::String&& value) { SetCampaignName(std::move(value)); return *this;}
    inline Marketing& WithCampaignName(const char* value) { SetCampaignName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s channel that the marketing activity
     * is associated with or was contacted through. This field provides information
     * about the specific marketing channel that contributed to the generation of the
     * lead or contact.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }
    inline Marketing& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}
    inline Marketing& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}
    inline Marketing& AddChannels(const Channel& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    inline Marketing& AddChannels(Channel&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }
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
    inline const MarketingSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const MarketingSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(MarketingSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline Marketing& WithSource(const MarketingSource& value) { SetSource(value); return *this;}
    inline Marketing& WithSource(MarketingSource&& value) { SetSource(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetUseCases() const{ return m_useCases; }
    inline bool UseCasesHasBeenSet() const { return m_useCasesHasBeenSet; }
    inline void SetUseCases(const Aws::Vector<Aws::String>& value) { m_useCasesHasBeenSet = true; m_useCases = value; }
    inline void SetUseCases(Aws::Vector<Aws::String>&& value) { m_useCasesHasBeenSet = true; m_useCases = std::move(value); }
    inline Marketing& WithUseCases(const Aws::Vector<Aws::String>& value) { SetUseCases(value); return *this;}
    inline Marketing& WithUseCases(Aws::Vector<Aws::String>&& value) { SetUseCases(std::move(value)); return *this;}
    inline Marketing& AddUseCases(const Aws::String& value) { m_useCasesHasBeenSet = true; m_useCases.push_back(value); return *this; }
    inline Marketing& AddUseCases(Aws::String&& value) { m_useCasesHasBeenSet = true; m_useCases.push_back(std::move(value)); return *this; }
    inline Marketing& AddUseCases(const char* value) { m_useCasesHasBeenSet = true; m_useCases.push_back(value); return *this; }
    ///@}
  private:

    AwsFundingUsed m_awsFundingUsed;
    bool m_awsFundingUsedHasBeenSet = false;

    Aws::String m_campaignName;
    bool m_campaignNameHasBeenSet = false;

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;

    MarketingSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_useCases;
    bool m_useCasesHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
