/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

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
   * <p>Describes the BGP options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/BgpOptions">AWS
   * API Reference</a></p>
   */
  class BgpOptions
  {
  public:
    AWS_NETWORKMANAGER_API BgpOptions();
    AWS_NETWORKMANAGER_API BgpOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API BgpOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Peer ASN of the BGP.</p>
     */
    inline long long GetPeerAsn() const{ return m_peerAsn; }

    /**
     * <p>The Peer ASN of the BGP.</p>
     */
    inline bool PeerAsnHasBeenSet() const { return m_peerAsnHasBeenSet; }

    /**
     * <p>The Peer ASN of the BGP.</p>
     */
    inline void SetPeerAsn(long long value) { m_peerAsnHasBeenSet = true; m_peerAsn = value; }

    /**
     * <p>The Peer ASN of the BGP.</p>
     */
    inline BgpOptions& WithPeerAsn(long long value) { SetPeerAsn(value); return *this;}

  private:

    long long m_peerAsn;
    bool m_peerAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
