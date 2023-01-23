/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryRunStatus.h>
#include <aws/synthetics/model/CanaryRunTimeline.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains the details about one run of one
   * canary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRun">AWS
   * API Reference</a></p>
   */
  class CanaryRun
  {
  public:
    AWS_SYNTHETICS_API CanaryRun();
    AWS_SYNTHETICS_API CanaryRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline CanaryRun& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline CanaryRun& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline CanaryRun& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the canary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the canary.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the canary.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the canary.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the canary.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the canary.</p>
     */
    inline CanaryRun& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the canary.</p>
     */
    inline CanaryRun& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the canary.</p>
     */
    inline CanaryRun& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of this run.</p>
     */
    inline const CanaryRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this run.</p>
     */
    inline void SetStatus(const CanaryRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this run.</p>
     */
    inline void SetStatus(CanaryRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this run.</p>
     */
    inline CanaryRun& WithStatus(const CanaryRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this run.</p>
     */
    inline CanaryRun& WithStatus(CanaryRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the start and end times of this run.</p>
     */
    inline const CanaryRunTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>A structure that contains the start and end times of this run.</p>
     */
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }

    /**
     * <p>A structure that contains the start and end times of this run.</p>
     */
    inline void SetTimeline(const CanaryRunTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>A structure that contains the start and end times of this run.</p>
     */
    inline void SetTimeline(CanaryRunTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = std::move(value); }

    /**
     * <p>A structure that contains the start and end times of this run.</p>
     */
    inline CanaryRun& WithTimeline(const CanaryRunTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>A structure that contains the start and end times of this run.</p>
     */
    inline CanaryRun& WithTimeline(CanaryRunTimeline&& value) { SetTimeline(std::move(value)); return *this;}


    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline const Aws::String& GetArtifactS3Location() const{ return m_artifactS3Location; }

    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline bool ArtifactS3LocationHasBeenSet() const { return m_artifactS3LocationHasBeenSet; }

    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline void SetArtifactS3Location(const Aws::String& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = value; }

    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline void SetArtifactS3Location(Aws::String&& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = std::move(value); }

    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline void SetArtifactS3Location(const char* value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location.assign(value); }

    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline CanaryRun& WithArtifactS3Location(const Aws::String& value) { SetArtifactS3Location(value); return *this;}

    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline CanaryRun& WithArtifactS3Location(Aws::String&& value) { SetArtifactS3Location(std::move(value)); return *this;}

    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline CanaryRun& WithArtifactS3Location(const char* value) { SetArtifactS3Location(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CanaryRunStatus m_status;
    bool m_statusHasBeenSet = false;

    CanaryRunTimeline m_timeline;
    bool m_timelineHasBeenSet = false;

    Aws::String m_artifactS3Location;
    bool m_artifactS3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
