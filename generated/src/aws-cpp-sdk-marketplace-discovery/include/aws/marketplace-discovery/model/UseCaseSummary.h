/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/UseCaseSummaryEntry.h>

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
 * <p>The use cases of a listing, in summary form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/UseCaseSummary">AWS
 * API Reference</a></p>
 */
class UseCaseSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API UseCaseSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API UseCaseSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API UseCaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The use cases, in the order the seller defined them.</p>
   */
  inline const Aws::Vector<UseCaseSummaryEntry>& GetUseCases() const { return m_useCases; }
  inline bool UseCasesHasBeenSet() const { return m_useCasesHasBeenSet; }
  template <typename UseCasesT = Aws::Vector<UseCaseSummaryEntry>>
  void SetUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases = std::forward<UseCasesT>(value);
  }
  template <typename UseCasesT = Aws::Vector<UseCaseSummaryEntry>>
  UseCaseSummary& WithUseCases(UseCasesT&& value) {
    SetUseCases(std::forward<UseCasesT>(value));
    return *this;
  }
  template <typename UseCasesT = UseCaseSummaryEntry>
  UseCaseSummary& AddUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases.emplace_back(std::forward<UseCasesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<UseCaseSummaryEntry> m_useCases;
  bool m_useCasesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
