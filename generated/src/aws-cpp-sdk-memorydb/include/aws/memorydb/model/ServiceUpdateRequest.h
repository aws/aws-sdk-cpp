/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace MemoryDB {
namespace Model {

/**
 * <p>A request to apply a service update</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ServiceUpdateRequest">AWS
 * API Reference</a></p>
 */
class ServiceUpdateRequest {
 public:
  AWS_MEMORYDB_API ServiceUpdateRequest() = default;
  AWS_MEMORYDB_API ServiceUpdateRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API ServiceUpdateRequest& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique ID of the service update</p>
   */
  inline const Aws::String& GetServiceUpdateNameToApply() const { return m_serviceUpdateNameToApply; }
  inline bool ServiceUpdateNameToApplyHasBeenSet() const { return m_serviceUpdateNameToApplyHasBeenSet; }
  template <typename ServiceUpdateNameToApplyT = Aws::String>
  void SetServiceUpdateNameToApply(ServiceUpdateNameToApplyT&& value) {
    m_serviceUpdateNameToApplyHasBeenSet = true;
    m_serviceUpdateNameToApply = std::forward<ServiceUpdateNameToApplyT>(value);
  }
  template <typename ServiceUpdateNameToApplyT = Aws::String>
  ServiceUpdateRequest& WithServiceUpdateNameToApply(ServiceUpdateNameToApplyT&& value) {
    SetServiceUpdateNameToApply(std::forward<ServiceUpdateNameToApplyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceUpdateNameToApply;
  bool m_serviceUpdateNameToApplyHasBeenSet = false;
};

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws
