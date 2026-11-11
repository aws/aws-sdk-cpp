/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/CodeStarParameters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ServiceCatalog {
namespace Model {

/**
 * <p>Provides connection details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SourceConnectionParameters">AWS
 * API Reference</a></p>
 */
class SourceConnectionParameters {
 public:
  AWS_SERVICECATALOG_API SourceConnectionParameters() = default;
  AWS_SERVICECATALOG_API SourceConnectionParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICECATALOG_API SourceConnectionParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICECATALOG_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Provides <code>ConnectionType</code> details.</p>
   */
  inline const CodeStarParameters& GetCodeStar() const { return m_codeStar; }
  inline bool CodeStarHasBeenSet() const { return m_codeStarHasBeenSet; }
  template <typename CodeStarT = CodeStarParameters>
  void SetCodeStar(CodeStarT&& value) {
    m_codeStarHasBeenSet = true;
    m_codeStar = std::forward<CodeStarT>(value);
  }
  template <typename CodeStarT = CodeStarParameters>
  SourceConnectionParameters& WithCodeStar(CodeStarT&& value) {
    SetCodeStar(std::forward<CodeStarT>(value));
    return *this;
  }
  ///@}
 private:
  CodeStarParameters m_codeStar;
  bool m_codeStarHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
