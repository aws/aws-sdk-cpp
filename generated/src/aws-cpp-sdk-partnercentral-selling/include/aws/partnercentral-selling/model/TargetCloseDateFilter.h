/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Filters opportunities based on their target close date.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/TargetCloseDateFilter">AWS
 * API Reference</a></p>
 */
class TargetCloseDateFilter {
 public:
  AWS_PARTNERCENTRALSELLING_API TargetCloseDateFilter() = default;
  AWS_PARTNERCENTRALSELLING_API TargetCloseDateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API TargetCloseDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters opportunities with a target close date after this date. Use the
   * <code>YYYY-MM-DD</code> format.</p>
   */
  inline const Aws::String& GetAfterTargetCloseDate() const { return m_afterTargetCloseDate; }
  inline bool AfterTargetCloseDateHasBeenSet() const { return m_afterTargetCloseDateHasBeenSet; }
  template <typename AfterTargetCloseDateT = Aws::String>
  void SetAfterTargetCloseDate(AfterTargetCloseDateT&& value) {
    m_afterTargetCloseDateHasBeenSet = true;
    m_afterTargetCloseDate = std::forward<AfterTargetCloseDateT>(value);
  }
  template <typename AfterTargetCloseDateT = Aws::String>
  TargetCloseDateFilter& WithAfterTargetCloseDate(AfterTargetCloseDateT&& value) {
    SetAfterTargetCloseDate(std::forward<AfterTargetCloseDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters opportunities with a target close date before this date. Use the
   * <code>YYYY-MM-DD</code> format.</p>
   */
  inline const Aws::String& GetBeforeTargetCloseDate() const { return m_beforeTargetCloseDate; }
  inline bool BeforeTargetCloseDateHasBeenSet() const { return m_beforeTargetCloseDateHasBeenSet; }
  template <typename BeforeTargetCloseDateT = Aws::String>
  void SetBeforeTargetCloseDate(BeforeTargetCloseDateT&& value) {
    m_beforeTargetCloseDateHasBeenSet = true;
    m_beforeTargetCloseDate = std::forward<BeforeTargetCloseDateT>(value);
  }
  template <typename BeforeTargetCloseDateT = Aws::String>
  TargetCloseDateFilter& WithBeforeTargetCloseDate(BeforeTargetCloseDateT&& value) {
    SetBeforeTargetCloseDate(std::forward<BeforeTargetCloseDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_afterTargetCloseDate;

  Aws::String m_beforeTargetCloseDate;
  bool m_afterTargetCloseDateHasBeenSet = false;
  bool m_beforeTargetCloseDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
