/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/HttpEndpointEnum.h>
#include <aws/workspaces-instances/model/HttpProtocolIpv6Enum.h>
#include <aws/workspaces-instances/model/HttpTokensEnum.h>
#include <aws/workspaces-instances/model/InstanceMetadataTagsEnum.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines instance metadata service configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/InstanceMetadataOptionsRequest">AWS
   * API Reference</a></p>
   */
  class InstanceMetadataOptionsRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API InstanceMetadataOptionsRequest() = default;
    AWS_WORKSPACESINSTANCES_API InstanceMetadataOptionsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API InstanceMetadataOptionsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables HTTP endpoint for instance metadata.</p>
     */
    inline HttpEndpointEnum GetHttpEndpoint() const { return m_httpEndpoint; }
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }
    inline void SetHttpEndpoint(HttpEndpointEnum value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }
    inline InstanceMetadataOptionsRequest& WithHttpEndpoint(HttpEndpointEnum value) { SetHttpEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures IPv6 support for instance metadata HTTP protocol.</p>
     */
    inline HttpProtocolIpv6Enum GetHttpProtocolIpv6() const { return m_httpProtocolIpv6; }
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }
    inline void SetHttpProtocolIpv6(HttpProtocolIpv6Enum value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }
    inline InstanceMetadataOptionsRequest& WithHttpProtocolIpv6(HttpProtocolIpv6Enum value) { SetHttpProtocolIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets maximum number of network hops for metadata PUT responses.</p>
     */
    inline int GetHttpPutResponseHopLimit() const { return m_httpPutResponseHopLimit; }
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }
    inline InstanceMetadataOptionsRequest& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures token requirement for instance metadata retrieval.</p>
     */
    inline HttpTokensEnum GetHttpTokens() const { return m_httpTokens; }
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
    inline void SetHttpTokens(HttpTokensEnum value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }
    inline InstanceMetadataOptionsRequest& WithHttpTokens(HttpTokensEnum value) { SetHttpTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables instance metadata tags retrieval.</p>
     */
    inline InstanceMetadataTagsEnum GetInstanceMetadataTags() const { return m_instanceMetadataTags; }
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }
    inline void SetInstanceMetadataTags(InstanceMetadataTagsEnum value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }
    inline InstanceMetadataOptionsRequest& WithInstanceMetadataTags(InstanceMetadataTagsEnum value) { SetInstanceMetadataTags(value); return *this;}
    ///@}
  private:

    HttpEndpointEnum m_httpEndpoint{HttpEndpointEnum::NOT_SET};
    bool m_httpEndpointHasBeenSet = false;

    HttpProtocolIpv6Enum m_httpProtocolIpv6{HttpProtocolIpv6Enum::NOT_SET};
    bool m_httpProtocolIpv6HasBeenSet = false;

    int m_httpPutResponseHopLimit{0};
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    HttpTokensEnum m_httpTokens{HttpTokensEnum::NOT_SET};
    bool m_httpTokensHasBeenSet = false;

    InstanceMetadataTagsEnum m_instanceMetadataTags{InstanceMetadataTagsEnum::NOT_SET};
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
