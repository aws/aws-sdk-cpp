/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZRequest.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SupportAuthZ {
namespace Model {

/**
 */
class DeleteSupportPermitRequest : public SupportAuthZRequest {
 public:
  AWS_SUPPORTAUTHZ_API DeleteSupportPermitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteSupportPermit"; }

  AWS_SUPPORTAUTHZ_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) or name of the support permit to delete.</p>
   */
  inline const Aws::String& GetSupportPermitIdentifier() const { return m_supportPermitIdentifier; }
  inline bool SupportPermitIdentifierHasBeenSet() const { return m_supportPermitIdentifierHasBeenSet; }
  template <typename SupportPermitIdentifierT = Aws::String>
  void SetSupportPermitIdentifier(SupportPermitIdentifierT&& value) {
    m_supportPermitIdentifierHasBeenSet = true;
    m_supportPermitIdentifier = std::forward<SupportPermitIdentifierT>(value);
  }
  template <typename SupportPermitIdentifierT = Aws::String>
  DeleteSupportPermitRequest& WithSupportPermitIdentifier(SupportPermitIdentifierT&& value) {
    SetSupportPermitIdentifier(std::forward<SupportPermitIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_supportPermitIdentifier;
  bool m_supportPermitIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
