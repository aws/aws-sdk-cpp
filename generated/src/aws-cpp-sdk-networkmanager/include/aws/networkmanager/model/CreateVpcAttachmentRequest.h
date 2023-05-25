/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/VpcOptions.h>
#include <aws/networkmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class CreateVpcAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateVpcAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network for the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ARN of the VPC.</p>
     */
    inline const Aws::String& GetVpcArn() const{ return m_vpcArn; }

    /**
     * <p>The ARN of the VPC.</p>
     */
    inline bool VpcArnHasBeenSet() const { return m_vpcArnHasBeenSet; }

    /**
     * <p>The ARN of the VPC.</p>
     */
    inline void SetVpcArn(const Aws::String& value) { m_vpcArnHasBeenSet = true; m_vpcArn = value; }

    /**
     * <p>The ARN of the VPC.</p>
     */
    inline void SetVpcArn(Aws::String&& value) { m_vpcArnHasBeenSet = true; m_vpcArn = std::move(value); }

    /**
     * <p>The ARN of the VPC.</p>
     */
    inline void SetVpcArn(const char* value) { m_vpcArnHasBeenSet = true; m_vpcArn.assign(value); }

    /**
     * <p>The ARN of the VPC.</p>
     */
    inline CreateVpcAttachmentRequest& WithVpcArn(const Aws::String& value) { SetVpcArn(value); return *this;}

    /**
     * <p>The ARN of the VPC.</p>
     */
    inline CreateVpcAttachmentRequest& WithVpcArn(Aws::String&& value) { SetVpcArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the VPC.</p>
     */
    inline CreateVpcAttachmentRequest& WithVpcArn(const char* value) { SetVpcArn(value); return *this;}


    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const{ return m_subnetArns; }

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline void SetSubnetArns(const Aws::Vector<Aws::String>& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = value; }

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline void SetSubnetArns(Aws::Vector<Aws::String>&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::move(value); }

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& WithSubnetArns(const Aws::Vector<Aws::String>& value) { SetSubnetArns(value); return *this;}

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& WithSubnetArns(Aws::Vector<Aws::String>&& value) { SetSubnetArns(std::move(value)); return *this;}

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& AddSubnetArns(const Aws::String& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& AddSubnetArns(Aws::String&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnet ARN of the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& AddSubnetArns(const char* value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }


    /**
     * <p>Options for the VPC attachment.</p>
     */
    inline const VpcOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Options for the VPC attachment.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Options for the VPC attachment.</p>
     */
    inline void SetOptions(const VpcOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Options for the VPC attachment.</p>
     */
    inline void SetOptions(VpcOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Options for the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& WithOptions(const VpcOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Options for the VPC attachment.</p>
     */
    inline CreateVpcAttachmentRequest& WithOptions(VpcOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline CreateVpcAttachmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline CreateVpcAttachmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline CreateVpcAttachmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value tags associated with the request.</p>
     */
    inline CreateVpcAttachmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateVpcAttachmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateVpcAttachmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateVpcAttachmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_vpcArn;
    bool m_vpcArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetArns;
    bool m_subnetArnsHasBeenSet = false;

    VpcOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
