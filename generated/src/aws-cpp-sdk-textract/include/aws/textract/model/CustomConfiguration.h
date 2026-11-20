/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/BlueprintItem.h>

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
 * <p>Associates blueprints with a project to produce custom structured output. A
 * fallback blueprint can be supplied for documents that do not match a primary
 * blueprint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/CustomConfiguration">AWS
 * API Reference</a></p>
 */
class CustomConfiguration {
 public:
  AWS_TEXTRACT_API CustomConfiguration() = default;
  AWS_TEXTRACT_API CustomConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API CustomConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The blueprints used to extract custom structured output.</p>
   */
  inline const Aws::Vector<BlueprintItem>& GetBlueprints() const { return m_blueprints; }
  inline bool BlueprintsHasBeenSet() const { return m_blueprintsHasBeenSet; }
  template <typename BlueprintsT = Aws::Vector<BlueprintItem>>
  void SetBlueprints(BlueprintsT&& value) {
    m_blueprintsHasBeenSet = true;
    m_blueprints = std::forward<BlueprintsT>(value);
  }
  template <typename BlueprintsT = Aws::Vector<BlueprintItem>>
  CustomConfiguration& WithBlueprints(BlueprintsT&& value) {
    SetBlueprints(std::forward<BlueprintsT>(value));
    return *this;
  }
  template <typename BlueprintsT = BlueprintItem>
  CustomConfiguration& AddBlueprints(BlueprintsT&& value) {
    m_blueprintsHasBeenSet = true;
    m_blueprints.emplace_back(std::forward<BlueprintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The blueprint used when a document does not match any of the primary
   * blueprints. Requires at least one blueprint in <code>Blueprints</code>.</p>
   */
  inline const Aws::Vector<BlueprintItem>& GetFallbackBlueprints() const { return m_fallbackBlueprints; }
  inline bool FallbackBlueprintsHasBeenSet() const { return m_fallbackBlueprintsHasBeenSet; }
  template <typename FallbackBlueprintsT = Aws::Vector<BlueprintItem>>
  void SetFallbackBlueprints(FallbackBlueprintsT&& value) {
    m_fallbackBlueprintsHasBeenSet = true;
    m_fallbackBlueprints = std::forward<FallbackBlueprintsT>(value);
  }
  template <typename FallbackBlueprintsT = Aws::Vector<BlueprintItem>>
  CustomConfiguration& WithFallbackBlueprints(FallbackBlueprintsT&& value) {
    SetFallbackBlueprints(std::forward<FallbackBlueprintsT>(value));
    return *this;
  }
  template <typename FallbackBlueprintsT = BlueprintItem>
  CustomConfiguration& AddFallbackBlueprints(FallbackBlueprintsT&& value) {
    m_fallbackBlueprintsHasBeenSet = true;
    m_fallbackBlueprints.emplace_back(std::forward<FallbackBlueprintsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BlueprintItem> m_blueprints;

  Aws::Vector<BlueprintItem> m_fallbackBlueprints;
  bool m_blueprintsHasBeenSet = false;
  bool m_fallbackBlueprintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
