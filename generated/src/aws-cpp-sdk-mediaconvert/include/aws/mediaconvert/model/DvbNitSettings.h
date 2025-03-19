/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use these settings to insert a DVB Network Information Table (NIT) in the
   * transport stream of this output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbNitSettings">AWS
   * API Reference</a></p>
   */
  class DvbNitSettings
  {
  public:
    AWS_MEDIACONVERT_API DvbNitSettings() = default;
    AWS_MEDIACONVERT_API DvbNitSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DvbNitSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * The network name text placed in the network_name_descriptor inside the Network
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
    inline int GetNitInterval() const { return m_nitInterval; }
    inline bool NitIntervalHasBeenSet() const { return m_nitIntervalHasBeenSet; }
    inline void SetNitInterval(int value) { m_nitIntervalHasBeenSet = true; m_nitInterval = value; }
    inline DvbNitSettings& WithNitInterval(int value) { SetNitInterval(value); return *this;}
    ///@}
  private:

    int m_networkId{0};
    bool m_networkIdHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    int m_nitInterval{0};
    bool m_nitIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
