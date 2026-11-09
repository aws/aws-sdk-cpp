/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ExtensionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Details of an extension installed on a SageMaker HyperPod
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExtensionDetails">AWS
 * API Reference</a></p>
 */
class ExtensionDetails {
 public:
  AWS_SAGEMAKER_API ExtensionDetails() = default;
  AWS_SAGEMAKER_API ExtensionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ExtensionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ExtensionDetails& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the extension.</p>
   */
  inline const Aws::String& GetExtensionArn() const { return m_extensionArn; }
  inline bool ExtensionArnHasBeenSet() const { return m_extensionArnHasBeenSet; }
  template <typename ExtensionArnT = Aws::String>
  void SetExtensionArn(ExtensionArnT&& value) {
    m_extensionArnHasBeenSet = true;
    m_extensionArn = std::forward<ExtensionArnT>(value);
  }
  template <typename ExtensionArnT = Aws::String>
  ExtensionDetails& WithExtensionArn(ExtensionArnT&& value) {
    SetExtensionArn(std::forward<ExtensionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the extension.</p>
   */
  inline const Aws::String& GetExtensionName() const { return m_extensionName; }
  inline bool ExtensionNameHasBeenSet() const { return m_extensionNameHasBeenSet; }
  template <typename ExtensionNameT = Aws::String>
  void SetExtensionName(ExtensionNameT&& value) {
    m_extensionNameHasBeenSet = true;
    m_extensionName = std::forward<ExtensionNameT>(value);
  }
  template <typename ExtensionNameT = Aws::String>
  ExtensionDetails& WithExtensionName(ExtensionNameT&& value) {
    SetExtensionName(std::forward<ExtensionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the extension. While SageMaker HyperPod creates or updates the
   * extension, some nodes might still run a different version. To see how many nodes
   * run this version, see <code>NodeSummary</code>.</p>
   */
  inline const Aws::String& GetExtensionVersion() const { return m_extensionVersion; }
  inline bool ExtensionVersionHasBeenSet() const { return m_extensionVersionHasBeenSet; }
  template <typename ExtensionVersionT = Aws::String>
  void SetExtensionVersion(ExtensionVersionT&& value) {
    m_extensionVersionHasBeenSet = true;
    m_extensionVersion = std::forward<ExtensionVersionT>(value);
  }
  template <typename ExtensionVersionT = Aws::String>
  ExtensionDetails& WithExtensionVersion(ExtensionVersionT&& value) {
    SetExtensionVersion(std::forward<ExtensionVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the extension can be one of the following values:</p> <dl>
   * <dt>Creating</dt> <dd> <p>SageMaker HyperPod is installing the extension on the
   * cluster's nodes.</p> </dd> <dt>Active</dt> <dd> <p>The extension runs its
   * current version and configuration on all of the cluster's nodes.</p> </dd>
   * <dt>Updating</dt> <dd> <p>SageMaker HyperPod is applying a configuration change
   * or version update to the cluster's nodes.</p> </dd> <dt>Degraded</dt> <dd>
   * <p>The extension runs its current version and configuration on some of the
   * cluster's nodes but not all of them. Or, at least one node recently reported
   * that the extension is unhealthy.</p> </dd> <dt>CreateFailed</dt> <dd>
   * <p>SageMaker HyperPod couldn't install the extension on any of the cluster's
   * nodes.</p> </dd> <dt>UpdateFailed</dt> <dd> <p>SageMaker HyperPod couldn't apply
   * the update on any of the cluster's nodes.</p> </dd> <dt>Deleting</dt> <dd>
   * <p>SageMaker HyperPod is removing the extension from the cluster's nodes.</p>
   * </dd> <dt>DeleteFailed</dt> <dd> <p>SageMaker HyperPod couldn't remove the
   * extension from any of the cluster's nodes.</p> </dd> </dl>
   */
  inline ExtensionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExtensionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExtensionDetails& WithStatus(ExtensionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the extension, as a JSON object serialized as a string.
   * The configuration includes the default value of every setting that you didn't
   * specify.</p>
   */
  inline const Aws::String& GetConfigurationValues() const { return m_configurationValues; }
  inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
  template <typename ConfigurationValuesT = Aws::String>
  void SetConfigurationValues(ConfigurationValuesT&& value) {
    m_configurationValuesHasBeenSet = true;
    m_configurationValues = std::forward<ConfigurationValuesT>(value);
  }
  template <typename ConfigurationValuesT = Aws::String>
  ExtensionDetails& WithConfigurationValues(ConfigurationValuesT&& value) {
    SetConfigurationValues(std::forward<ConfigurationValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the extension was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  ExtensionDetails& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the extension was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  ExtensionDetails& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_extensionArn;

  Aws::String m_extensionName;

  Aws::String m_extensionVersion;

  ExtensionStatus m_status{ExtensionStatus::NOT_SET};

  Aws::String m_configurationValues;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_clusterArnHasBeenSet = false;
  bool m_extensionArnHasBeenSet = false;
  bool m_extensionNameHasBeenSet = false;
  bool m_extensionVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_configurationValuesHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
