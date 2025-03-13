/**
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
    AWS_SESV2_API PutConfigurationSetDeliveryOptionsRequest() = default;

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
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline const Aws::String& GetSendingPoolName() const { return m_sendingPoolName; }
    inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }
    template<typename SendingPoolNameT = Aws::String>
    void SetSendingPoolName(SendingPoolNameT&& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = std::forward<SendingPoolNameT>(value); }
    template<typename SendingPoolNameT = Aws::String>
    PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(SendingPoolNameT&& value) { SetSendingPoolName(std::forward<SendingPoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that Amazon SES API v2 will attempt
     * delivery of email. If specified, the value must greater than or equal to 300
     * seconds (5 minutes) and less than or equal to 50400 seconds (840 minutes). </p>
     */
    inline long long GetMaxDeliverySeconds() const { return m_maxDeliverySeconds; }
    inline bool MaxDeliverySecondsHasBeenSet() const { return m_maxDeliverySecondsHasBeenSet; }
    inline void SetMaxDeliverySeconds(long long value) { m_maxDeliverySecondsHasBeenSet = true; m_maxDeliverySeconds = value; }
    inline PutConfigurationSetDeliveryOptionsRequest& WithMaxDeliverySeconds(long long value) { SetMaxDeliverySeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    TlsPolicy m_tlsPolicy{TlsPolicy::NOT_SET};
    bool m_tlsPolicyHasBeenSet = false;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet = false;

    long long m_maxDeliverySeconds{0};
    bool m_maxDeliverySecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
