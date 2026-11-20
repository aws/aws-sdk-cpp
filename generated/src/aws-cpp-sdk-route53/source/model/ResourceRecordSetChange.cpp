/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ResourceRecordSetChange.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

ResourceRecordSetChange::ResourceRecordSetChange(const XmlNode& xmlNode) { *this = xmlNode; }

ResourceRecordSetChange& ResourceRecordSetChange::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode changeIdNode = resultNode.FirstChild("ChangeId");
    if (!changeIdNode.IsNull()) {
      m_changeId = Aws::Utils::Xml::DecodeEscapedXmlText(changeIdNode.GetText());
      m_changeIdHasBeenSet = true;
    }
    XmlNode operationNode = resultNode.FirstChild("Operation");
    if (!operationNode.IsNull()) {
      m_operation = ChangeHistoryOperationMapper::GetChangeHistoryOperationForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(operationNode.GetText()).c_str()));
      m_operationHasBeenSet = true;
    }
    XmlNode submittedAtNode = resultNode.FirstChild("SubmittedAt");
    if (!submittedAtNode.IsNull()) {
      m_submittedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(submittedAtNode.GetText()).c_str()).c_str(),
                               Aws::Utils::DateFormat::ISO_8601);
      m_submittedAtHasBeenSet = true;
    }
    XmlNode submittedByNode = resultNode.FirstChild("SubmittedBy");
    if (!submittedByNode.IsNull()) {
      m_submittedBy = Aws::Utils::Xml::DecodeEscapedXmlText(submittedByNode.GetText());
      m_submittedByHasBeenSet = true;
    }
    XmlNode requestIdNode = resultNode.FirstChild("RequestId");
    if (!requestIdNode.IsNull()) {
      m_requestId = Aws::Utils::Xml::DecodeEscapedXmlText(requestIdNode.GetText());
      m_requestIdHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if (!actionNode.IsNull()) {
      m_action = ChangeActionMapper::GetChangeActionForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()));
      m_actionHasBeenSet = true;
    }
    XmlNode resourceRecordSetNode = resultNode.FirstChild("ResourceRecordSet");
    if (!resourceRecordSetNode.IsNull()) {
      m_resourceRecordSet = resourceRecordSetNode;
      m_resourceRecordSetHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceRecordSetChange::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_changeIdHasBeenSet) {
    XmlNode changeIdNode = parentNode.CreateChildElement("ChangeId");
    changeIdNode.SetText(m_changeId);
  }

  if (m_operationHasBeenSet) {
    XmlNode operationNode = parentNode.CreateChildElement("Operation");
    operationNode.SetText(ChangeHistoryOperationMapper::GetNameForChangeHistoryOperation(m_operation));
  }

  if (m_submittedAtHasBeenSet) {
    XmlNode submittedAtNode = parentNode.CreateChildElement("SubmittedAt");
    submittedAtNode.SetText(m_submittedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_submittedByHasBeenSet) {
    XmlNode submittedByNode = parentNode.CreateChildElement("SubmittedBy");
    submittedByNode.SetText(m_submittedBy);
  }

  if (m_requestIdHasBeenSet) {
    XmlNode requestIdNode = parentNode.CreateChildElement("RequestId");
    requestIdNode.SetText(m_requestId);
  }

  if (m_actionHasBeenSet) {
    XmlNode actionNode = parentNode.CreateChildElement("Action");
    actionNode.SetText(ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if (m_resourceRecordSetHasBeenSet) {
    XmlNode resourceRecordSetNode = parentNode.CreateChildElement("ResourceRecordSet");
    m_resourceRecordSet.AddToNode(resourceRecordSetNode);
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
