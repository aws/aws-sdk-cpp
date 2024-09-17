/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectionType.h>
#include <aws/networkmanager/model/ConnectionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes connection health.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectionHealth">AWS
   * API Reference</a></p>
   */
  class ConnectionHealth
  {
  public:
    AWS_NETWORKMANAGER_API ConnectionHealth();
    AWS_NETWORKMANAGER_API ConnectionHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectionHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection type.</p>
     */
    inline const ConnectionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ConnectionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ConnectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ConnectionHealth& WithType(const ConnectionType& value) { SetType(value); return *this;}
    inline ConnectionHealth& WithType(ConnectionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection status.</p>
     */
    inline const ConnectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ConnectionHealth& WithStatus(const ConnectionStatus& value) { SetStatus(value); return *this;}
    inline ConnectionHealth& WithStatus(ConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline ConnectionHealth& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline ConnectionHealth& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    ConnectionType m_type;
    bool m_typeHasBeenSet = false;

    ConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
