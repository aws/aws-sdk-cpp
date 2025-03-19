/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Attachment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/VpcOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a VPC attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/VpcAttachment">AWS
   * API Reference</a></p>
   */
  class VpcAttachment
  {
  public:
    AWS_NETWORKMANAGER_API VpcAttachment() = default;
    AWS_NETWORKMANAGER_API VpcAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API VpcAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline const Attachment& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = Attachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = Attachment>
    VpcAttachment& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const { return m_subnetArns; }
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }
    template<typename SubnetArnsT = Aws::Vector<Aws::String>>
    void SetSubnetArns(SubnetArnsT&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::forward<SubnetArnsT>(value); }
    template<typename SubnetArnsT = Aws::Vector<Aws::String>>
    VpcAttachment& WithSubnetArns(SubnetArnsT&& value) { SetSubnetArns(std::forward<SubnetArnsT>(value)); return *this;}
    template<typename SubnetArnsT = Aws::String>
    VpcAttachment& AddSubnetArns(SubnetArnsT&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.emplace_back(std::forward<SubnetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline const VpcOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = VpcOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = VpcOptions>
    VpcAttachment& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}
  private:

    Attachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetArns;
    bool m_subnetArnsHasBeenSet = false;

    VpcOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
