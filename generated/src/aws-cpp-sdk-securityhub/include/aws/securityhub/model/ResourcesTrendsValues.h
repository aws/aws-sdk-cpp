/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourcesCount.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Contains the aggregated resource count values for a specific point in the
 * resources trend timeline.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesTrendsValues">AWS
 * API Reference</a></p>
 */
class ResourcesTrendsValues {
 public:
  AWS_SECURITYHUB_API ResourcesTrendsValues() = default;
  AWS_SECURITYHUB_API ResourcesTrendsValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourcesTrendsValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource count statistics for this data point in the trend timeline.</p>
   */
  inline const ResourcesCount& GetResourcesCount() const { return m_resourcesCount; }
  inline bool ResourcesCountHasBeenSet() const { return m_resourcesCountHasBeenSet; }
  template <typename ResourcesCountT = ResourcesCount>
  void SetResourcesCount(ResourcesCountT&& value) {
    m_resourcesCountHasBeenSet = true;
    m_resourcesCount = std::forward<ResourcesCountT>(value);
  }
  template <typename ResourcesCountT = ResourcesCount>
  ResourcesTrendsValues& WithResourcesCount(ResourcesCountT&& value) {
    SetResourcesCount(std::forward<ResourcesCountT>(value));
    return *this;
  }
  ///@}
 private:
  ResourcesCount m_resourcesCount;
  bool m_resourcesCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
