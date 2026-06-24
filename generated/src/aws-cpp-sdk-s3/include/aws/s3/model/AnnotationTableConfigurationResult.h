/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/AnnotationConfigurationState.h>
#include <aws/s3/model/ErrorDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {

/**
 * <p>Contains the current state of the annotation table associated with a bucket's
 * Amazon S3 Metadata configuration, including its provisioning status and
 * identifiers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AnnotationTableConfigurationResult">AWS
 * API Reference</a></p>
 */
class AnnotationTableConfigurationResult {
 public:
  AWS_S3_API AnnotationTableConfigurationResult() = default;
  AWS_S3_API AnnotationTableConfigurationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3_API AnnotationTableConfigurationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The current configuration state of the annotation table.</p>
   */
  inline AnnotationConfigurationState GetConfigurationState() const { return m_configurationState; }
  inline bool ConfigurationStateHasBeenSet() const { return m_configurationStateHasBeenSet; }
  inline void SetConfigurationState(AnnotationConfigurationState value) {
    m_configurationStateHasBeenSet = true;
    m_configurationState = value;
  }
  inline AnnotationTableConfigurationResult& WithConfigurationState(AnnotationConfigurationState value) {
    SetConfigurationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provisioning status of the annotation table. Possible values:
   * <code>CREATING</code>, <code>BACKFILLING</code>, <code>ACTIVE</code>,
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetTableStatus() const { return m_tableStatus; }
  inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
  template <typename TableStatusT = Aws::String>
  void SetTableStatus(TableStatusT&& value) {
    m_tableStatusHasBeenSet = true;
    m_tableStatus = std::forward<TableStatusT>(value);
  }
  template <typename TableStatusT = Aws::String>
  AnnotationTableConfigurationResult& WithTableStatus(TableStatusT&& value) {
    SetTableStatus(std::forward<TableStatusT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ErrorDetails& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ErrorDetails>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorDetails>
  AnnotationTableConfigurationResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the annotation table.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  AnnotationTableConfigurationResult& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the annotation table.</p>
   */
  inline const Aws::String& GetTableArn() const { return m_tableArn; }
  inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
  template <typename TableArnT = Aws::String>
  void SetTableArn(TableArnT&& value) {
    m_tableArnHasBeenSet = true;
    m_tableArn = std::forward<TableArnT>(value);
  }
  template <typename TableArnT = Aws::String>
  AnnotationTableConfigurationResult& WithTableArn(TableArnT&& value) {
    SetTableArn(std::forward<TableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role associated with the annotation table.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  AnnotationTableConfigurationResult& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}
 private:
  AnnotationConfigurationState m_configurationState{AnnotationConfigurationState::NOT_SET};

  Aws::String m_tableStatus;

  ErrorDetails m_error;

  Aws::String m_tableName;

  Aws::String m_tableArn;

  Aws::String m_role;
  bool m_configurationStateHasBeenSet = false;
  bool m_tableStatusHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_tableArnHasBeenSet = false;
  bool m_roleHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
