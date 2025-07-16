/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/CdnAuthConfiguration.h>
#include <utility>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class PutOriginEndpointPolicyRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API PutOriginEndpointPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOriginEndpointPolicy"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    PutOriginEndpointPolicyRequest& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    PutOriginEndpointPolicyRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline const Aws::String& GetOriginEndpointName() const { return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    template<typename OriginEndpointNameT = Aws::String>
    void SetOriginEndpointName(OriginEndpointNameT&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::forward<OriginEndpointNameT>(value); }
    template<typename OriginEndpointNameT = Aws::String>
    PutOriginEndpointPolicyRequest& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy to attach to the specified origin endpoint.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutOriginEndpointPolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for using authorization headers between the MediaPackage
     * endpoint and your CDN. </p> <p>For information about CDN authorization, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/cdn-auth.html">CDN
     * authorization in Elemental MediaPackage</a> in the MediaPackage user guide. </p>
     */
    inline const CdnAuthConfiguration& GetCdnAuthConfiguration() const { return m_cdnAuthConfiguration; }
    inline bool CdnAuthConfigurationHasBeenSet() const { return m_cdnAuthConfigurationHasBeenSet; }
    template<typename CdnAuthConfigurationT = CdnAuthConfiguration>
    void SetCdnAuthConfiguration(CdnAuthConfigurationT&& value) { m_cdnAuthConfigurationHasBeenSet = true; m_cdnAuthConfiguration = std::forward<CdnAuthConfigurationT>(value); }
    template<typename CdnAuthConfigurationT = CdnAuthConfiguration>
    PutOriginEndpointPolicyRequest& WithCdnAuthConfiguration(CdnAuthConfigurationT&& value) { SetCdnAuthConfiguration(std::forward<CdnAuthConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    CdnAuthConfiguration m_cdnAuthConfiguration;
    bool m_cdnAuthConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
