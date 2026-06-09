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
namespace Http {
class URI;
}  // namespace Http
namespace SESV2 {
namespace Model {

/**
 * <p>A request to remove an email address from the suppression list for your
 * account or for a specific tenant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteSuppressedDestinationRequest">AWS
 * API Reference</a></p>
 */
class DeleteSuppressedDestinationRequest : public SESV2Request {
 public:
  AWS_SESV2_API DeleteSuppressedDestinationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteSuppressedDestination"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  AWS_SESV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The suppressed email destination to remove from the suppression list for your
   * account or for the specified tenant.</p>
   */
  inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
  inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
  template <typename EmailAddressT = Aws::String>
  void SetEmailAddress(EmailAddressT&& value) {
    m_emailAddressHasBeenSet = true;
    m_emailAddress = std::forward<EmailAddressT>(value);
  }
  template <typename EmailAddressT = Aws::String>
  DeleteSuppressedDestinationRequest& WithEmailAddress(EmailAddressT&& value) {
    SetEmailAddress(std::forward<EmailAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the tenant whose suppression list you want to remove the address
   * from. If you omit this parameter, the address is removed from the account-level
   * suppression list.</p>
   */
  inline const Aws::String& GetTenantName() const { return m_tenantName; }
  inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
  template <typename TenantNameT = Aws::String>
  void SetTenantName(TenantNameT&& value) {
    m_tenantNameHasBeenSet = true;
    m_tenantName = std::forward<TenantNameT>(value);
  }
  template <typename TenantNameT = Aws::String>
  DeleteSuppressedDestinationRequest& WithTenantName(TenantNameT&& value) {
    SetTenantName(std::forward<TenantNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailAddress;

  Aws::String m_tenantName;
  bool m_emailAddressHasBeenSet = false;
  bool m_tenantNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
