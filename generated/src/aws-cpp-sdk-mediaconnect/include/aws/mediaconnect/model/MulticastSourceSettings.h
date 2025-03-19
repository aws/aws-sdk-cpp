/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The settings related to the multicast source. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MulticastSourceSettings">AWS
   * API Reference</a></p>
   */
  class MulticastSourceSettings
  {
  public:
    AWS_MEDIACONNECT_API MulticastSourceSettings() = default;
    AWS_MEDIACONNECT_API MulticastSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MulticastSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The IP address of the source for source-specific multicast (SSM).</p>
     */
    inline const Aws::String& GetMulticastSourceIp() const { return m_multicastSourceIp; }
    inline bool MulticastSourceIpHasBeenSet() const { return m_multicastSourceIpHasBeenSet; }
    template<typename MulticastSourceIpT = Aws::String>
    void SetMulticastSourceIp(MulticastSourceIpT&& value) { m_multicastSourceIpHasBeenSet = true; m_multicastSourceIp = std::forward<MulticastSourceIpT>(value); }
    template<typename MulticastSourceIpT = Aws::String>
    MulticastSourceSettings& WithMulticastSourceIp(MulticastSourceIpT&& value) { SetMulticastSourceIp(std::forward<MulticastSourceIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multicastSourceIp;
    bool m_multicastSourceIpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
