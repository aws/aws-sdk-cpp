/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/TlsPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Used to associate a configuration set with a dedicated IP pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeliveryOptions">AWS
   * API Reference</a></p>
   */
  class DeliveryOptions
  {
  public:
    AWS_PINPOINTEMAIL_API DeliveryOptions() = default;
    AWS_PINPOINTEMAIL_API DeliveryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API DeliveryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DeliveryOptions& WithTlsPolicy(TlsPolicy value) { SetTlsPolicy(value); return *this;}
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
    DeliveryOptions& WithSendingPoolName(SendingPoolNameT&& value) { SetSendingPoolName(std::forward<SendingPoolNameT>(value)); return *this;}
    ///@}
  private:

    TlsPolicy m_tlsPolicy{TlsPolicy::NOT_SET};
    bool m_tlsPolicyHasBeenSet = false;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
