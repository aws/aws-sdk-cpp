/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/TLSInspectionConfiguration.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class UpdateTLSInspectionConfigurationRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateTLSInspectionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTLSInspectionConfiguration"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationArn() const{ return m_tLSInspectionConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline bool TLSInspectionConfigurationArnHasBeenSet() const { return m_tLSInspectionConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline void SetTLSInspectionConfigurationArn(const Aws::String& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline void SetTLSInspectionConfigurationArn(Aws::String&& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline void SetTLSInspectionConfigurationArn(const char* value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationArn(const Aws::String& value) { SetTLSInspectionConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationArn(Aws::String&& value) { SetTLSInspectionConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationArn(const char* value) { SetTLSInspectionConfigurationArn(value); return *this;}


    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationName() const{ return m_tLSInspectionConfigurationName; }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline bool TLSInspectionConfigurationNameHasBeenSet() const { return m_tLSInspectionConfigurationNameHasBeenSet; }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline void SetTLSInspectionConfigurationName(const Aws::String& value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName = value; }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline void SetTLSInspectionConfigurationName(Aws::String&& value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName = std::move(value); }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline void SetTLSInspectionConfigurationName(const char* value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName.assign(value); }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(const Aws::String& value) { SetTLSInspectionConfigurationName(value); return *this;}

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(Aws::String&& value) { SetTLSInspectionConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(const char* value) { SetTLSInspectionConfigurationName(value); return *this;}


    /**
     * <p>The object that defines a TLS inspection configuration. This, along with
     * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
     * configuration. You can retrieve all objects for a TLS inspection configuration
     * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
     * uses a TLS inspection configuration to decrypt traffic. Network Firewall
     * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
     * TLS inspection configuration, you add it to a new Network Firewall firewall
     * policy, then you apply the firewall policy to a firewall. Network Firewall acts
     * as a proxy service to decrypt and inspect the traffic traveling through your
     * firewalls. You can reference a TLS inspection configuration from more than one
     * firewall policy, and you can use a firewall policy in more than one firewall.
     * For more information about using TLS inspection configurations, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p>
     */
    inline const TLSInspectionConfiguration& GetTLSInspectionConfiguration() const{ return m_tLSInspectionConfiguration; }

    /**
     * <p>The object that defines a TLS inspection configuration. This, along with
     * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
     * configuration. You can retrieve all objects for a TLS inspection configuration
     * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
     * uses a TLS inspection configuration to decrypt traffic. Network Firewall
     * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
     * TLS inspection configuration, you add it to a new Network Firewall firewall
     * policy, then you apply the firewall policy to a firewall. Network Firewall acts
     * as a proxy service to decrypt and inspect the traffic traveling through your
     * firewalls. You can reference a TLS inspection configuration from more than one
     * firewall policy, and you can use a firewall policy in more than one firewall.
     * For more information about using TLS inspection configurations, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p>
     */
    inline bool TLSInspectionConfigurationHasBeenSet() const { return m_tLSInspectionConfigurationHasBeenSet; }

    /**
     * <p>The object that defines a TLS inspection configuration. This, along with
     * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
     * configuration. You can retrieve all objects for a TLS inspection configuration
     * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
     * uses a TLS inspection configuration to decrypt traffic. Network Firewall
     * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
     * TLS inspection configuration, you add it to a new Network Firewall firewall
     * policy, then you apply the firewall policy to a firewall. Network Firewall acts
     * as a proxy service to decrypt and inspect the traffic traveling through your
     * firewalls. You can reference a TLS inspection configuration from more than one
     * firewall policy, and you can use a firewall policy in more than one firewall.
     * For more information about using TLS inspection configurations, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p>
     */
    inline void SetTLSInspectionConfiguration(const TLSInspectionConfiguration& value) { m_tLSInspectionConfigurationHasBeenSet = true; m_tLSInspectionConfiguration = value; }

    /**
     * <p>The object that defines a TLS inspection configuration. This, along with
     * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
     * configuration. You can retrieve all objects for a TLS inspection configuration
     * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
     * uses a TLS inspection configuration to decrypt traffic. Network Firewall
     * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
     * TLS inspection configuration, you add it to a new Network Firewall firewall
     * policy, then you apply the firewall policy to a firewall. Network Firewall acts
     * as a proxy service to decrypt and inspect the traffic traveling through your
     * firewalls. You can reference a TLS inspection configuration from more than one
     * firewall policy, and you can use a firewall policy in more than one firewall.
     * For more information about using TLS inspection configurations, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p>
     */
    inline void SetTLSInspectionConfiguration(TLSInspectionConfiguration&& value) { m_tLSInspectionConfigurationHasBeenSet = true; m_tLSInspectionConfiguration = std::move(value); }

    /**
     * <p>The object that defines a TLS inspection configuration. This, along with
     * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
     * configuration. You can retrieve all objects for a TLS inspection configuration
     * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
     * uses a TLS inspection configuration to decrypt traffic. Network Firewall
     * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
     * TLS inspection configuration, you add it to a new Network Firewall firewall
     * policy, then you apply the firewall policy to a firewall. Network Firewall acts
     * as a proxy service to decrypt and inspect the traffic traveling through your
     * firewalls. You can reference a TLS inspection configuration from more than one
     * firewall policy, and you can use a firewall policy in more than one firewall.
     * For more information about using TLS inspection configurations, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfiguration(const TLSInspectionConfiguration& value) { SetTLSInspectionConfiguration(value); return *this;}

    /**
     * <p>The object that defines a TLS inspection configuration. This, along with
     * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
     * configuration. You can retrieve all objects for a TLS inspection configuration
     * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
     * uses a TLS inspection configuration to decrypt traffic. Network Firewall
     * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
     * TLS inspection configuration, you add it to a new Network Firewall firewall
     * policy, then you apply the firewall policy to a firewall. Network Firewall acts
     * as a proxy service to decrypt and inspect the traffic traveling through your
     * firewalls. You can reference a TLS inspection configuration from more than one
     * firewall policy, and you can use a firewall policy in more than one firewall.
     * For more information about using TLS inspection configurations, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithTLSInspectionConfiguration(TLSInspectionConfiguration&& value) { SetTLSInspectionConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateTLSInspectionConfigurationRequest& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}

  private:

    Aws::String m_tLSInspectionConfigurationArn;
    bool m_tLSInspectionConfigurationArnHasBeenSet = false;

    Aws::String m_tLSInspectionConfigurationName;
    bool m_tLSInspectionConfigurationNameHasBeenSet = false;

    TLSInspectionConfiguration m_tLSInspectionConfiguration;
    bool m_tLSInspectionConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
