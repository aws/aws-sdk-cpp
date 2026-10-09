/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceMetering {
namespace Model {

/**
 * <p>Metadata associated with a resolved customer. Includes the
 * <code>AgreementId</code> of the Amazon Web Services Marketplace agreement the
 * customer accepted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/Metadata">AWS
 * API Reference</a></p>
 */
class Metadata {
 public:
  AWS_MARKETPLACEMETERING_API Metadata() = default;
  AWS_MARKETPLACEMETERING_API Metadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEMETERING_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEMETERING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Amazon Web Services Marketplace agreement the
   * customer accepted. Use it to call Amazon Web Services Marketplace Agreement
   * APIs.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  Metadata& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;
  bool m_agreementIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceMetering
}  // namespace Aws
