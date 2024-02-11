/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/TLSInspectionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/Tag.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class CreateTLSInspectionConfigurationRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API CreateTLSInspectionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTLSInspectionConfiguration"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(const Aws::String& value) { SetTLSInspectionConfigurationName(value); return *this;}

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline CreateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(Aws::String&& value) { SetTLSInspectionConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline CreateTLSInspectionConfigurationRequest& WithTLSInspectionConfigurationName(const char* value) { SetTLSInspectionConfigurationName(value); return *this;}


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
    inline CreateTLSInspectionConfigurationRequest& WithTLSInspectionConfiguration(const TLSInspectionConfiguration& value) { SetTLSInspectionConfiguration(value); return *this;}

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
    inline CreateTLSInspectionConfigurationRequest& WithTLSInspectionConfiguration(TLSInspectionConfiguration&& value) { SetTLSInspectionConfiguration(std::move(value)); return *this;}


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
    inline CreateTLSInspectionConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline CreateTLSInspectionConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline CreateTLSInspectionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateTLSInspectionConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateTLSInspectionConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateTLSInspectionConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline CreateTLSInspectionConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    
    inline CreateTLSInspectionConfigurationRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    
    inline CreateTLSInspectionConfigurationRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_tLSInspectionConfigurationName;
    bool m_tLSInspectionConfigurationNameHasBeenSet = false;

    TLSInspectionConfiguration m_tLSInspectionConfiguration;
    bool m_tLSInspectionConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
