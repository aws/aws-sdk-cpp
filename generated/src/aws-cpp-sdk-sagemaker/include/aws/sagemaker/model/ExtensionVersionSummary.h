/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>A version of an extension that you can install on a SageMaker HyperPod
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExtensionVersionSummary">AWS
 * API Reference</a></p>
 */
class ExtensionVersionSummary {
 public:
  AWS_SAGEMAKER_API ExtensionVersionSummary() = default;
  AWS_SAGEMAKER_API ExtensionVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ExtensionVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of the extension, in <code>MAJOR.MINOR.PATCH</code> format, for
   * example <code>1.0.0</code>.</p>
   */
  inline const Aws::String& GetExtensionVersion() const { return m_extensionVersion; }
  inline bool ExtensionVersionHasBeenSet() const { return m_extensionVersionHasBeenSet; }
  template <typename ExtensionVersionT = Aws::String>
  void SetExtensionVersion(ExtensionVersionT&& value) {
    m_extensionVersionHasBeenSet = true;
    m_extensionVersion = std::forward<ExtensionVersionT>(value);
  }
  template <typename ExtensionVersionT = Aws::String>
  ExtensionVersionSummary& WithExtensionVersion(ExtensionVersionT&& value) {
    SetExtensionVersion(std::forward<ExtensionVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_extensionVersion;
  bool m_extensionVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
