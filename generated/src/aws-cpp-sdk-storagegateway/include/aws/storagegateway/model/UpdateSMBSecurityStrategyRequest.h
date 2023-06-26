/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/SMBSecurityStrategy.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateSMBSecurityStrategyRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateSMBSecurityStrategyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSMBSecurityStrategy"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateSMBSecurityStrategyRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateSMBSecurityStrategyRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateSMBSecurityStrategyRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: if you use
     * this option, requests are established based on what is negotiated by the client.
     * This option is recommended when you want to maximize compatibility across
     * different clients in your environment. Supported only in S3 File Gateway.</p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or
     * newer.</p> <p>MandatoryEncryption: if you use this option, file gateway only
     * allows connections from SMBv3 clients that have encryption enabled. This option
     * is highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.</p>
     */
    inline const SMBSecurityStrategy& GetSMBSecurityStrategy() const{ return m_sMBSecurityStrategy; }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: if you use
     * this option, requests are established based on what is negotiated by the client.
     * This option is recommended when you want to maximize compatibility across
     * different clients in your environment. Supported only in S3 File Gateway.</p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or
     * newer.</p> <p>MandatoryEncryption: if you use this option, file gateway only
     * allows connections from SMBv3 clients that have encryption enabled. This option
     * is highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.</p>
     */
    inline bool SMBSecurityStrategyHasBeenSet() const { return m_sMBSecurityStrategyHasBeenSet; }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: if you use
     * this option, requests are established based on what is negotiated by the client.
     * This option is recommended when you want to maximize compatibility across
     * different clients in your environment. Supported only in S3 File Gateway.</p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or
     * newer.</p> <p>MandatoryEncryption: if you use this option, file gateway only
     * allows connections from SMBv3 clients that have encryption enabled. This option
     * is highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.</p>
     */
    inline void SetSMBSecurityStrategy(const SMBSecurityStrategy& value) { m_sMBSecurityStrategyHasBeenSet = true; m_sMBSecurityStrategy = value; }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: if you use
     * this option, requests are established based on what is negotiated by the client.
     * This option is recommended when you want to maximize compatibility across
     * different clients in your environment. Supported only in S3 File Gateway.</p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or
     * newer.</p> <p>MandatoryEncryption: if you use this option, file gateway only
     * allows connections from SMBv3 clients that have encryption enabled. This option
     * is highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.</p>
     */
    inline void SetSMBSecurityStrategy(SMBSecurityStrategy&& value) { m_sMBSecurityStrategyHasBeenSet = true; m_sMBSecurityStrategy = std::move(value); }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: if you use
     * this option, requests are established based on what is negotiated by the client.
     * This option is recommended when you want to maximize compatibility across
     * different clients in your environment. Supported only in S3 File Gateway.</p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or
     * newer.</p> <p>MandatoryEncryption: if you use this option, file gateway only
     * allows connections from SMBv3 clients that have encryption enabled. This option
     * is highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.</p>
     */
    inline UpdateSMBSecurityStrategyRequest& WithSMBSecurityStrategy(const SMBSecurityStrategy& value) { SetSMBSecurityStrategy(value); return *this;}

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: if you use
     * this option, requests are established based on what is negotiated by the client.
     * This option is recommended when you want to maximize compatibility across
     * different clients in your environment. Supported only in S3 File Gateway.</p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or
     * newer.</p> <p>MandatoryEncryption: if you use this option, file gateway only
     * allows connections from SMBv3 clients that have encryption enabled. This option
     * is highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.</p>
     */
    inline UpdateSMBSecurityStrategyRequest& WithSMBSecurityStrategy(SMBSecurityStrategy&& value) { SetSMBSecurityStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    SMBSecurityStrategy m_sMBSecurityStrategy;
    bool m_sMBSecurityStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
