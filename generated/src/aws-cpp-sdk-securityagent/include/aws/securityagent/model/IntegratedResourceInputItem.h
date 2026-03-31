/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/IntegratedResource.h>
#include <aws/securityagent/model/ProviderResourceCapabilities.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input item for updating an integrated resource</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IntegratedResourceInputItem">AWS
 * API Reference</a></p>
 */
class IntegratedResourceInputItem {
 public:
  AWS_SECURITYAGENT_API IntegratedResourceInputItem() = default;
  AWS_SECURITYAGENT_API IntegratedResourceInputItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IntegratedResourceInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration of the resource</p>
   */
  inline const IntegratedResource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = IntegratedResource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = IntegratedResource>
  IntegratedResourceInputItem& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provider-specific capabilities for the resource</p>
   */
  inline const ProviderResourceCapabilities& GetCapabilities() const { return m_capabilities; }
  inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
  template <typename CapabilitiesT = ProviderResourceCapabilities>
  void SetCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities = std::forward<CapabilitiesT>(value);
  }
  template <typename CapabilitiesT = ProviderResourceCapabilities>
  IntegratedResourceInputItem& WithCapabilities(CapabilitiesT&& value) {
    SetCapabilities(std::forward<CapabilitiesT>(value));
    return *this;
  }
  ///@}
 private:
  IntegratedResource m_resource;

  ProviderResourceCapabilities m_capabilities;
  bool m_resourceHasBeenSet = false;
  bool m_capabilitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
