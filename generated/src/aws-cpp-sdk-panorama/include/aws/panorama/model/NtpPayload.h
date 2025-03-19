/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>Network time protocol (NTP) server settings. Use this option to connect to
   * local NTP servers instead of <code>pool.ntp.org</code>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NtpPayload">AWS
   * API Reference</a></p>
   */
  class NtpPayload
  {
  public:
    AWS_PANORAMA_API NtpPayload() = default;
    AWS_PANORAMA_API NtpPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NtpPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNtpServers() const { return m_ntpServers; }
    inline bool NtpServersHasBeenSet() const { return m_ntpServersHasBeenSet; }
    template<typename NtpServersT = Aws::Vector<Aws::String>>
    void SetNtpServers(NtpServersT&& value) { m_ntpServersHasBeenSet = true; m_ntpServers = std::forward<NtpServersT>(value); }
    template<typename NtpServersT = Aws::Vector<Aws::String>>
    NtpPayload& WithNtpServers(NtpServersT&& value) { SetNtpServers(std::forward<NtpServersT>(value)); return *this;}
    template<typename NtpServersT = Aws::String>
    NtpPayload& AddNtpServers(NtpServersT&& value) { m_ntpServersHasBeenSet = true; m_ntpServers.emplace_back(std::forward<NtpServersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_ntpServers;
    bool m_ntpServersHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
