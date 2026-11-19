/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class GetAvailableModuleVersionRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API GetAvailableModuleVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAvailableModuleVersion"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The module's ID.</p>
   */
  inline const Aws::String& GetModuleId() const { return m_moduleId; }
  inline bool ModuleIdHasBeenSet() const { return m_moduleIdHasBeenSet; }
  template <typename ModuleIdT = Aws::String>
  void SetModuleId(ModuleIdT&& value) {
    m_moduleIdHasBeenSet = true;
    m_moduleId = std::forward<ModuleIdT>(value);
  }
  template <typename ModuleIdT = Aws::String>
  GetAvailableModuleVersionRequest& WithModuleId(ModuleIdT&& value) {
    SetModuleId(std::forward<ModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  GetAvailableModuleVersionRequest& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_moduleId;

  Aws::String m_version;
  bool m_moduleIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
