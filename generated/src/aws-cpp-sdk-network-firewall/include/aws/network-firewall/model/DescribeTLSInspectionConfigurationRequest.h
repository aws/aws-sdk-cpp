/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class DescribeTLSInspectionConfigurationRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeTLSInspectionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTLSInspectionConfiguration"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     * <p>You must specify the ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationArn() const{ return m_tLSInspectionConfigurationArn; }
    inline bool TLSInspectionConfigurationArnHasBeenSet() const { return m_tLSInspectionConfigurationArnHasBeenSet; }
    inline void SetTLSInspectionConfigurationArn(const Aws::String& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = value; }
    inline void SetTLSInspectionConfigurationArn(Aws::String&& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = std::move(value); }
    inline void SetTLSInspectionConfigurationArn(const char* value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn.assign(value); }
    inline DescribeTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationArn(const Aws::String& value) { SetTLSInspectionConfigurationArn(value); return *this;}
    inline DescribeTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationArn(Aws::String&& value) { SetTLSInspectionConfigurationArn(std::move(value)); return *this;}
    inline DescribeTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationArn(const char* value) { SetTLSInspectionConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationName() const{ return m_tLSInspectionConfigurationName; }
    inline bool TLSInspectionConfigurationNameHasBeenSet() const { return m_tLSInspectionConfigurationNameHasBeenSet; }
    inline void SetTLSInspectionConfigurationName(const Aws::String& value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName = value; }
    inline void SetTLSInspectionConfigurationName(Aws::String&& value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName = std::move(value); }
    inline void SetTLSInspectionConfigurationName(const char* value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName.assign(value); }
    inline DescribeTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(const Aws::String& value) { SetTLSInspectionConfigurationName(value); return *this;}
    inline DescribeTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(Aws::String&& value) { SetTLSInspectionConfigurationName(std::move(value)); return *this;}
    inline DescribeTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(const char* value) { SetTLSInspectionConfigurationName(value); return *this;}
    ///@}
  private:

    Aws::String m_tLSInspectionConfigurationArn;
    bool m_tLSInspectionConfigurationArnHasBeenSet = false;

    Aws::String m_tLSInspectionConfigurationName;
    bool m_tLSInspectionConfigurationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
