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
   * Multicast-specific input settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MulticastInputSettings">AWS
   * API Reference</a></p>
   */
  class MulticastInputSettings
  {
  public:
    AWS_MEDIALIVE_API MulticastInputSettings() = default;
    AWS_MEDIALIVE_API MulticastInputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MulticastInputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optionally, a source ip address to filter by for Source-specific Multicast (SSM)
     */
    inline const Aws::String& GetSourceIpAddress() const { return m_sourceIpAddress; }
    inline bool SourceIpAddressHasBeenSet() const { return m_sourceIpAddressHasBeenSet; }
    template<typename SourceIpAddressT = Aws::String>
    void SetSourceIpAddress(SourceIpAddressT&& value) { m_sourceIpAddressHasBeenSet = true; m_sourceIpAddress = std::forward<SourceIpAddressT>(value); }
    template<typename SourceIpAddressT = Aws::String>
    MulticastInputSettings& WithSourceIpAddress(SourceIpAddressT&& value) { SetSourceIpAddress(std::forward<SourceIpAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceIpAddress;
    bool m_sourceIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
