/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * DVB Network Information Table (NIT)<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DvbNitSettings">AWS
   * API Reference</a></p>
   */
  class DvbNitSettings
  {
  public:
    AWS_MEDIALIVE_API DvbNitSettings() = default;
    AWS_MEDIALIVE_API DvbNitSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DvbNitSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The numeric value placed in the Network Information Table (NIT).
     */
    inline int GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(int value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline DvbNitSettings& WithNetworkId(int value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetNetworkName() const { return m_networkName; }
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }
    template<typename NetworkNameT = Aws::String>
    void SetNetworkName(NetworkNameT&& value) { m_networkNameHasBeenSet = true; m_networkName = std::forward<NetworkNameT>(value); }
    template<typename NetworkNameT = Aws::String>
    DvbNitSettings& WithNetworkName(NetworkNameT&& value) { SetNetworkName(std::forward<NetworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetRepInterval() const { return m_repInterval; }
    inline bool RepIntervalHasBeenSet() const { return m_repIntervalHasBeenSet; }
    inline void SetRepInterval(int value) { m_repIntervalHasBeenSet = true; m_repInterval = value; }
    inline DvbNitSettings& WithRepInterval(int value) { SetRepInterval(value); return *this;}
    ///@}
  private:

    int m_networkId{0};
    bool m_networkIdHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    int m_repInterval{0};
    bool m_repIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
