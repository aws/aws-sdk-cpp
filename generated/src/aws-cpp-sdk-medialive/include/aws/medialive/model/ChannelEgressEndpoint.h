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
    AWS_MEDIALIVE_API ChannelEgressEndpoint();
    AWS_MEDIALIVE_API ChannelEgressEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ChannelEgressEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Public IP of where a channel's output comes from
     */
    inline const Aws::String& GetSourceIp() const{ return m_sourceIp; }

    /**
     * Public IP of where a channel's output comes from
     */
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }

    /**
     * Public IP of where a channel's output comes from
     */
    inline void SetSourceIp(const Aws::String& value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }

    /**
     * Public IP of where a channel's output comes from
     */
    inline void SetSourceIp(Aws::String&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::move(value); }

    /**
     * Public IP of where a channel's output comes from
     */
    inline void SetSourceIp(const char* value) { m_sourceIpHasBeenSet = true; m_sourceIp.assign(value); }

    /**
     * Public IP of where a channel's output comes from
     */
    inline ChannelEgressEndpoint& WithSourceIp(const Aws::String& value) { SetSourceIp(value); return *this;}

    /**
     * Public IP of where a channel's output comes from
     */
    inline ChannelEgressEndpoint& WithSourceIp(Aws::String&& value) { SetSourceIp(std::move(value)); return *this;}

    /**
     * Public IP of where a channel's output comes from
     */
    inline ChannelEgressEndpoint& WithSourceIp(const char* value) { SetSourceIp(value); return *this;}

  private:

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
