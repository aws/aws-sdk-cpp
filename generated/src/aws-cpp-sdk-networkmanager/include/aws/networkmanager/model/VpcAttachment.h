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
    AWS_NETWORKMANAGER_API VpcAttachment();
    AWS_NETWORKMANAGER_API VpcAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API VpcAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline const Attachment& GetAttachment() const{ return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    inline void SetAttachment(const Attachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }
    inline void SetAttachment(Attachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }
    inline VpcAttachment& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}
    inline VpcAttachment& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const{ return m_subnetArns; }
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }
    inline void SetSubnetArns(const Aws::Vector<Aws::String>& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = value; }
    inline void SetSubnetArns(Aws::Vector<Aws::String>&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::move(value); }
    inline VpcAttachment& WithSubnetArns(const Aws::Vector<Aws::String>& value) { SetSubnetArns(value); return *this;}
    inline VpcAttachment& WithSubnetArns(Aws::Vector<Aws::String>&& value) { SetSubnetArns(std::move(value)); return *this;}
    inline VpcAttachment& AddSubnetArns(const Aws::String& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }
    inline VpcAttachment& AddSubnetArns(Aws::String&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(std::move(value)); return *this; }
    inline VpcAttachment& AddSubnetArns(const char* value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline const VpcOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const VpcOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(VpcOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline VpcAttachment& WithOptions(const VpcOptions& value) { SetOptions(value); return *this;}
    inline VpcAttachment& WithOptions(VpcOptions&& value) { SetOptions(std::move(value)); return *this;}
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
