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
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class UpdateVpcAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API UpdateVpcAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVpcAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline UpdateVpcAttachmentRequest& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline UpdateVpcAttachmentRequest& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline UpdateVpcAttachmentRequest& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds a subnet ARN to the VPC attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetArns() const{ return m_addSubnetArns; }
    inline bool AddSubnetArnsHasBeenSet() const { return m_addSubnetArnsHasBeenSet; }
    inline void SetAddSubnetArns(const Aws::Vector<Aws::String>& value) { m_addSubnetArnsHasBeenSet = true; m_addSubnetArns = value; }
    inline void SetAddSubnetArns(Aws::Vector<Aws::String>&& value) { m_addSubnetArnsHasBeenSet = true; m_addSubnetArns = std::move(value); }
    inline UpdateVpcAttachmentRequest& WithAddSubnetArns(const Aws::Vector<Aws::String>& value) { SetAddSubnetArns(value); return *this;}
    inline UpdateVpcAttachmentRequest& WithAddSubnetArns(Aws::Vector<Aws::String>&& value) { SetAddSubnetArns(std::move(value)); return *this;}
    inline UpdateVpcAttachmentRequest& AddAddSubnetArns(const Aws::String& value) { m_addSubnetArnsHasBeenSet = true; m_addSubnetArns.push_back(value); return *this; }
    inline UpdateVpcAttachmentRequest& AddAddSubnetArns(Aws::String&& value) { m_addSubnetArnsHasBeenSet = true; m_addSubnetArns.push_back(std::move(value)); return *this; }
    inline UpdateVpcAttachmentRequest& AddAddSubnetArns(const char* value) { m_addSubnetArnsHasBeenSet = true; m_addSubnetArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Removes a subnet ARN from the attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetArns() const{ return m_removeSubnetArns; }
    inline bool RemoveSubnetArnsHasBeenSet() const { return m_removeSubnetArnsHasBeenSet; }
    inline void SetRemoveSubnetArns(const Aws::Vector<Aws::String>& value) { m_removeSubnetArnsHasBeenSet = true; m_removeSubnetArns = value; }
    inline void SetRemoveSubnetArns(Aws::Vector<Aws::String>&& value) { m_removeSubnetArnsHasBeenSet = true; m_removeSubnetArns = std::move(value); }
    inline UpdateVpcAttachmentRequest& WithRemoveSubnetArns(const Aws::Vector<Aws::String>& value) { SetRemoveSubnetArns(value); return *this;}
    inline UpdateVpcAttachmentRequest& WithRemoveSubnetArns(Aws::Vector<Aws::String>&& value) { SetRemoveSubnetArns(std::move(value)); return *this;}
    inline UpdateVpcAttachmentRequest& AddRemoveSubnetArns(const Aws::String& value) { m_removeSubnetArnsHasBeenSet = true; m_removeSubnetArns.push_back(value); return *this; }
    inline UpdateVpcAttachmentRequest& AddRemoveSubnetArns(Aws::String&& value) { m_removeSubnetArnsHasBeenSet = true; m_removeSubnetArns.push_back(std::move(value)); return *this; }
    inline UpdateVpcAttachmentRequest& AddRemoveSubnetArns(const char* value) { m_removeSubnetArnsHasBeenSet = true; m_removeSubnetArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional options for updating the VPC attachment. </p>
     */
    inline const VpcOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const VpcOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(VpcOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline UpdateVpcAttachmentRequest& WithOptions(const VpcOptions& value) { SetOptions(value); return *this;}
    inline UpdateVpcAttachmentRequest& WithOptions(VpcOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSubnetArns;
    bool m_addSubnetArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSubnetArns;
    bool m_removeSubnetArnsHasBeenSet = false;

    VpcOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
