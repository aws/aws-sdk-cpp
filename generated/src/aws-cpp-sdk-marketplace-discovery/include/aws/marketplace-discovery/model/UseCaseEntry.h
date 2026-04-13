/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/UseCase.h>

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
 * <p>An entry in the list of use cases for a listing.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/UseCaseEntry">AWS
 * API Reference</a></p>
 */
class UseCaseEntry {
 public:
  AWS_MARKETPLACEDISCOVERY_API UseCaseEntry() = default;
  AWS_MARKETPLACEDISCOVERY_API UseCaseEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API UseCaseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The use case details.</p>
   */
  inline const UseCase& GetUseCase() const { return m_useCase; }
  inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
  template <typename UseCaseT = UseCase>
  void SetUseCase(UseCaseT&& value) {
    m_useCaseHasBeenSet = true;
    m_useCase = std::forward<UseCaseT>(value);
  }
  template <typename UseCaseT = UseCase>
  UseCaseEntry& WithUseCase(UseCaseT&& value) {
    SetUseCase(std::forward<UseCaseT>(value));
    return *this;
  }
  ///@}
 private:
  UseCase m_useCase;
  bool m_useCaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
