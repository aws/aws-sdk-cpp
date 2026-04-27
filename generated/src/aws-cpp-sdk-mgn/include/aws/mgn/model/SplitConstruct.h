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
 * <p>A split target specifying the CIDR block for the new construct.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SplitConstruct">AWS
 * API Reference</a></p>
 */
class SplitConstruct {
 public:
  AWS_MGN_API SplitConstruct() = default;
  AWS_MGN_API SplitConstruct(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SplitConstruct& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CIDR block for the split construct.</p>
   */
  inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
  inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
  template <typename CidrBlockT = Aws::String>
  void SetCidrBlock(CidrBlockT&& value) {
    m_cidrBlockHasBeenSet = true;
    m_cidrBlock = std::forward<CidrBlockT>(value);
  }
  template <typename CidrBlockT = Aws::String>
  SplitConstruct& WithCidrBlock(CidrBlockT&& value) {
    SetCidrBlock(std::forward<CidrBlockT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidrBlock;
  bool m_cidrBlockHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
