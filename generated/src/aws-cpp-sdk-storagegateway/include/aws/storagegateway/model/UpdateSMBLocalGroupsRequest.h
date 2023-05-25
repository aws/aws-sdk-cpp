/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/SMBLocalGroups.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateSMBLocalGroupsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateSMBLocalGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSMBLocalGroups"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateSMBLocalGroupsRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateSMBLocalGroupsRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateSMBLocalGroupsRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>A list of Active Directory users and groups that you want to grant special
     * permissions for SMB file shares on the gateway.</p>
     */
    inline const SMBLocalGroups& GetSMBLocalGroups() const{ return m_sMBLocalGroups; }

    /**
     * <p>A list of Active Directory users and groups that you want to grant special
     * permissions for SMB file shares on the gateway.</p>
     */
    inline bool SMBLocalGroupsHasBeenSet() const { return m_sMBLocalGroupsHasBeenSet; }

    /**
     * <p>A list of Active Directory users and groups that you want to grant special
     * permissions for SMB file shares on the gateway.</p>
     */
    inline void SetSMBLocalGroups(const SMBLocalGroups& value) { m_sMBLocalGroupsHasBeenSet = true; m_sMBLocalGroups = value; }

    /**
     * <p>A list of Active Directory users and groups that you want to grant special
     * permissions for SMB file shares on the gateway.</p>
     */
    inline void SetSMBLocalGroups(SMBLocalGroups&& value) { m_sMBLocalGroupsHasBeenSet = true; m_sMBLocalGroups = std::move(value); }

    /**
     * <p>A list of Active Directory users and groups that you want to grant special
     * permissions for SMB file shares on the gateway.</p>
     */
    inline UpdateSMBLocalGroupsRequest& WithSMBLocalGroups(const SMBLocalGroups& value) { SetSMBLocalGroups(value); return *this;}

    /**
     * <p>A list of Active Directory users and groups that you want to grant special
     * permissions for SMB file shares on the gateway.</p>
     */
    inline UpdateSMBLocalGroupsRequest& WithSMBLocalGroups(SMBLocalGroups&& value) { SetSMBLocalGroups(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    SMBLocalGroups m_sMBLocalGroups;
    bool m_sMBLocalGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
