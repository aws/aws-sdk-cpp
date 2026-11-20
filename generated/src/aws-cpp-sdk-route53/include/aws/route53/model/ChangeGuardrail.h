/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeGuardrailName.h>
#include <aws/route53/model/ChangeGuardrailStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {

/**
 * <p>A Change Guardrail and its status. A Change Guardrail checks each change to
 * the records in a hosted zone, and rejects the change if the check fails.</p>
 * <p>When you submit a <code>ChangeResourceRecordSets</code> request, Route 53
 * checks each change against every guardrail that is turned on. If a check fails,
 * Route 53 rejects the whole request and returns an error that identifies the
 * guardrail. If every check passes, Route 53 applies the changes.</p> <p>For
 * example, suppose that <code>ALIAS_TARGET_CHECK</code> is turned on, and an alias
 * record points to <code>www.example.com</code>. If you try to delete
 * <code>www.example.com</code>, Route 53 rejects the request. To delete the
 * record, first delete or change the alias record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeGuardrail">AWS
 * API Reference</a></p>
 */
class ChangeGuardrail {
 public:
  AWS_ROUTE53_API ChangeGuardrail() = default;
  AWS_ROUTE53_API ChangeGuardrail(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ChangeGuardrail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The name of the guardrail. Valid values are the following:</p> <dl>
   * <dt>NS_FORMAT_CHECK</dt> <dd> <p>This guardrail rejects an NS record whose value
   * looks like a Route 53 name server but isn't one.</p> </dd>
   * <dt>NS_DELEGATION_AUTHORITY_CHECK</dt> <dd> <p>This guardrail rejects an NS
   * record that delegates a subdomain to Route 53 name servers that don't host
   * it.</p> <p>This guardrail applies only to public hosted zones.</p> </dd>
   * <dt>NS_OCCLUSION_CHECK</dt> <dd> <p>This guardrail rejects a change that leaves
   * records under a delegated subdomain, where resolvers never use them.</p> </dd>
   * <dt>ALIAS_TARGET_CHECK</dt> <dd> <p>This guardrail rejects deleting a record
   * that an alias record in the same hosted zone points to.</p> </dd>
   * <dt>ACTIVE_RECORD_CHECK</dt> <dd> <p>This guardrail rejects deleting a record
   * that still receives DNS queries, if no other record with the same name and type
   * remains to answer them.</p> </dd> <dt>ACTIVE_DELEGATION_CHECK</dt> <dd> <p>This
   * guardrail rejects deleting the NS record for a subdomain while resolvers are
   * still referred to it.</p> </dd> </dl> <p>The tier of the hosted zone determines
   * which guardrails it includes and which ones you can turn on.</p>
   */
  inline ChangeGuardrailName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(ChangeGuardrailName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline ChangeGuardrail& WithName(ChangeGuardrailName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the guardrail. Valid values are the following:</p> <dl>
   * <dt>ENABLED</dt> <dd> <p> <code>ENABLED</code> means that the guardrail is
   * turned on.</p> </dd> <dt>DISABLED</dt> <dd> <p> <code>DISABLED</code> means that
   * the guardrail is turned off.</p> </dd> </dl>
   */
  inline ChangeGuardrailStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ChangeGuardrailStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ChangeGuardrail& WithStatus(ChangeGuardrailStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  ChangeGuardrailName m_name{ChangeGuardrailName::NOT_SET};

  ChangeGuardrailStatus m_status{ChangeGuardrailStatus::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
