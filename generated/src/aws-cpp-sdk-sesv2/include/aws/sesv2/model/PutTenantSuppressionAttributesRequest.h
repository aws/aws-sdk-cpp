/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <aws/sesv2/model/SuppressionListScope.h>

#include <utility>

namespace Aws {
namespace SESV2 {
namespace Model {

/**
 * <p>A request to configure the suppression list preferences for a
 * tenant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutTenantSuppressionAttributesRequest">AWS
 * API Reference</a></p>
 */
class PutTenantSuppressionAttributesRequest : public SESV2Request {
 public:
  AWS_SESV2_API PutTenantSuppressionAttributesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutTenantSuppressionAttributes"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the tenant to configure suppression list preferences for.</p>
   */
  inline const Aws::String& GetTenantName() const { return m_tenantName; }
  inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
  template <typename TenantNameT = Aws::String>
  void SetTenantName(TenantNameT&& value) {
    m_tenantNameHasBeenSet = true;
    m_tenantName = std::forward<TenantNameT>(value);
  }
  template <typename TenantNameT = Aws::String>
  PutTenantSuppressionAttributesRequest& WithTenantName(TenantNameT&& value) {
    SetTenantName(std::forward<TenantNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list that contains the reasons that email addresses are automatically added
   * to the suppression list for the tenant. This list can contain any or all of the
   * following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an email
   * address to the suppression list when a message sent to that address results in a
   * complaint.</p> </li> <li> <p> <code>BOUNCE</code> – Amazon SES adds an email
   * address to the suppression list when a message sent to that address results in a
   * hard bounce.</p> </li> </ul>
   */
  inline const Aws::Vector<SuppressionListReason>& GetSuppressedReasons() const { return m_suppressedReasons; }
  inline bool SuppressedReasonsHasBeenSet() const { return m_suppressedReasonsHasBeenSet; }
  template <typename SuppressedReasonsT = Aws::Vector<SuppressionListReason>>
  void SetSuppressedReasons(SuppressedReasonsT&& value) {
    m_suppressedReasonsHasBeenSet = true;
    m_suppressedReasons = std::forward<SuppressedReasonsT>(value);
  }
  template <typename SuppressedReasonsT = Aws::Vector<SuppressionListReason>>
  PutTenantSuppressionAttributesRequest& WithSuppressedReasons(SuppressedReasonsT&& value) {
    SetSuppressedReasons(std::forward<SuppressedReasonsT>(value));
    return *this;
  }
  inline PutTenantSuppressionAttributesRequest& AddSuppressedReasons(SuppressionListReason value) {
    m_suppressedReasonsHasBeenSet = true;
    m_suppressedReasons.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The suppression scope for the tenant. Specify <code>TENANT</code> to use the
   * tenant's own suppression list, or <code>ACCOUNT</code> to use the account-level
   * suppression list.</p>  <p>If you don't specify a suppression scope, the
   * tenant defaults to <code>ACCOUNT</code> scope and uses the account-level
   * suppression list.</p>
   */
  inline SuppressionListScope GetSuppressionScope() const { return m_suppressionScope; }
  inline bool SuppressionScopeHasBeenSet() const { return m_suppressionScopeHasBeenSet; }
  inline void SetSuppressionScope(SuppressionListScope value) {
    m_suppressionScopeHasBeenSet = true;
    m_suppressionScope = value;
  }
  inline PutTenantSuppressionAttributesRequest& WithSuppressionScope(SuppressionListScope value) {
    SetSuppressionScope(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantName;

  Aws::Vector<SuppressionListReason> m_suppressedReasons;

  SuppressionListScope m_suppressionScope{SuppressionListScope::NOT_SET};
  bool m_tenantNameHasBeenSet = false;
  bool m_suppressedReasonsHasBeenSet = false;
  bool m_suppressionScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
