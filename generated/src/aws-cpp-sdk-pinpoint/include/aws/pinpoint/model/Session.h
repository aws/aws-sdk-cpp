/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about a session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Session">AWS
   * API Reference</a></p>
   */
  class Session
  {
  public:
    AWS_PINPOINT_API Session();
    AWS_PINPOINT_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The duration of the session, in milliseconds.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Session& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Session& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Session& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Session& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the session began.</p>
     */
    inline const Aws::String& GetStartTimestamp() const{ return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    inline void SetStartTimestamp(const Aws::String& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::String&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }
    inline void SetStartTimestamp(const char* value) { m_startTimestampHasBeenSet = true; m_startTimestamp.assign(value); }
    inline Session& WithStartTimestamp(const Aws::String& value) { SetStartTimestamp(value); return *this;}
    inline Session& WithStartTimestamp(Aws::String&& value) { SetStartTimestamp(std::move(value)); return *this;}
    inline Session& WithStartTimestamp(const char* value) { SetStartTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the session ended.</p>
     */
    inline const Aws::String& GetStopTimestamp() const{ return m_stopTimestamp; }
    inline bool StopTimestampHasBeenSet() const { return m_stopTimestampHasBeenSet; }
    inline void SetStopTimestamp(const Aws::String& value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp = value; }
    inline void SetStopTimestamp(Aws::String&& value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp = std::move(value); }
    inline void SetStopTimestamp(const char* value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp.assign(value); }
    inline Session& WithStopTimestamp(const Aws::String& value) { SetStopTimestamp(value); return *this;}
    inline Session& WithStopTimestamp(Aws::String&& value) { SetStopTimestamp(std::move(value)); return *this;}
    inline Session& WithStopTimestamp(const char* value) { SetStopTimestamp(value); return *this;}
    ///@}
  private:

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    Aws::String m_stopTimestamp;
    bool m_stopTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
