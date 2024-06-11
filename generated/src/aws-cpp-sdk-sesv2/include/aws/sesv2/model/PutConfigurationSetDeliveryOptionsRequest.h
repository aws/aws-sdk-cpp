﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/TlsPolicy.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to associate a configuration set with a dedicated IP
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetDeliveryOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetDeliveryOptionsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutConfigurationSetDeliveryOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetDeliveryOptions"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configuration set to associate with a dedicated IP pool.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = std::move(value); }
    inline PutConfigurationSetDeliveryOptionsRequest& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}
    inline PutConfigurationSetDeliveryOptionsRequest& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline const Aws::String& GetSendingPoolName() const{ return m_sendingPoolName; }
    inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }
    inline void SetSendingPoolName(const Aws::String& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = value; }
    inline void SetSendingPoolName(Aws::String&& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = std::move(value); }
    inline void SetSendingPoolName(const char* value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName.assign(value); }
    inline PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(const Aws::String& value) { SetSendingPoolName(value); return *this;}
    inline PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(Aws::String&& value) { SetSendingPoolName(std::move(value)); return *this;}
    inline PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(const char* value) { SetSendingPoolName(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet = false;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
