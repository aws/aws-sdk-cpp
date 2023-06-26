/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/GeneratedRulesType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/TargetType.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Stateful inspection criteria for a domain list rule group. </p> <p>For HTTPS
   * traffic, domain filtering is SNI-based. It uses the server name indicator
   * extension of the TLS handshake.</p> <p>By default, Network Firewall domain list
   * inspection only includes traffic coming from the VPC where you deploy the
   * firewall. To inspect traffic from IP addresses outside of the deployment VPC,
   * you set the <code>HOME_NET</code> rule variable to include the CIDR range of the
   * deployment VPC plus the other CIDR ranges. For more information, see
   * <a>RuleVariables</a> in this guide and <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/stateful-rule-groups-domain-names.html">Stateful
   * domain list rule groups in Network Firewall</a> in the <i>Network Firewall
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RulesSourceList">AWS
   * API Reference</a></p>
   */
  class RulesSourceList
  {
  public:
    AWS_NETWORKFIREWALL_API RulesSourceList();
    AWS_NETWORKFIREWALL_API RulesSourceList(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RulesSourceList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline RulesSourceList& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline RulesSourceList& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline RulesSourceList& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline RulesSourceList& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. Valid domain
     * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
     * <code>abc.example.com</code> matches only the domain
     * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
     * wildcard, which you indicate with an initial '<code>.</code>'. For
     * example,<code>.example.com</code> matches <code>example.com</code> and matches
     * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
     * and <code>www.example.com</code>. </p> </li> </ul>
     */
    inline RulesSourceList& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline const Aws::Vector<TargetType>& GetTargetTypes() const{ return m_targetTypes; }

    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline bool TargetTypesHasBeenSet() const { return m_targetTypesHasBeenSet; }

    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline void SetTargetTypes(const Aws::Vector<TargetType>& value) { m_targetTypesHasBeenSet = true; m_targetTypes = value; }

    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline void SetTargetTypes(Aws::Vector<TargetType>&& value) { m_targetTypesHasBeenSet = true; m_targetTypes = std::move(value); }

    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline RulesSourceList& WithTargetTypes(const Aws::Vector<TargetType>& value) { SetTargetTypes(value); return *this;}

    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline RulesSourceList& WithTargetTypes(Aws::Vector<TargetType>&& value) { SetTargetTypes(std::move(value)); return *this;}

    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline RulesSourceList& AddTargetTypes(const TargetType& value) { m_targetTypesHasBeenSet = true; m_targetTypes.push_back(value); return *this; }

    /**
     * <p>The protocols you want to inspect. Specify <code>TLS_SNI</code> for
     * <code>HTTPS</code>. Specify <code>HTTP_HOST</code> for <code>HTTP</code>. You
     * can specify either or both. </p>
     */
    inline RulesSourceList& AddTargetTypes(TargetType&& value) { m_targetTypesHasBeenSet = true; m_targetTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline const GeneratedRulesType& GetGeneratedRulesType() const{ return m_generatedRulesType; }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline bool GeneratedRulesTypeHasBeenSet() const { return m_generatedRulesTypeHasBeenSet; }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline void SetGeneratedRulesType(const GeneratedRulesType& value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType = value; }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline void SetGeneratedRulesType(GeneratedRulesType&& value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType = std::move(value); }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline RulesSourceList& WithGeneratedRulesType(const GeneratedRulesType& value) { SetGeneratedRulesType(value); return *this;}

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline RulesSourceList& WithGeneratedRulesType(GeneratedRulesType&& value) { SetGeneratedRulesType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<TargetType> m_targetTypes;
    bool m_targetTypesHasBeenSet = false;

    GeneratedRulesType m_generatedRulesType;
    bool m_generatedRulesTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
