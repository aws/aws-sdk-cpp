/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/AnnotationConfigurationState.h>
#include <aws/s3-crt/model/MetadataTableEncryptionConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {

/**
 * <p>Specifies updates to apply to the annotation table configuration. Used as the
 * request body for
 * <code>UpdateBucketMetadataAnnotationTableConfiguration</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AnnotationTableConfigurationUpdates">AWS
 * API Reference</a></p>
 */
class AnnotationTableConfigurationUpdates {
 public:
  AWS_S3CRT_API AnnotationTableConfigurationUpdates() = default;
  AWS_S3CRT_API AnnotationTableConfigurationUpdates(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API AnnotationTableConfigurationUpdates& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The new configuration state to apply.</p>
   */
  inline AnnotationConfigurationState GetConfigurationState() const { return m_configurationState; }
  inline bool ConfigurationStateHasBeenSet() const { return m_configurationStateHasBeenSet; }
  inline void SetConfigurationState(AnnotationConfigurationState value) {
    m_configurationStateHasBeenSet = true;
    m_configurationState = value;
  }
  inline AnnotationTableConfigurationUpdates& WithConfigurationState(AnnotationConfigurationState value) {
    SetConfigurationState(value);
    return *this;
  }
  ///@}

  ///@{

  inline const MetadataTableEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = MetadataTableEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = MetadataTableEncryptionConfiguration>
  AnnotationTableConfigurationUpdates& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new IAM role ARN to apply.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  AnnotationTableConfigurationUpdates& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}
 private:
  AnnotationConfigurationState m_configurationState{AnnotationConfigurationState::NOT_SET};

  MetadataTableEncryptionConfiguration m_encryptionConfiguration;

  Aws::String m_role;
  bool m_configurationStateHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_roleHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
