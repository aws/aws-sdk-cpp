/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RolesAnywhere {
namespace Model {

/**
 */
class GetTrustAnchorRequest : public RolesAnywhereRequest {
 public:
  AWS_ROLESANYWHERE_API GetTrustAnchorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTrustAnchor"; }

  AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The trust anchor to act on. You can specify one of the following:</p> <ul>
   * <li> <p>The trust anchor ID.</p> </li> <li> <p>The trust anchor ARN.</p> </li>
   * <li> <p>The alias ARN of the trust anchor.</p> </li> </ul> <p>An ARN must be for
   * a trust anchor in your account and Region.</p>
   */
  inline const Aws::String& GetTrustAnchorId() const { return m_trustAnchorId; }
  inline bool TrustAnchorIdHasBeenSet() const { return m_trustAnchorIdHasBeenSet; }
  template <typename TrustAnchorIdT = Aws::String>
  void SetTrustAnchorId(TrustAnchorIdT&& value) {
    m_trustAnchorIdHasBeenSet = true;
    m_trustAnchorId = std::forward<TrustAnchorIdT>(value);
  }
  template <typename TrustAnchorIdT = Aws::String>
  GetTrustAnchorRequest& WithTrustAnchorId(TrustAnchorIdT&& value) {
    SetTrustAnchorId(std::forward<TrustAnchorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trustAnchorId;
  bool m_trustAnchorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
