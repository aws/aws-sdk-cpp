/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/StorageConnectorStatusEnum.h>
#include <aws/workspaces/model/StorageConnectorTypeEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkSpaces {
namespace Model {

/**
 * <p>Describes the storage connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StorageConnector">AWS
 * API Reference</a></p>
 */
class StorageConnector {
 public:
  AWS_WORKSPACES_API StorageConnector() = default;
  AWS_WORKSPACES_API StorageConnector(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API StorageConnector& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of connector used to save user files.</p>
   */
  inline StorageConnectorTypeEnum GetConnectorType() const { return m_connectorType; }
  inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
  inline void SetConnectorType(StorageConnectorTypeEnum value) {
    m_connectorTypeHasBeenSet = true;
    m_connectorType = value;
  }
  inline StorageConnector& WithConnectorType(StorageConnectorTypeEnum value) {
    SetConnectorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if the storage connetor is enabled or disabled.</p>
   */
  inline StorageConnectorStatusEnum GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StorageConnectorStatusEnum value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StorageConnector& WithStatus(StorageConnectorStatusEnum value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  StorageConnectorTypeEnum m_connectorType{StorageConnectorTypeEnum::NOT_SET};

  StorageConnectorStatusEnum m_status{StorageConnectorStatusEnum::NOT_SET};
  bool m_connectorTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
