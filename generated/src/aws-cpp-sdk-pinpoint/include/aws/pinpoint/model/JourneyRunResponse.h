/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/JourneyRunStatus.h>
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
   * <p>Provides information from a specified run of a journey.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyRunResponse">AWS
   * API Reference</a></p>
   */
  class JourneyRunResponse
  {
  public:
    AWS_PINPOINT_API JourneyRunResponse();
    AWS_PINPOINT_API JourneyRunResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyRunResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline JourneyRunResponse& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline JourneyRunResponse& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time when the journey run was created or scheduled, in ISO 8601
     * format.</p>
     */
    inline JourneyRunResponse& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline const Aws::String& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline void SetLastUpdateTime(const Aws::String& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline void SetLastUpdateTime(Aws::String&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline void SetLastUpdateTime(const char* value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime.assign(value); }

    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline JourneyRunResponse& WithLastUpdateTime(const Aws::String& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline JourneyRunResponse& WithLastUpdateTime(Aws::String&& value) { SetLastUpdateTime(std::move(value)); return *this;}

    /**
     * <p>The last time the journey run was updated, in ISO 8601 format..</p>
     */
    inline JourneyRunResponse& WithLastUpdateTime(const char* value) { SetLastUpdateTime(value); return *this;}


    /**
     * <p>The unique identifier for the run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The unique identifier for the run.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The unique identifier for the run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The unique identifier for the run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The unique identifier for the run.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The unique identifier for the run.</p>
     */
    inline JourneyRunResponse& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The unique identifier for the run.</p>
     */
    inline JourneyRunResponse& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the run.</p>
     */
    inline JourneyRunResponse& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The current status of the journey run.</p>
     */
    inline const JourneyRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the journey run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the journey run.</p>
     */
    inline void SetStatus(const JourneyRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the journey run.</p>
     */
    inline void SetStatus(JourneyRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the journey run.</p>
     */
    inline JourneyRunResponse& WithStatus(const JourneyRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the journey run.</p>
     */
    inline JourneyRunResponse& WithStatus(JourneyRunStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    JourneyRunStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
