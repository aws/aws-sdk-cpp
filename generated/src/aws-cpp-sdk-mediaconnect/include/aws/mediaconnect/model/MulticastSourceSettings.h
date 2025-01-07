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
   * The settings related to the multicast source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MulticastSourceSettings">AWS
   * API Reference</a></p>
   */
  class MulticastSourceSettings
  {
  public:
    AWS_MEDIACONNECT_API MulticastSourceSettings();
    AWS_MEDIACONNECT_API MulticastSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MulticastSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The IP address of the source for source-specific multicast (SSM).
     */
    inline const Aws::String& GetMulticastSourceIp() const{ return m_multicastSourceIp; }
    inline bool MulticastSourceIpHasBeenSet() const { return m_multicastSourceIpHasBeenSet; }
    inline void SetMulticastSourceIp(const Aws::String& value) { m_multicastSourceIpHasBeenSet = true; m_multicastSourceIp = value; }
    inline void SetMulticastSourceIp(Aws::String&& value) { m_multicastSourceIpHasBeenSet = true; m_multicastSourceIp = std::move(value); }
    inline void SetMulticastSourceIp(const char* value) { m_multicastSourceIpHasBeenSet = true; m_multicastSourceIp.assign(value); }
    inline MulticastSourceSettings& WithMulticastSourceIp(const Aws::String& value) { SetMulticastSourceIp(value); return *this;}
    inline MulticastSourceSettings& WithMulticastSourceIp(Aws::String&& value) { SetMulticastSourceIp(std::move(value)); return *this;}
    inline MulticastSourceSettings& WithMulticastSourceIp(const char* value) { SetMulticastSourceIp(value); return *this;}
    ///@}
  private:

    Aws::String m_multicastSourceIp;
    bool m_multicastSourceIpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
