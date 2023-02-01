/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Configures one or more IP set references for a Suricata-compatible rule
   * group. This is used in <a>CreateRuleGroup</a> or <a>UpdateRuleGroup</a>. An IP
   * set reference is a rule variable that references a resource that you create and
   * manage in another Amazon Web Services service, such as an Amazon VPC prefix
   * list. Network Firewall IP set references enable you to dynamically update the
   * contents of your rules. When you create, update, or delete the IP set you are
   * referencing in your rule, Network Firewall automatically updates the rule's
   * content with the changes. For more information about IP set references in
   * Network Firewall, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-ip-set-references">Using
   * IP set references</a> in the <i>Network Firewall Developer Guide</i>.</p> <p>
   * Network Firewall currently supports only <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/managed-prefix-lists.html">Amazon
   * VPC prefix lists</a> as IP set references. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IPSetReference">AWS
   * API Reference</a></p>
   */
  class IPSetReference
  {
  public:
    AWS_NETWORKFIREWALL_API IPSetReference();
    AWS_NETWORKFIREWALL_API IPSetReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API IPSetReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline IPSetReference& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline IPSetReference& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you are referencing in
     * your rule group.</p>
     */
    inline IPSetReference& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}

  private:

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
