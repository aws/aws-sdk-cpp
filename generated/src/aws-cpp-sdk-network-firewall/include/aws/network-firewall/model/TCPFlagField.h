/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/TCPFlag.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>TCP flags and masks to inspect packets for, used in stateless rules
   * <a>MatchAttributes</a> settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TCPFlagField">AWS
   * API Reference</a></p>
   */
  class TCPFlagField
  {
  public:
    AWS_NETWORKFIREWALL_API TCPFlagField() = default;
    AWS_NETWORKFIREWALL_API TCPFlagField(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API TCPFlagField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used in conjunction with the <code>Masks</code> setting to define the flags
     * that must be set and flags that must not be set in order for the packet to
     * match. This setting can only specify values that are also specified in the
     * <code>Masks</code> setting.</p> <p>For the flags that are specified in the masks
     * setting, the following must be true for the packet to match: </p> <ul> <li>
     * <p>The ones that are set in this flags setting must be set in the packet. </p>
     * </li> <li> <p>The ones that are not set in this flags setting must also not be
     * set in the packet. </p> </li> </ul>
     */
    inline const Aws::Vector<TCPFlag>& GetFlags() const { return m_flags; }
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }
    template<typename FlagsT = Aws::Vector<TCPFlag>>
    void SetFlags(FlagsT&& value) { m_flagsHasBeenSet = true; m_flags = std::forward<FlagsT>(value); }
    template<typename FlagsT = Aws::Vector<TCPFlag>>
    TCPFlagField& WithFlags(FlagsT&& value) { SetFlags(std::forward<FlagsT>(value)); return *this;}
    inline TCPFlagField& AddFlags(TCPFlag value) { m_flagsHasBeenSet = true; m_flags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of flags to consider in the inspection. To inspect all flags in the
     * valid values list, leave this with no setting.</p>
     */
    inline const Aws::Vector<TCPFlag>& GetMasks() const { return m_masks; }
    inline bool MasksHasBeenSet() const { return m_masksHasBeenSet; }
    template<typename MasksT = Aws::Vector<TCPFlag>>
    void SetMasks(MasksT&& value) { m_masksHasBeenSet = true; m_masks = std::forward<MasksT>(value); }
    template<typename MasksT = Aws::Vector<TCPFlag>>
    TCPFlagField& WithMasks(MasksT&& value) { SetMasks(std::forward<MasksT>(value)); return *this;}
    inline TCPFlagField& AddMasks(TCPFlag value) { m_masksHasBeenSet = true; m_masks.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<TCPFlag> m_flags;
    bool m_flagsHasBeenSet = false;

    Aws::Vector<TCPFlag> m_masks;
    bool m_masksHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
