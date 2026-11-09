/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class UpdateClusterExtensionRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API UpdateClusterExtensionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterExtension"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster on which the
   * extension is installed.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  UpdateClusterExtensionRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the extension to update.</p>
   */
  inline const Aws::String& GetExtensionArn() const { return m_extensionArn; }
  inline bool ExtensionArnHasBeenSet() const { return m_extensionArnHasBeenSet; }
  template <typename ExtensionArnT = Aws::String>
  void SetExtensionArn(ExtensionArnT&& value) {
    m_extensionArnHasBeenSet = true;
    m_extensionArn = std::forward<ExtensionArnT>(value);
  }
  template <typename ExtensionArnT = Aws::String>
  UpdateClusterExtensionRequest& WithExtensionArn(ExtensionArnT&& value) {
    SetExtensionArn(std::forward<ExtensionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version to update the extension to, in <code>MAJOR.MINOR.PATCH</code>
   * format. The version must be later than the extension's current version. If you
   * omit this parameter, the extension keeps its current version.</p>
   */
  inline const Aws::String& GetExtensionVersion() const { return m_extensionVersion; }
  inline bool ExtensionVersionHasBeenSet() const { return m_extensionVersionHasBeenSet; }
  template <typename ExtensionVersionT = Aws::String>
  void SetExtensionVersion(ExtensionVersionT&& value) {
    m_extensionVersionHasBeenSet = true;
    m_extensionVersion = std::forward<ExtensionVersionT>(value);
  }
  template <typename ExtensionVersionT = Aws::String>
  UpdateClusterExtensionRequest& WithExtensionVersion(ExtensionVersionT&& value) {
    SetExtensionVersion(std::forward<ExtensionVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration changes to apply, as a JSON object serialized as a string.
   * Settings that you include are changed, settings that you omit are unchanged, and
   * a setting with the value <code>null</code> returns to its default value. The
   * resulting configuration must be valid for the target extension version. If you
   * omit <code>ConfigurationValues</code>, the configuration is unchanged.</p>
   */
  inline const Aws::String& GetConfigurationValues() const { return m_configurationValues; }
  inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
  template <typename ConfigurationValuesT = Aws::String>
  void SetConfigurationValues(ConfigurationValuesT&& value) {
    m_configurationValuesHasBeenSet = true;
    m_configurationValues = std::forward<ConfigurationValuesT>(value);
  }
  template <typename ConfigurationValuesT = Aws::String>
  UpdateClusterExtensionRequest& WithConfigurationValues(ConfigurationValuesT&& value) {
    SetConfigurationValues(std::forward<ConfigurationValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide so that the request is
   * idempotent. If you send the same update more than once, SageMaker HyperPod
   * applies it once and doesn't return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateClusterExtensionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_extensionArn;

  Aws::String m_extensionVersion;

  Aws::String m_configurationValues;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clusterArnHasBeenSet = false;
  bool m_extensionArnHasBeenSet = false;
  bool m_extensionVersionHasBeenSet = false;
  bool m_configurationValuesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
