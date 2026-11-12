/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ResourceRecordSetProtectionConfig.h>

#include <utility>

namespace Aws {
namespace Route53 {
namespace Model {

/**
 */
class CreateResourceRecordSetProtectionsRequest : public Route53Request {
 public:
  AWS_ROUTE53_API CreateResourceRecordSetProtectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateResourceRecordSetProtections"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the hosted zone that contains the resource record sets that you
   * want to protect.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  CreateResourceRecordSetProtectionsRequest& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protections to create. Each entry specifies a resource record set name
   * and type, and an optional comment. The list must contain at least one entry and
   * can contain up to 100 entries. Each name and type can appear only once in the
   * list.</p>
   */
  inline const Aws::Vector<ResourceRecordSetProtectionConfig>& GetProtections() const { return m_protections; }
  inline bool ProtectionsHasBeenSet() const { return m_protectionsHasBeenSet; }
  template <typename ProtectionsT = Aws::Vector<ResourceRecordSetProtectionConfig>>
  void SetProtections(ProtectionsT&& value) {
    m_protectionsHasBeenSet = true;
    m_protections = std::forward<ProtectionsT>(value);
  }
  template <typename ProtectionsT = Aws::Vector<ResourceRecordSetProtectionConfig>>
  CreateResourceRecordSetProtectionsRequest& WithProtections(ProtectionsT&& value) {
    SetProtections(std::forward<ProtectionsT>(value));
    return *this;
  }
  template <typename ProtectionsT = ResourceRecordSetProtectionConfig>
  CreateResourceRecordSetProtectionsRequest& AddProtections(ProtectionsT&& value) {
    m_protectionsHasBeenSet = true;
    m_protections.emplace_back(std::forward<ProtectionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneId;

  Aws::Vector<ResourceRecordSetProtectionConfig> m_protections;
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_protectionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
