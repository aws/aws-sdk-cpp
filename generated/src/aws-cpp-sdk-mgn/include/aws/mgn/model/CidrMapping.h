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
 * <p>Maps a source CIDR range to the corresponding target CIDR range to use in the
 * target network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CidrMapping">AWS API
 * Reference</a></p>
 */
class CidrMapping {
 public:
  AWS_MGN_API CidrMapping() = default;
  AWS_MGN_API CidrMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API CidrMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The original CIDR range in the source network.</p>
   */
  inline const Aws::String& GetOriginalCidr() const { return m_originalCidr; }
  inline bool OriginalCidrHasBeenSet() const { return m_originalCidrHasBeenSet; }
  template <typename OriginalCidrT = Aws::String>
  void SetOriginalCidr(OriginalCidrT&& value) {
    m_originalCidrHasBeenSet = true;
    m_originalCidr = std::forward<OriginalCidrT>(value);
  }
  template <typename OriginalCidrT = Aws::String>
  CidrMapping& WithOriginalCidr(OriginalCidrT&& value) {
    SetOriginalCidr(std::forward<OriginalCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated CIDR range to use in the target network.</p>
   */
  inline const Aws::String& GetUpdatedCidr() const { return m_updatedCidr; }
  inline bool UpdatedCidrHasBeenSet() const { return m_updatedCidrHasBeenSet; }
  template <typename UpdatedCidrT = Aws::String>
  void SetUpdatedCidr(UpdatedCidrT&& value) {
    m_updatedCidrHasBeenSet = true;
    m_updatedCidr = std::forward<UpdatedCidrT>(value);
  }
  template <typename UpdatedCidrT = Aws::String>
  CidrMapping& WithUpdatedCidr(UpdatedCidrT&& value) {
    SetUpdatedCidr(std::forward<UpdatedCidrT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_originalCidr;

  Aws::String m_updatedCidr;
  bool m_originalCidrHasBeenSet = false;
  bool m_updatedCidrHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
