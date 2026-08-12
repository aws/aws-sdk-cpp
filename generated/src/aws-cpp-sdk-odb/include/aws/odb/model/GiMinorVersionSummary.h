/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Summary information about an Oracle Grid Infrastructure (GI) minor
 * version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GiMinorVersionSummary">AWS
 * API Reference</a></p>
 */
class GiMinorVersionSummary {
 public:
  AWS_ODB_API GiMinorVersionSummary() = default;
  AWS_ODB_API GiMinorVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API GiMinorVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GI minor version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  GiMinorVersionSummary& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Grid Infrastructure software image ID for this minor version.</p>
   */
  inline const Aws::String& GetGridImageId() const { return m_gridImageId; }
  inline bool GridImageIdHasBeenSet() const { return m_gridImageIdHasBeenSet; }
  template <typename GridImageIdT = Aws::String>
  void SetGridImageId(GridImageIdT&& value) {
    m_gridImageIdHasBeenSet = true;
    m_gridImageId = std::forward<GridImageIdT>(value);
  }
  template <typename GridImageIdT = Aws::String>
  GiMinorVersionSummary& WithGridImageId(GridImageIdT&& value) {
    SetGridImageId(std::forward<GridImageIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::String m_gridImageId;
  bool m_versionHasBeenSet = false;
  bool m_gridImageIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
