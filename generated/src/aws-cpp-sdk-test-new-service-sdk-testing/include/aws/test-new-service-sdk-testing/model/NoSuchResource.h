/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TestNewServiceSDKTesting {
namespace Model {

class NoSuchResource {
 public:
  AWS_TESTNEWSERVICESDKTESTING_API NoSuchResource() = default;
  AWS_TESTNEWSERVICESDKTESTING_API NoSuchResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_TESTNEWSERVICESDKTESTING_API NoSuchResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TESTNEWSERVICESDKTESTING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  NoSuchResource& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceType;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
