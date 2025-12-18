/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SESV2 {
namespace Model {

/**
 * <p>A request to return validation insights about an email address.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailAddressInsightsRequest">AWS
 * API Reference</a></p>
 */
class GetEmailAddressInsightsRequest : public SESV2Request {
 public:
  AWS_SESV2_API GetEmailAddressInsightsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEmailAddressInsights"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The email address to analyze for validation insights.</p>
   */
  inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
  inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
  template <typename EmailAddressT = Aws::String>
  void SetEmailAddress(EmailAddressT&& value) {
    m_emailAddressHasBeenSet = true;
    m_emailAddress = std::forward<EmailAddressT>(value);
  }
  template <typename EmailAddressT = Aws::String>
  GetEmailAddressInsightsRequest& WithEmailAddress(EmailAddressT&& value) {
    SetEmailAddress(std::forward<EmailAddressT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailAddress;
  bool m_emailAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
