/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyReplicationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Represents the replication status information for a key in a replication
   * region.</p> <p>This structure contains details about the current state of key
   * replication, including any status messages and operational information about the
   * replication process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ReplicationStatusType">AWS
   * API Reference</a></p>
   */
  class ReplicationStatusType
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ReplicationStatusType() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ReplicationStatusType(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ReplicationStatusType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline KeyReplicationState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(KeyReplicationState value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReplicationStatusType& WithStatus(KeyReplicationState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides additional information about the current replication
     * status of the key.</p> <p>This field contains details about any issues or
     * progress updates related to key replication operations. It may include
     * information about replication failures, synchronization status, or other
     * operational details.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReplicationStatusType& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    KeyReplicationState m_status{KeyReplicationState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
