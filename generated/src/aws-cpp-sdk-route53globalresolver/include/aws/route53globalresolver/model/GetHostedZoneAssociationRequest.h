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
class GetHostedZoneAssociationRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API GetHostedZoneAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetHostedZoneAssociation"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ID of the private hosted zone association.</p>
   */
  inline const Aws::String& GetHostedZoneAssociationId() const { return m_hostedZoneAssociationId; }
  inline bool HostedZoneAssociationIdHasBeenSet() const { return m_hostedZoneAssociationIdHasBeenSet; }
  template <typename HostedZoneAssociationIdT = Aws::String>
  void SetHostedZoneAssociationId(HostedZoneAssociationIdT&& value) {
    m_hostedZoneAssociationIdHasBeenSet = true;
    m_hostedZoneAssociationId = std::forward<HostedZoneAssociationIdT>(value);
  }
  template <typename HostedZoneAssociationIdT = Aws::String>
  GetHostedZoneAssociationRequest& WithHostedZoneAssociationId(HostedZoneAssociationIdT&& value) {
    SetHostedZoneAssociationId(std::forward<HostedZoneAssociationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneAssociationId;
  bool m_hostedZoneAssociationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
