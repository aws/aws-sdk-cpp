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
   * Placeholder documentation for ChannelEngineVersionRequest<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ChannelEngineVersionRequest">AWS
   * API Reference</a></p>
   */
  class ChannelEngineVersionRequest
  {
  public:
    AWS_MEDIALIVE_API ChannelEngineVersionRequest();
    AWS_MEDIALIVE_API ChannelEngineVersionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ChannelEngineVersionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The build identifier of the engine version to use for this channel. Specify
     * 'DEFAULT' to reset to the default version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ChannelEngineVersionRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ChannelEngineVersionRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ChannelEngineVersionRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
