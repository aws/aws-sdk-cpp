/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>A reference to a document in a third-party provider, such as a Confluence
 * page linked via an integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IntegratedDocument">AWS
 * API Reference</a></p>
 */
class IntegratedDocument {
 public:
  AWS_SECURITYAGENT_API IntegratedDocument() = default;
  AWS_SECURITYAGENT_API IntegratedDocument(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IntegratedDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the integration that provides access to the document.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  IntegratedDocument& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific resource identifier for the document.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  IntegratedDocument& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_resourceId;
  bool m_integrationIdHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
