/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/UseCaseInformation.h>

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
 * <p>A use case entry, as in <code>GetListing</code> without the
 * description.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/UseCaseSummaryEntry">AWS
 * API Reference</a></p>
 */
class UseCaseSummaryEntry {
 public:
  AWS_MARKETPLACEDISCOVERY_API UseCaseSummaryEntry() = default;
  AWS_MARKETPLACEDISCOVERY_API UseCaseSummaryEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API UseCaseSummaryEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name and identifier of the use case.</p>
   */
  inline const UseCaseInformation& GetUseCase() const { return m_useCase; }
  inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
  template <typename UseCaseT = UseCaseInformation>
  void SetUseCase(UseCaseT&& value) {
    m_useCaseHasBeenSet = true;
    m_useCase = std::forward<UseCaseT>(value);
  }
  template <typename UseCaseT = UseCaseInformation>
  UseCaseSummaryEntry& WithUseCase(UseCaseT&& value) {
    SetUseCase(std::forward<UseCaseT>(value));
    return *this;
  }
  ///@}
 private:
  UseCaseInformation m_useCase;
  bool m_useCaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
