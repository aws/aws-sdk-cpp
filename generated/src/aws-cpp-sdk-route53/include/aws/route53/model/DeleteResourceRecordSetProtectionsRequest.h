/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ResourceRecordSetProtectionKey.h>

#include <utility>

namespace Aws {
namespace Route53 {
namespace Model {

/**
 */
class DeleteResourceRecordSetProtectionsRequest : public Route53Request {
 public:
  AWS_ROUTE53_API DeleteResourceRecordSetProtectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceRecordSetProtections"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the hosted zone that contains the protections that you want to
   * delete.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  DeleteResourceRecordSetProtectionsRequest& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name and type of each protection to delete. The list must contain at
   * least one entry and can contain up to 100 entries. Each name and type can appear
   * only once in the list.</p>
   */
  inline const Aws::Vector<ResourceRecordSetProtectionKey>& GetProtections() const { return m_protections; }
  inline bool ProtectionsHasBeenSet() const { return m_protectionsHasBeenSet; }
  template <typename ProtectionsT = Aws::Vector<ResourceRecordSetProtectionKey>>
  void SetProtections(ProtectionsT&& value) {
    m_protectionsHasBeenSet = true;
    m_protections = std::forward<ProtectionsT>(value);
  }
  template <typename ProtectionsT = Aws::Vector<ResourceRecordSetProtectionKey>>
  DeleteResourceRecordSetProtectionsRequest& WithProtections(ProtectionsT&& value) {
    SetProtections(std::forward<ProtectionsT>(value));
    return *this;
  }
  template <typename ProtectionsT = ResourceRecordSetProtectionKey>
  DeleteResourceRecordSetProtectionsRequest& AddProtections(ProtectionsT&& value) {
    m_protectionsHasBeenSet = true;
    m_protections.emplace_back(std::forward<ProtectionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneId;

  Aws::Vector<ResourceRecordSetProtectionKey> m_protections;
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_protectionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
