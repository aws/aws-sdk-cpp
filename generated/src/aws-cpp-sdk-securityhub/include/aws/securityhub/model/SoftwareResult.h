/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Provides information about a software package installed on one or more of
 * your resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SoftwareResult">AWS
 * API Reference</a></p>
 */
class SoftwareResult {
 public:
  AWS_SECURITYHUB_API SoftwareResult() = default;
  AWS_SECURITYHUB_API SoftwareResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API SoftwareResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the software package.</p>
   */
  inline const Aws::String& GetPackageName() const { return m_packageName; }
  inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
  template <typename PackageNameT = Aws::String>
  void SetPackageName(PackageNameT&& value) {
    m_packageNameHasBeenSet = true;
    m_packageName = std::forward<PackageNameT>(value);
  }
  template <typename PackageNameT = Aws::String>
  SoftwareResult& WithPackageName(PackageNameT&& value) {
    SetPackageName(std::forward<PackageNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the software package.</p>
   */
  inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
  inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
  template <typename PackageVersionT = Aws::String>
  void SetPackageVersion(PackageVersionT&& value) {
    m_packageVersionHasBeenSet = true;
    m_packageVersion = std::forward<PackageVersionT>(value);
  }
  template <typename PackageVersionT = Aws::String>
  SoftwareResult& WithPackageVersion(PackageVersionT&& value) {
    SetPackageVersion(std::forward<PackageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the software package, for example <code>operating-system</code>,
   * <code>application</code>, or <code>library</code>.</p>
   */
  inline const Aws::String& GetPackageType() const { return m_packageType; }
  inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
  template <typename PackageTypeT = Aws::String>
  void SetPackageType(PackageTypeT&& value) {
    m_packageTypeHasBeenSet = true;
    m_packageType = std::forward<PackageTypeT>(value);
  }
  template <typename PackageTypeT = Aws::String>
  SoftwareResult& WithPackageType(PackageTypeT&& value) {
    SetPackageType(std::forward<PackageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of resources that contain this software package. To list these
   * resources, call <code>GetSoftwareResourcesV2</code>.</p>
   */
  inline int GetResourceCount() const { return m_resourceCount; }
  inline bool ResourceCountHasBeenSet() const { return m_resourceCountHasBeenSet; }
  inline void SetResourceCount(int value) {
    m_resourceCountHasBeenSet = true;
    m_resourceCount = value;
  }
  inline SoftwareResult& WithResourceCount(int value) {
    SetResourceCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_packageName;

  Aws::String m_packageVersion;

  Aws::String m_packageType;

  int m_resourceCount{0};
  bool m_packageNameHasBeenSet = false;
  bool m_packageVersionHasBeenSet = false;
  bool m_packageTypeHasBeenSet = false;
  bool m_resourceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
