/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/TlsPolicy.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to associate a configuration set with a dedicated IP
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetDeliveryOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetDeliveryOptionsRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutConfigurationSetDeliveryOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetDeliveryOptions"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline TlsPolicy GetTlsPolicy() const { return m_tlsPolicy; }
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }
    inline void SetTlsPolicy(TlsPolicy value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }
    inline PutConfigurationSetDeliveryOptionsRequest& WithTlsPolicy(TlsPolicy value) { SetTlsPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline const Aws::String& GetSendingPoolName() const { return m_sendingPoolName; }
    inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }
    template<typename SendingPoolNameT = Aws::String>
    void SetSendingPoolName(SendingPoolNameT&& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = std::forward<SendingPoolNameT>(value); }
    template<typename SendingPoolNameT = Aws::String>
    PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(SendingPoolNameT&& value) { SetSendingPoolName(std::forward<SendingPoolNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    TlsPolicy m_tlsPolicy{TlsPolicy::NOT_SET};
    bool m_tlsPolicyHasBeenSet = false;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
