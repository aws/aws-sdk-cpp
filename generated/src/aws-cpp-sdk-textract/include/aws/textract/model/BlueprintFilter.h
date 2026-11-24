/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>A filter used to limit results to a specific blueprint, and optionally a
 * specific version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/BlueprintFilter">AWS
 * API Reference</a></p>
 */
class BlueprintFilter {
 public:
  AWS_TEXTRACT_API BlueprintFilter() = default;
  AWS_TEXTRACT_API BlueprintFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API BlueprintFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the blueprint to filter by.</p>
   */
  inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
  inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
  template <typename BlueprintArnT = Aws::String>
  void SetBlueprintArn(BlueprintArnT&& value) {
    m_blueprintArnHasBeenSet = true;
    m_blueprintArn = std::forward<BlueprintArnT>(value);
  }
  template <typename BlueprintArnT = Aws::String>
  BlueprintFilter& WithBlueprintArn(BlueprintArnT&& value) {
    SetBlueprintArn(std::forward<BlueprintArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the blueprint to filter by.</p>
   */
  inline const Aws::String& GetBlueprintVersion() const { return m_blueprintVersion; }
  inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
  template <typename BlueprintVersionT = Aws::String>
  void SetBlueprintVersion(BlueprintVersionT&& value) {
    m_blueprintVersionHasBeenSet = true;
    m_blueprintVersion = std::forward<BlueprintVersionT>(value);
  }
  template <typename BlueprintVersionT = Aws::String>
  BlueprintFilter& WithBlueprintVersion(BlueprintVersionT&& value) {
    SetBlueprintVersion(std::forward<BlueprintVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_blueprintArn;

  Aws::String m_blueprintVersion;
  bool m_blueprintArnHasBeenSet = false;
  bool m_blueprintVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
