/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/outposts/Outposts_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Outposts {
namespace Model {

/**
 */
class GetRenewalPricingRequest : public OutpostsRequest {
 public:
  AWS_OUTPOSTS_API GetRenewalPricingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRenewalPricing"; }

  AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or ARN of the Outpost.</p>
   */
  inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
  inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
  template <typename OutpostIdentifierT = Aws::String>
  void SetOutpostIdentifier(OutpostIdentifierT&& value) {
    m_outpostIdentifierHasBeenSet = true;
    m_outpostIdentifier = std::forward<OutpostIdentifierT>(value);
  }
  template <typename OutpostIdentifierT = Aws::String>
  GetRenewalPricingRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) {
    SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outpostIdentifier;
  bool m_outpostIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
