/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The scheduler configuration for updating a cluster. Use this to specify the
 * scheduler version to update to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/UpdateSchedulerRequest">AWS
 * API Reference</a></p>
 */
class UpdateSchedulerRequest {
 public:
  AWS_PCS_API UpdateSchedulerRequest() = default;
  AWS_PCS_API UpdateSchedulerRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API UpdateSchedulerRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scheduler version to update the cluster to. You can only update to a
   * newer version. For more information about supported versions and update paths,
   * see <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/working-with_clusters_version_update.html">Updating
   * the scheduler version on a cluster</a> in the <i>PCS User Guide</i>.</p>
   * <p>Valid Values: <code>24.05 | 24.11 | 25.05 | 25.11</code> </p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  UpdateSchedulerRequest& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
