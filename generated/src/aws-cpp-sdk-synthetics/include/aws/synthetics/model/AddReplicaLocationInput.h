/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/VpcConfigInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Synthetics {
namespace Model {

/**
 * <p>A structure that specifies a replica location for a canary, including the
 * Region and optional VPC configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/AddReplicaLocationInput">AWS
 * API Reference</a></p>
 */
class AddReplicaLocationInput {
 public:
  AWS_SYNTHETICS_API AddReplicaLocationInput() = default;
  AWS_SYNTHETICS_API AddReplicaLocationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API AddReplicaLocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region where the canary replica should be created,
   * for example <code>us-east-1</code>.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  AddReplicaLocationInput& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC configuration to use for the canary replica in this location. If not
   * specified, the replica runs without VPC connectivity.</p>
   */
  inline const VpcConfigInput& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = VpcConfigInput>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = VpcConfigInput>
  AddReplicaLocationInput& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_location;

  VpcConfigInput m_vpcConfig;
  bool m_locationHasBeenSet = false;
  bool m_vpcConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
