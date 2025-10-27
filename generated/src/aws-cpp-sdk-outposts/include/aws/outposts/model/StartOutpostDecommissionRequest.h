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
class StartOutpostDecommissionRequest : public OutpostsRequest {
 public:
  AWS_OUTPOSTS_API StartOutpostDecommissionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartOutpostDecommission"; }

  AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or ARN of the Outpost that you want to decommission.</p>
   */
  inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
  inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
  template <typename OutpostIdentifierT = Aws::String>
  void SetOutpostIdentifier(OutpostIdentifierT&& value) {
    m_outpostIdentifierHasBeenSet = true;
    m_outpostIdentifier = std::forward<OutpostIdentifierT>(value);
  }
  template <typename OutpostIdentifierT = Aws::String>
  StartOutpostDecommissionRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) {
    SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Validates the request without starting the decommission process.</p>
   */
  inline bool GetValidateOnly() const { return m_validateOnly; }
  inline bool ValidateOnlyHasBeenSet() const { return m_validateOnlyHasBeenSet; }
  inline void SetValidateOnly(bool value) {
    m_validateOnlyHasBeenSet = true;
    m_validateOnly = value;
  }
  inline StartOutpostDecommissionRequest& WithValidateOnly(bool value) {
    SetValidateOnly(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_outpostIdentifier;
  bool m_outpostIdentifierHasBeenSet = false;

  bool m_validateOnly{false};
  bool m_validateOnlyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
