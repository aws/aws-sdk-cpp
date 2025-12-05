/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class UpdateHostedZoneAssociationRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateHostedZoneAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateHostedZoneAssociation"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the private hosted zone association.</p>
   */
  inline const Aws::String& GetHostedZoneAssociationId() const { return m_hostedZoneAssociationId; }
  inline bool HostedZoneAssociationIdHasBeenSet() const { return m_hostedZoneAssociationIdHasBeenSet; }
  template <typename HostedZoneAssociationIdT = Aws::String>
  void SetHostedZoneAssociationId(HostedZoneAssociationIdT&& value) {
    m_hostedZoneAssociationIdHasBeenSet = true;
    m_hostedZoneAssociationId = std::forward<HostedZoneAssociationIdT>(value);
  }
  template <typename HostedZoneAssociationIdT = Aws::String>
  UpdateHostedZoneAssociationRequest& WithHostedZoneAssociationId(HostedZoneAssociationIdT&& value) {
    SetHostedZoneAssociationId(std::forward<HostedZoneAssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name you want to update the hosted zone association to.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateHostedZoneAssociationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneAssociationId;

  Aws::String m_name;
  bool m_hostedZoneAssociationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
