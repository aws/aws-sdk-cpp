/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/CdnAuthConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace mediapackagev2
{
namespace Model
{
  class GetOriginEndpointPolicyResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointPolicyResult() = default;
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    GetOriginEndpointPolicyResult& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    GetOriginEndpointPolicyResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const { return m_originEndpointName; }
    template<typename OriginEndpointNameT = Aws::String>
    void SetOriginEndpointName(OriginEndpointNameT&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::forward<OriginEndpointNameT>(value); }
    template<typename OriginEndpointNameT = Aws::String>
    GetOriginEndpointPolicyResult& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy assigned to the origin endpoint.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    GetOriginEndpointPolicyResult& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for using authorization headers between the MediaPackage
     * endpoint and your CDN. </p> <p>For information about CDN authorization, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/cdn-auth.html">CDN
     * authorization in Elemental MediaPackage</a> in the MediaPackage user guide.</p>
     */
    inline const CdnAuthConfiguration& GetCdnAuthConfiguration() const { return m_cdnAuthConfiguration; }
    template<typename CdnAuthConfigurationT = CdnAuthConfiguration>
    void SetCdnAuthConfiguration(CdnAuthConfigurationT&& value) { m_cdnAuthConfigurationHasBeenSet = true; m_cdnAuthConfiguration = std::forward<CdnAuthConfigurationT>(value); }
    template<typename CdnAuthConfigurationT = CdnAuthConfiguration>
    GetOriginEndpointPolicyResult& WithCdnAuthConfiguration(CdnAuthConfigurationT&& value) { SetCdnAuthConfiguration(std::forward<CdnAuthConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOriginEndpointPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
