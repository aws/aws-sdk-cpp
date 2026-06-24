/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DbWorkload.h>

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
 * <p>A summary of an available Oracle Database software version for Autonomous
 * Databases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseVersionSummary">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseVersionSummary {
 public:
  AWS_ODB_API AutonomousDatabaseVersionSummary() = default;
  AWS_ODB_API AutonomousDatabaseVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The intended use of the Autonomous Database that the version supports, such
   * as transaction processing, data warehouse, JSON database, or APEX.</p>
   */
  inline DbWorkload GetDbWorkload() const { return m_dbWorkload; }
  inline bool DbWorkloadHasBeenSet() const { return m_dbWorkloadHasBeenSet; }
  inline void SetDbWorkload(DbWorkload value) {
    m_dbWorkloadHasBeenSet = true;
    m_dbWorkload = value;
  }
  inline AutonomousDatabaseVersionSummary& WithDbWorkload(DbWorkload value) {
    SetDbWorkload(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional details about the Autonomous Database software version.</p>
   */
  inline const Aws::String& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::String>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::String>
  AutonomousDatabaseVersionSummary& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Database software version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  AutonomousDatabaseVersionSummary& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}
 private:
  DbWorkload m_dbWorkload{DbWorkload::NOT_SET};

  Aws::String m_details;

  Aws::String m_version;
  bool m_dbWorkloadHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
