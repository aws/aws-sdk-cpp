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
    AWS_NETWORKMANAGER_API UpdateVpcAttachmentRequest() = default;

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
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    UpdateVpcAttachmentRequest& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds a subnet ARN to the VPC attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetArns() const { return m_addSubnetArns; }
    inline bool AddSubnetArnsHasBeenSet() const { return m_addSubnetArnsHasBeenSet; }
    template<typename AddSubnetArnsT = Aws::Vector<Aws::String>>
    void SetAddSubnetArns(AddSubnetArnsT&& value) { m_addSubnetArnsHasBeenSet = true; m_addSubnetArns = std::forward<AddSubnetArnsT>(value); }
    template<typename AddSubnetArnsT = Aws::Vector<Aws::String>>
    UpdateVpcAttachmentRequest& WithAddSubnetArns(AddSubnetArnsT&& value) { SetAddSubnetArns(std::forward<AddSubnetArnsT>(value)); return *this;}
    template<typename AddSubnetArnsT = Aws::String>
    UpdateVpcAttachmentRequest& AddAddSubnetArns(AddSubnetArnsT&& value) { m_addSubnetArnsHasBeenSet = true; m_addSubnetArns.emplace_back(std::forward<AddSubnetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Removes a subnet ARN from the attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetArns() const { return m_removeSubnetArns; }
    inline bool RemoveSubnetArnsHasBeenSet() const { return m_removeSubnetArnsHasBeenSet; }
    template<typename RemoveSubnetArnsT = Aws::Vector<Aws::String>>
    void SetRemoveSubnetArns(RemoveSubnetArnsT&& value) { m_removeSubnetArnsHasBeenSet = true; m_removeSubnetArns = std::forward<RemoveSubnetArnsT>(value); }
    template<typename RemoveSubnetArnsT = Aws::Vector<Aws::String>>
    UpdateVpcAttachmentRequest& WithRemoveSubnetArns(RemoveSubnetArnsT&& value) { SetRemoveSubnetArns(std::forward<RemoveSubnetArnsT>(value)); return *this;}
    template<typename RemoveSubnetArnsT = Aws::String>
    UpdateVpcAttachmentRequest& AddRemoveSubnetArns(RemoveSubnetArnsT&& value) { m_removeSubnetArnsHasBeenSet = true; m_removeSubnetArns.emplace_back(std::forward<RemoveSubnetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional options for updating the VPC attachment. </p>
     */
    inline const VpcOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = VpcOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = VpcOptions>
    UpdateVpcAttachmentRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
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
