/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/VpcAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{
  class CreateVpcAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateVpcAttachmentResult() = default;
    AWS_NETWORKMANAGER_API CreateVpcAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateVpcAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline const VpcAttachment& GetVpcAttachment() const { return m_vpcAttachment; }
    template<typename VpcAttachmentT = VpcAttachment>
    void SetVpcAttachment(VpcAttachmentT&& value) { m_vpcAttachmentHasBeenSet = true; m_vpcAttachment = std::forward<VpcAttachmentT>(value); }
    template<typename VpcAttachmentT = VpcAttachment>
    CreateVpcAttachmentResult& WithVpcAttachment(VpcAttachmentT&& value) { SetVpcAttachment(std::forward<VpcAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateVpcAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcAttachment m_vpcAttachment;
    bool m_vpcAttachmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
