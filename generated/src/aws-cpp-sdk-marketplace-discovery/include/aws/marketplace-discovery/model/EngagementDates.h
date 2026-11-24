/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Key implementation dates for a case study.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/EngagementDates">AWS
 * API Reference</a></p>
 */
class EngagementDates {
 public:
  AWS_MARKETPLACEDISCOVERY_API EngagementDates() = default;
  AWS_MARKETPLACEDISCOVERY_API EngagementDates(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API EngagementDates& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The implementation start date.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  EngagementDates& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The implementation completion date. The service omits this field for an
   * engagement in progress.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
  inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
  template <typename CompletionDateT = Aws::Utils::DateTime>
  void SetCompletionDate(CompletionDateT&& value) {
    m_completionDateHasBeenSet = true;
    m_completionDate = std::forward<CompletionDateT>(value);
  }
  template <typename CompletionDateT = Aws::Utils::DateTime>
  EngagementDates& WithCompletionDate(CompletionDateT&& value) {
    SetCompletionDate(std::forward<CompletionDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_completionDate{};
  bool m_startDateHasBeenSet = false;
  bool m_completionDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
