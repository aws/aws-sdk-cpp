/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>Filter for opportunities based on creation date range.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CreatedDateFilter">AWS
 * API Reference</a></p>
 */
class CreatedDateFilter {
 public:
  AWS_PARTNERCENTRALSELLING_API CreatedDateFilter() = default;
  AWS_PARTNERCENTRALSELLING_API CreatedDateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API CreatedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter opportunities created after this date.</p>
   */
  inline const Aws::Utils::DateTime& GetAfterCreatedDate() const { return m_afterCreatedDate; }
  inline bool AfterCreatedDateHasBeenSet() const { return m_afterCreatedDateHasBeenSet; }
  template <typename AfterCreatedDateT = Aws::Utils::DateTime>
  void SetAfterCreatedDate(AfterCreatedDateT&& value) {
    m_afterCreatedDateHasBeenSet = true;
    m_afterCreatedDate = std::forward<AfterCreatedDateT>(value);
  }
  template <typename AfterCreatedDateT = Aws::Utils::DateTime>
  CreatedDateFilter& WithAfterCreatedDate(AfterCreatedDateT&& value) {
    SetAfterCreatedDate(std::forward<AfterCreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter opportunities created before this date.</p>
   */
  inline const Aws::Utils::DateTime& GetBeforeCreatedDate() const { return m_beforeCreatedDate; }
  inline bool BeforeCreatedDateHasBeenSet() const { return m_beforeCreatedDateHasBeenSet; }
  template <typename BeforeCreatedDateT = Aws::Utils::DateTime>
  void SetBeforeCreatedDate(BeforeCreatedDateT&& value) {
    m_beforeCreatedDateHasBeenSet = true;
    m_beforeCreatedDate = std::forward<BeforeCreatedDateT>(value);
  }
  template <typename BeforeCreatedDateT = Aws::Utils::DateTime>
  CreatedDateFilter& WithBeforeCreatedDate(BeforeCreatedDateT&& value) {
    SetBeforeCreatedDate(std::forward<BeforeCreatedDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_afterCreatedDate{};

  Aws::Utils::DateTime m_beforeCreatedDate{};
  bool m_afterCreatedDateHasBeenSet = false;
  bool m_beforeCreatedDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
