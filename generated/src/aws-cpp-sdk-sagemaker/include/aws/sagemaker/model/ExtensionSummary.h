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
 * <p>A summary of an extension installed on a SageMaker HyperPod
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExtensionSummary">AWS
 * API Reference</a></p>
 */
class ExtensionSummary {
 public:
  AWS_SAGEMAKER_API ExtensionSummary() = default;
  AWS_SAGEMAKER_API ExtensionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ExtensionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ExtensionSummary& WithExtensionArn(ExtensionArnT&& value) {
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
  ExtensionSummary& WithExtensionName(ExtensionNameT&& value) {
    SetExtensionName(std::forward<ExtensionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the extension.</p>
   */
  inline const Aws::String& GetExtensionVersion() const { return m_extensionVersion; }
  inline bool ExtensionVersionHasBeenSet() const { return m_extensionVersionHasBeenSet; }
  template <typename ExtensionVersionT = Aws::String>
  void SetExtensionVersion(ExtensionVersionT&& value) {
    m_extensionVersionHasBeenSet = true;
    m_extensionVersion = std::forward<ExtensionVersionT>(value);
  }
  template <typename ExtensionVersionT = Aws::String>
  ExtensionSummary& WithExtensionVersion(ExtensionVersionT&& value) {
    SetExtensionVersion(std::forward<ExtensionVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the extension. For the meaning of each status, see
   * <code>ExtensionDetails</code>.</p>
   */
  inline ExtensionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExtensionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExtensionSummary& WithStatus(ExtensionStatus value) {
    SetStatus(value);
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
  ExtensionSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_extensionArn;

  Aws::String m_extensionName;

  Aws::String m_extensionVersion;

  ExtensionStatus m_status{ExtensionStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};
  bool m_extensionArnHasBeenSet = false;
  bool m_extensionNameHasBeenSet = false;
  bool m_extensionVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
