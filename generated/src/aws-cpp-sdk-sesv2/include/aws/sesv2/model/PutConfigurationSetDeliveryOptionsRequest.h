/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SharedPoolDeliveryMode.h>
#include <aws/sesv2/model/TlsPolicy.h>

#include <utility>

namespace Aws {
namespace SESV2 {
namespace Model {

/**
 * <p>A request to associate a configuration set with a dedicated IP
 * pool.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetDeliveryOptionsRequest">AWS
 * API Reference</a></p>
 */
class PutConfigurationSetDeliveryOptionsRequest : public SESV2Request {
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
  template <typename ConfigurationSetNameT = Aws::String>
  void SetConfigurationSetName(ConfigurationSetNameT&& value) {
    m_configurationSetNameHasBeenSet = true;
    m_configurationSetName = std::forward<ConfigurationSetNameT>(value);
  }
  template <typename ConfigurationSetNameT = Aws::String>
  PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) {
    SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether messages that use the configuration set are required to use
   * Transport Layer Security (TLS). If the value is <code>REQUIRE</code>, messages
   * are only delivered if a TLS connection can be established. If the value is
   * <code>OPTIONAL</code>, messages can be delivered in plain text if a TLS
   * connection can't be established.</p>
   */
  inline TlsPolicy GetTlsPolicy() const { return m_tlsPolicy; }
  inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }
  inline void SetTlsPolicy(TlsPolicy value) {
    m_tlsPolicyHasBeenSet = true;
    m_tlsPolicy = value;
  }
  inline PutConfigurationSetDeliveryOptionsRequest& WithTlsPolicy(TlsPolicy value) {
    SetTlsPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the dedicated IP pool to associate with the configuration
   * set.</p>
   */
  inline const Aws::String& GetSendingPoolName() const { return m_sendingPoolName; }
  inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }
  template <typename SendingPoolNameT = Aws::String>
  void SetSendingPoolName(SendingPoolNameT&& value) {
    m_sendingPoolNameHasBeenSet = true;
    m_sendingPoolName = std::forward<SendingPoolNameT>(value);
  }
  template <typename SendingPoolNameT = Aws::String>
  PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(SendingPoolNameT&& value) {
    SetSendingPoolName(std::forward<SendingPoolNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount of time, in seconds, that Amazon SES API v2 will attempt
   * delivery of email. If specified, the value must greater than or equal to 300
   * seconds (5 minutes) and less than or equal to 50400 seconds (840 minutes). </p>
   */
  inline long long GetMaxDeliverySeconds() const { return m_maxDeliverySeconds; }
  inline bool MaxDeliverySecondsHasBeenSet() const { return m_maxDeliverySecondsHasBeenSet; }
  inline void SetMaxDeliverySeconds(long long value) {
    m_maxDeliverySecondsHasBeenSet = true;
    m_maxDeliverySeconds = value;
  }
  inline PutConfigurationSetDeliveryOptionsRequest& WithMaxDeliverySeconds(long long value) {
    SetMaxDeliverySeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shared pool delivery mode for email that you send with the configuration
   * set from shared IP addresses. This setting overrides the shared pool delivery
   * mode of your account. Can be one of the following:</p> <ul> <li> <p>
   * <code>GLOBAL</code> – Amazon SES delivers from your sending Region first and,
   * when it improves your deliverability, also uses Amazon SES shared IP addresses
   * with established sending history in other Amazon Web Services Regions within the
   * same Amazon Web Services partition.</p> </li> <li> <p> <code>REGIONAL</code> –
   * Amazon SES delivers your email only from shared IP addresses in your sending
   * Region.</p> </li> <li> <p> <code>ACCOUNT</code> – The configuration set uses the
   * shared pool delivery mode of your account.</p> </li> </ul> <p>If you don't
   * specify a value, the current value doesn't change.</p>
   */
  inline SharedPoolDeliveryMode GetSharedPoolDeliveryMode() const { return m_sharedPoolDeliveryMode; }
  inline bool SharedPoolDeliveryModeHasBeenSet() const { return m_sharedPoolDeliveryModeHasBeenSet; }
  inline void SetSharedPoolDeliveryMode(SharedPoolDeliveryMode value) {
    m_sharedPoolDeliveryModeHasBeenSet = true;
    m_sharedPoolDeliveryMode = value;
  }
  inline PutConfigurationSetDeliveryOptionsRequest& WithSharedPoolDeliveryMode(SharedPoolDeliveryMode value) {
    SetSharedPoolDeliveryMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_configurationSetName;

  TlsPolicy m_tlsPolicy{TlsPolicy::NOT_SET};

  Aws::String m_sendingPoolName;

  long long m_maxDeliverySeconds{0};

  SharedPoolDeliveryMode m_sharedPoolDeliveryMode{SharedPoolDeliveryMode::NOT_SET};
  bool m_configurationSetNameHasBeenSet = false;
  bool m_tlsPolicyHasBeenSet = false;
  bool m_sendingPoolNameHasBeenSet = false;
  bool m_maxDeliverySecondsHasBeenSet = false;
  bool m_sharedPoolDeliveryModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
