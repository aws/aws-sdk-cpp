/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/VpcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {

/**
 * <p>Run-specific configuration settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunConfigurations">AWS
 * API Reference</a></p>
 */
class RunConfigurations {
 public:
  AWS_OMICS_API RunConfigurations() = default;
  AWS_OMICS_API RunConfigurations(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API RunConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>VPC configuration for workflow runs.</p>
   */
  inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = VpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = VpcConfig>
  RunConfigurations& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}
 private:
  VpcConfig m_vpcConfig;
  bool m_vpcConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
