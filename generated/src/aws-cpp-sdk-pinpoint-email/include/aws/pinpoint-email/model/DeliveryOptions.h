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
    AWS_PINPOINTEMAIL_API DeliveryOptions();
    AWS_PINPOINTEMAIL_API DeliveryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API DeliveryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = std::move(value); }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline const Aws::String& GetSendingPoolName() const{ return m_sendingPoolName; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(const Aws::String& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = value; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(Aws::String&& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = std::move(value); }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(const char* value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName.assign(value); }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(const Aws::String& value) { SetSendingPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(Aws::String&& value) { SetSendingPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(const char* value) { SetSendingPoolName(value); return *this;}

  private:

    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet = false;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
