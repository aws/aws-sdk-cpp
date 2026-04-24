/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/CapabilityBaseRequestConfig.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 * <p>Container for the parameters to the <code>RegisterCapability</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RegisterCapabilityRequest">AWS
 * API Reference</a></p>
 */
class RegisterCapabilityRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API RegisterCapabilityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterCapability"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the OpenSearch UI application to register the
   * capability for.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  RegisterCapabilityRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the capability to register. Must be between 3 and 30 characters
   * and contain only alphanumeric characters and hyphens. This identifies the type
   * of capability being enabled for the application. For registering AI Assistant
   * capability, use <code>ai-capability</code> </p>
   */
  inline const Aws::String& GetCapabilityName() const { return m_capabilityName; }
  inline bool CapabilityNameHasBeenSet() const { return m_capabilityNameHasBeenSet; }
  template <typename CapabilityNameT = Aws::String>
  void SetCapabilityName(CapabilityNameT&& value) {
    m_capabilityNameHasBeenSet = true;
    m_capabilityName = std::forward<CapabilityNameT>(value);
  }
  template <typename CapabilityNameT = Aws::String>
  RegisterCapabilityRequest& WithCapabilityName(CapabilityNameT&& value) {
    SetCapabilityName(std::forward<CapabilityNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the capability being registered. This includes
   * capability-specific settings such as AI configuration.</p>
   */
  inline const CapabilityBaseRequestConfig& GetCapabilityConfig() const { return m_capabilityConfig; }
  inline bool CapabilityConfigHasBeenSet() const { return m_capabilityConfigHasBeenSet; }
  template <typename CapabilityConfigT = CapabilityBaseRequestConfig>
  void SetCapabilityConfig(CapabilityConfigT&& value) {
    m_capabilityConfigHasBeenSet = true;
    m_capabilityConfig = std::forward<CapabilityConfigT>(value);
  }
  template <typename CapabilityConfigT = CapabilityBaseRequestConfig>
  RegisterCapabilityRequest& WithCapabilityConfig(CapabilityConfigT&& value) {
    SetCapabilityConfig(std::forward<CapabilityConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_capabilityName;

  CapabilityBaseRequestConfig m_capabilityConfig;
  bool m_applicationIdHasBeenSet = false;
  bool m_capabilityNameHasBeenSet = false;
  bool m_capabilityConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
