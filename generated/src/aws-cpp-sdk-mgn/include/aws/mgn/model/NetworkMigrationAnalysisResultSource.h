/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>The source resource information for an analysis result.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationAnalysisResultSource">AWS
 * API Reference</a></p>
 */
class NetworkMigrationAnalysisResultSource {
 public:
  AWS_MGN_API NetworkMigrationAnalysisResultSource() = default;
  AWS_MGN_API NetworkMigrationAnalysisResultSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationAnalysisResultSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The VPC ID of the source resource.</p>
   */
  inline const Aws::String& GetVpcID() const { return m_vpcID; }
  inline bool VpcIDHasBeenSet() const { return m_vpcIDHasBeenSet; }
  template <typename VpcIDT = Aws::String>
  void SetVpcID(VpcIDT&& value) {
    m_vpcIDHasBeenSet = true;
    m_vpcID = std::forward<VpcIDT>(value);
  }
  template <typename VpcIDT = Aws::String>
  NetworkMigrationAnalysisResultSource& WithVpcID(VpcIDT&& value) {
    SetVpcID(std::forward<VpcIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnet ID of the source resource.</p>
   */
  inline const Aws::String& GetSubnetID() const { return m_subnetID; }
  inline bool SubnetIDHasBeenSet() const { return m_subnetIDHasBeenSet; }
  template <typename SubnetIDT = Aws::String>
  void SetSubnetID(SubnetIDT&& value) {
    m_subnetIDHasBeenSet = true;
    m_subnetID = std::forward<SubnetIDT>(value);
  }
  template <typename SubnetIDT = Aws::String>
  NetworkMigrationAnalysisResultSource& WithSubnetID(SubnetIDT&& value) {
    SetSubnetID(std::forward<SubnetIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcID;

  Aws::String m_subnetID;
  bool m_vpcIDHasBeenSet = false;
  bool m_subnetIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
