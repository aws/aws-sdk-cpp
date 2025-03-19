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
    AWS_PINPOINT_API Session() = default;
    AWS_PINPOINT_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The duration of the session, in milliseconds.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Session& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Session& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the session began.</p>
     */
    inline const Aws::String& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::String>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::String>
    Session& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the session ended.</p>
     */
    inline const Aws::String& GetStopTimestamp() const { return m_stopTimestamp; }
    inline bool StopTimestampHasBeenSet() const { return m_stopTimestampHasBeenSet; }
    template<typename StopTimestampT = Aws::String>
    void SetStopTimestamp(StopTimestampT&& value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp = std::forward<StopTimestampT>(value); }
    template<typename StopTimestampT = Aws::String>
    Session& WithStopTimestamp(StopTimestampT&& value) { SetStopTimestamp(std::forward<StopTimestampT>(value)); return *this;}
    ///@}
  private:

    int m_duration{0};
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
