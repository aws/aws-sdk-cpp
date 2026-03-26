/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/uxc/UxcRequest.h>
#include <aws/uxc/Uxc_EXPORTS.h>
#include <aws/uxc/model/AccountColor.h>

#include <utility>

namespace Aws {
namespace uxc {
namespace Model {

/**
 */
class UpdateAccountCustomizationsRequest : public UxcRequest {
 public:
  AWS_UXC_API UpdateAccountCustomizationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountCustomizations"; }

  AWS_UXC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The account color preference to set. Set to <code>none</code> to reset to the
   * default (no color).</p>
   */
  inline AccountColor GetAccountColor() const { return m_accountColor; }
  inline bool AccountColorHasBeenSet() const { return m_accountColorHasBeenSet; }
  inline void SetAccountColor(AccountColor value) {
    m_accountColorHasBeenSet = true;
    m_accountColor = value;
  }
  inline UpdateAccountCustomizationsRequest& WithAccountColor(AccountColor value) {
    SetAccountColor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services service identifiers to make visible in the
   * Amazon Web Services Management Console. Set to <code>null</code> to reset to the
   * default, which makes all services visible. For valid service identifiers, call
   * <a
   * href="https://docs.aws.amazon.com/awsconsolehelpdocs/latest/APIReference/API_ListServices.html">ListServices</a>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVisibleServices() const { return m_visibleServices; }
  inline bool VisibleServicesHasBeenSet() const { return m_visibleServicesHasBeenSet; }
  template <typename VisibleServicesT = Aws::Vector<Aws::String>>
  void SetVisibleServices(VisibleServicesT&& value) {
    m_visibleServicesHasBeenSet = true;
    m_visibleServices = std::forward<VisibleServicesT>(value);
  }
  template <typename VisibleServicesT = Aws::Vector<Aws::String>>
  UpdateAccountCustomizationsRequest& WithVisibleServices(VisibleServicesT&& value) {
    SetVisibleServices(std::forward<VisibleServicesT>(value));
    return *this;
  }
  template <typename VisibleServicesT = Aws::String>
  UpdateAccountCustomizationsRequest& AddVisibleServices(VisibleServicesT&& value) {
    m_visibleServicesHasBeenSet = true;
    m_visibleServices.emplace_back(std::forward<VisibleServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services Region codes to make visible in the Amazon
   * Web Services Management Console. Set to <code>null</code> to reset to the
   * default, which makes all Regions visible. For a list of valid Region codes, see
   * <a
   * href="https://docs.aws.amazon.com/global-infrastructure/latest/regions/aws-regions.html">Amazon
   * Web Services Regions</a>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVisibleRegions() const { return m_visibleRegions; }
  inline bool VisibleRegionsHasBeenSet() const { return m_visibleRegionsHasBeenSet; }
  template <typename VisibleRegionsT = Aws::Vector<Aws::String>>
  void SetVisibleRegions(VisibleRegionsT&& value) {
    m_visibleRegionsHasBeenSet = true;
    m_visibleRegions = std::forward<VisibleRegionsT>(value);
  }
  template <typename VisibleRegionsT = Aws::Vector<Aws::String>>
  UpdateAccountCustomizationsRequest& WithVisibleRegions(VisibleRegionsT&& value) {
    SetVisibleRegions(std::forward<VisibleRegionsT>(value));
    return *this;
  }
  template <typename VisibleRegionsT = Aws::String>
  UpdateAccountCustomizationsRequest& AddVisibleRegions(VisibleRegionsT&& value) {
    m_visibleRegionsHasBeenSet = true;
    m_visibleRegions.emplace_back(std::forward<VisibleRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  AccountColor m_accountColor{AccountColor::NOT_SET};

  Aws::Vector<Aws::String> m_visibleServices;

  Aws::Vector<Aws::String> m_visibleRegions;
  bool m_accountColorHasBeenSet = false;
  bool m_visibleServicesHasBeenSet = false;
  bool m_visibleRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace uxc
}  // namespace Aws
