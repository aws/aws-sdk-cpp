/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
 * <p>Contains counts of resources for trend analysis.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesCount">AWS
 * API Reference</a></p>
 */
class ResourcesCount {
 public:
  AWS_SECURITYHUB_API ResourcesCount() = default;
  AWS_SECURITYHUB_API ResourcesCount(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourcesCount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total count of all resources for the given time interval.</p>
   */
  inline long long GetAllResources() const { return m_allResources; }
  inline bool AllResourcesHasBeenSet() const { return m_allResourcesHasBeenSet; }
  inline void SetAllResources(long long value) {
    m_allResourcesHasBeenSet = true;
    m_allResources = value;
  }
  inline ResourcesCount& WithAllResources(long long value) {
    SetAllResources(value);
    return *this;
  }
  ///@}
 private:
  long long m_allResources{0};
  bool m_allResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
