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
 * <p>A summary of a peer database of an Autonomous Database.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabasePeerSummary">AWS
 * API Reference</a></p>
 */
class AutonomousDatabasePeerSummary {
 public:
  AWS_ODB_API AutonomousDatabasePeerSummary() = default;
  AWS_ODB_API AutonomousDatabasePeerSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabasePeerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the peer Autonomous Database.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  AutonomousDatabasePeerSummary& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the peer Autonomous Database.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseArn() const { return m_autonomousDatabaseArn; }
  inline bool AutonomousDatabaseArnHasBeenSet() const { return m_autonomousDatabaseArnHasBeenSet; }
  template <typename AutonomousDatabaseArnT = Aws::String>
  void SetAutonomousDatabaseArn(AutonomousDatabaseArnT&& value) {
    m_autonomousDatabaseArnHasBeenSet = true;
    m_autonomousDatabaseArn = std::forward<AutonomousDatabaseArnT>(value);
  }
  template <typename AutonomousDatabaseArnT = Aws::String>
  AutonomousDatabasePeerSummary& WithAutonomousDatabaseArn(AutonomousDatabaseArnT&& value) {
    SetAutonomousDatabaseArn(std::forward<AutonomousDatabaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Cloud Identifier (OCID) of the peer Autonomous Database.</p>
   */
  inline const Aws::String& GetOcid() const { return m_ocid; }
  inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
  template <typename OcidT = Aws::String>
  void SetOcid(OcidT&& value) {
    m_ocidHasBeenSet = true;
    m_ocid = std::forward<OcidT>(value);
  }
  template <typename OcidT = Aws::String>
  AutonomousDatabasePeerSummary& WithOcid(OcidT&& value) {
    SetOcid(std::forward<OcidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the peer Autonomous Database is
   * located.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AutonomousDatabasePeerSummary& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseId;

  Aws::String m_autonomousDatabaseArn;

  Aws::String m_ocid;

  Aws::String m_region;
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_autonomousDatabaseArnHasBeenSet = false;
  bool m_ocidHasBeenSet = false;
  bool m_regionHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
