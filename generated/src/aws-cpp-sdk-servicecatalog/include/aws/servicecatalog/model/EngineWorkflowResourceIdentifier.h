/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/UniqueTagResourceIdentifier.h>

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
 * <p> The ID for the provisioned product resources that are part of a resource
 * group. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/EngineWorkflowResourceIdentifier">AWS
 * API Reference</a></p>
 */
class EngineWorkflowResourceIdentifier {
 public:
  AWS_SERVICECATALOG_API EngineWorkflowResourceIdentifier() = default;
  AWS_SERVICECATALOG_API EngineWorkflowResourceIdentifier(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICECATALOG_API EngineWorkflowResourceIdentifier& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICECATALOG_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The unique key-value pair for a tag that identifies provisioned product
   * resources. </p>
   */
  inline const UniqueTagResourceIdentifier& GetUniqueTag() const { return m_uniqueTag; }
  inline bool UniqueTagHasBeenSet() const { return m_uniqueTagHasBeenSet; }
  template <typename UniqueTagT = UniqueTagResourceIdentifier>
  void SetUniqueTag(UniqueTagT&& value) {
    m_uniqueTagHasBeenSet = true;
    m_uniqueTag = std::forward<UniqueTagT>(value);
  }
  template <typename UniqueTagT = UniqueTagResourceIdentifier>
  EngineWorkflowResourceIdentifier& WithUniqueTag(UniqueTagT&& value) {
    SetUniqueTag(std::forward<UniqueTagT>(value));
    return *this;
  }
  ///@}
 private:
  UniqueTagResourceIdentifier m_uniqueTag;
  bool m_uniqueTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
