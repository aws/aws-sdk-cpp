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
class RejectSupportPermitRequestRequest : public SupportAuthZRequest {
 public:
  AWS_SUPPORTAUTHZ_API RejectSupportPermitRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RejectSupportPermitRequest"; }

  AWS_SUPPORTAUTHZ_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the permit request to reject.</p>
   */
  inline const Aws::String& GetRequestArn() const { return m_requestArn; }
  inline bool RequestArnHasBeenSet() const { return m_requestArnHasBeenSet; }
  template <typename RequestArnT = Aws::String>
  void SetRequestArn(RequestArnT&& value) {
    m_requestArnHasBeenSet = true;
    m_requestArn = std::forward<RequestArnT>(value);
  }
  template <typename RequestArnT = Aws::String>
  RejectSupportPermitRequestRequest& WithRequestArn(RequestArnT&& value) {
    SetRequestArn(std::forward<RequestArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestArn;
  bool m_requestArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
