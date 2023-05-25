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
   * Endpoint settings for a PUSH type input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDestinationRequest">AWS
   * API Reference</a></p>
   */
  class InputDestinationRequest
  {
  public:
    AWS_MEDIALIVE_API InputDestinationRequest();
    AWS_MEDIALIVE_API InputDestinationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDestinationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline InputDestinationRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline InputDestinationRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline InputDestinationRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
