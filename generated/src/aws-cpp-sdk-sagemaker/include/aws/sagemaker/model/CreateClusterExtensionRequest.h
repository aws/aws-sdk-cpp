/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateClusterExtensionRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateClusterExtensionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateClusterExtension"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster on which to
   * install the extension. The cluster must use Slurm as the orchestrator and have
   * <code>NodeProvisioningMode</code> set to <code>Continuous</code>.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  CreateClusterExtensionRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the extension to install, for example
   * <code>sagemaker-observability</code>.</p>
   */
  inline const Aws::String& GetExtensionName() const { return m_extensionName; }
  inline bool ExtensionNameHasBeenSet() const { return m_extensionNameHasBeenSet; }
  template <typename ExtensionNameT = Aws::String>
  void SetExtensionName(ExtensionNameT&& value) {
    m_extensionNameHasBeenSet = true;
    m_extensionName = std::forward<ExtensionNameT>(value);
  }
  template <typename ExtensionNameT = Aws::String>
  CreateClusterExtensionRequest& WithExtensionName(ExtensionNameT&& value) {
    SetExtensionName(std::forward<ExtensionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the extension to install, in <code>MAJOR.MINOR.PATCH</code>
   * format, for example <code>1.0.0</code>. If you don't specify a version,
   * SageMaker HyperPod installs the latest available version of the extension.</p>
   */
  inline const Aws::String& GetExtensionVersion() const { return m_extensionVersion; }
  inline bool ExtensionVersionHasBeenSet() const { return m_extensionVersionHasBeenSet; }
  template <typename ExtensionVersionT = Aws::String>
  void SetExtensionVersion(ExtensionVersionT&& value) {
    m_extensionVersionHasBeenSet = true;
    m_extensionVersion = std::forward<ExtensionVersionT>(value);
  }
  template <typename ExtensionVersionT = Aws::String>
  CreateClusterExtensionRequest& WithExtensionVersion(ExtensionVersionT&& value) {
    SetExtensionVersion(std::forward<ExtensionVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the extension, as a JSON object serialized as
   * a string, for example
   * <code>{"metricsProvider":{"nodeMetrics":{"level":"ADVANCED"}}}</code>. Each
   * extension version defines which settings it accepts. SageMaker HyperPod
   * validates the settings against that definition, and rejects the request if a
   * setting is unknown or has an invalid value. Settings that you omit use the
   * extension's default values. If you omit <code>ConfigurationValues</code>, all
   * settings use their default values.</p>
   */
  inline const Aws::String& GetConfigurationValues() const { return m_configurationValues; }
  inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
  template <typename ConfigurationValuesT = Aws::String>
  void SetConfigurationValues(ConfigurationValuesT&& value) {
    m_configurationValuesHasBeenSet = true;
    m_configurationValues = std::forward<ConfigurationValuesT>(value);
  }
  template <typename ConfigurationValuesT = Aws::String>
  CreateClusterExtensionRequest& WithConfigurationValues(ConfigurationValuesT&& value) {
    SetConfigurationValues(std::forward<ConfigurationValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom tags for managing the extension as an Amazon Web Services resource.
   * You can add tags to your extension in the same way you add them in other Amazon
   * Web Services services that support tagging. To learn more about tagging Amazon
   * Web Services resources in general, see <a
   * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
   * Amazon Web Services Resources User Guide</a>. To use this operation to add tags
   * when you create an extension, you must have the <code>sagemaker:AddTags</code>
   * permission.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateClusterExtensionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateClusterExtensionRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide so that the operation
   * completes no more than one time. This token is valid for 8 hours. If you retry
   * the request with the same client token and the same parameters within this time,
   * the API returns the Amazon Resource Name (ARN) of the extension that the
   * original request created, without creating a duplicate. If you use the same
   * client token with different parameters, the request fails.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateClusterExtensionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_extensionName;

  Aws::String m_extensionVersion;

  Aws::String m_configurationValues;

  Aws::Vector<Tag> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clusterArnHasBeenSet = false;
  bool m_extensionNameHasBeenSet = false;
  bool m_extensionVersionHasBeenSet = false;
  bool m_configurationValuesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
