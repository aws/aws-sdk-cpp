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
   * Used in SdiSourceMappingsUpdateRequest. One SDI source mapping. It connects one
   * logical SdiSource to the physical SDI card and port that the physical SDI source
   * uses. You must specify all three parameters in this object.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SdiSourceMappingUpdateRequest">AWS
   * API Reference</a></p>
   */
  class SdiSourceMappingUpdateRequest
  {
  public:
    AWS_MEDIALIVE_API SdiSourceMappingUpdateRequest() = default;
    AWS_MEDIALIVE_API SdiSourceMappingUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SdiSourceMappingUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A number that uniquely identifies the SDI card on the node hardware. For
     * information about how physical cards are identified on your node hardware, see
     * the documentation for your node hardware. The numbering always starts at 1.
     */
    inline int GetCardNumber() const { return m_cardNumber; }
    inline bool CardNumberHasBeenSet() const { return m_cardNumberHasBeenSet; }
    inline void SetCardNumber(int value) { m_cardNumberHasBeenSet = true; m_cardNumber = value; }
    inline SdiSourceMappingUpdateRequest& WithCardNumber(int value) { SetCardNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * A number that uniquely identifies a port on the card. This must be an SDI port
     * (not a timecode port, for example). For information about how ports are
     * identified on physical cards, see the documentation for your node hardware.
     */
    inline int GetChannelNumber() const { return m_channelNumber; }
    inline bool ChannelNumberHasBeenSet() const { return m_channelNumberHasBeenSet; }
    inline void SetChannelNumber(int value) { m_channelNumberHasBeenSet = true; m_channelNumber = value; }
    inline SdiSourceMappingUpdateRequest& WithChannelNumber(int value) { SetChannelNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of a SDI source streaming on the given SDI capture card port.
     */
    inline const Aws::String& GetSdiSource() const { return m_sdiSource; }
    inline bool SdiSourceHasBeenSet() const { return m_sdiSourceHasBeenSet; }
    template<typename SdiSourceT = Aws::String>
    void SetSdiSource(SdiSourceT&& value) { m_sdiSourceHasBeenSet = true; m_sdiSource = std::forward<SdiSourceT>(value); }
    template<typename SdiSourceT = Aws::String>
    SdiSourceMappingUpdateRequest& WithSdiSource(SdiSourceT&& value) { SetSdiSource(std::forward<SdiSourceT>(value)); return *this;}
    ///@}
  private:

    int m_cardNumber{0};
    bool m_cardNumberHasBeenSet = false;

    int m_channelNumber{0};
    bool m_channelNumberHasBeenSet = false;

    Aws::String m_sdiSource;
    bool m_sdiSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
