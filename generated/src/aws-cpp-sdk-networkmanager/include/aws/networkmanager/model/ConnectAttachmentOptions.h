/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TunnelProtocol.h>
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
   * <p>Describes a core network Connect attachment options.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectAttachmentOptions">AWS
   * API Reference</a></p>
   */
  class ConnectAttachmentOptions
  {
  public:
    AWS_NETWORKMANAGER_API ConnectAttachmentOptions() = default;
    AWS_NETWORKMANAGER_API ConnectAttachmentOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectAttachmentOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol used for the attachment connection.</p>
     */
    inline TunnelProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(TunnelProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline ConnectAttachmentOptions& WithProtocol(TunnelProtocol value) { SetProtocol(value); return *this;}
    ///@}
  private:

    TunnelProtocol m_protocol{TunnelProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
