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
   * Placeholder documentation for ChannelEgressEndpoint<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ChannelEgressEndpoint">AWS
   * API Reference</a></p>
   */
  class ChannelEgressEndpoint
  {
  public:
    AWS_MEDIALIVE_API ChannelEgressEndpoint() = default;
    AWS_MEDIALIVE_API ChannelEgressEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ChannelEgressEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Public IP of where a channel's output comes from
     */
    inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    template<typename SourceIpT = Aws::String>
    void SetSourceIp(SourceIpT&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::forward<SourceIpT>(value); }
    template<typename SourceIpT = Aws::String>
    ChannelEgressEndpoint& WithSourceIp(SourceIpT&& value) { SetSourceIp(std::forward<SourceIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
