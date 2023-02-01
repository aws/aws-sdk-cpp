/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateSMBFileShareVisibilityRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateSMBFileShareVisibilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSMBFileShareVisibility"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateSMBFileShareVisibilityRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateSMBFileShareVisibilityRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateSMBFileShareVisibilityRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The shares on this gateway appear when listing shares.</p>
     */
    inline bool GetFileSharesVisible() const{ return m_fileSharesVisible; }

    /**
     * <p>The shares on this gateway appear when listing shares.</p>
     */
    inline bool FileSharesVisibleHasBeenSet() const { return m_fileSharesVisibleHasBeenSet; }

    /**
     * <p>The shares on this gateway appear when listing shares.</p>
     */
    inline void SetFileSharesVisible(bool value) { m_fileSharesVisibleHasBeenSet = true; m_fileSharesVisible = value; }

    /**
     * <p>The shares on this gateway appear when listing shares.</p>
     */
    inline UpdateSMBFileShareVisibilityRequest& WithFileSharesVisible(bool value) { SetFileSharesVisible(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    bool m_fileSharesVisible;
    bool m_fileSharesVisibleHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
