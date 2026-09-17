/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VPCLattice {
namespace Model {

/**
 * <p>Describes a CIDR resource, which represents a network segment as one or more
 * CIDR ranges.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CidrResource">AWS
 * API Reference</a></p>
 */
class CidrResource {
 public:
  AWS_VPCLATTICE_API CidrResource() = default;
  AWS_VPCLATTICE_API CidrResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API CidrResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CIDR ranges of the network segment, for example,
   * <code>10.0.0.0/16</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCidrRanges() const { return m_cidrRanges; }
  inline bool CidrRangesHasBeenSet() const { return m_cidrRangesHasBeenSet; }
  template <typename CidrRangesT = Aws::Vector<Aws::String>>
  void SetCidrRanges(CidrRangesT&& value) {
    m_cidrRangesHasBeenSet = true;
    m_cidrRanges = std::forward<CidrRangesT>(value);
  }
  template <typename CidrRangesT = Aws::Vector<Aws::String>>
  CidrResource& WithCidrRanges(CidrRangesT&& value) {
    SetCidrRanges(std::forward<CidrRangesT>(value));
    return *this;
  }
  template <typename CidrRangesT = Aws::String>
  CidrResource& AddCidrRanges(CidrRangesT&& value) {
    m_cidrRangesHasBeenSet = true;
    m_cidrRanges.emplace_back(std::forward<CidrRangesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_cidrRanges;
  bool m_cidrRangesHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
