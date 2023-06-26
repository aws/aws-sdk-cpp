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
  class GetVpcAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API GetVpcAttachmentResult();
    AWS_NETWORKMANAGER_API GetVpcAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetVpcAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns details about a VPC attachment.</p>
     */
    inline const VpcAttachment& GetVpcAttachment() const{ return m_vpcAttachment; }

    /**
     * <p>Returns details about a VPC attachment.</p>
     */
    inline void SetVpcAttachment(const VpcAttachment& value) { m_vpcAttachment = value; }

    /**
     * <p>Returns details about a VPC attachment.</p>
     */
    inline void SetVpcAttachment(VpcAttachment&& value) { m_vpcAttachment = std::move(value); }

    /**
     * <p>Returns details about a VPC attachment.</p>
     */
    inline GetVpcAttachmentResult& WithVpcAttachment(const VpcAttachment& value) { SetVpcAttachment(value); return *this;}

    /**
     * <p>Returns details about a VPC attachment.</p>
     */
    inline GetVpcAttachmentResult& WithVpcAttachment(VpcAttachment&& value) { SetVpcAttachment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVpcAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVpcAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVpcAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VpcAttachment m_vpcAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
