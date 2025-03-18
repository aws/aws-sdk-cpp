﻿/**
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
    AWS_SYNTHETICS_API CanaryRun() = default;
    AWS_SYNTHETICS_API CanaryRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique ID that identifies this canary run.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CanaryRun& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the canary.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CanaryRun& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this run.</p>
     */
    inline const CanaryRunStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = CanaryRunStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = CanaryRunStatus>
    CanaryRun& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the start and end times of this run.</p>
     */
    inline const CanaryRunTimeline& GetTimeline() const { return m_timeline; }
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }
    template<typename TimelineT = CanaryRunTimeline>
    void SetTimeline(TimelineT&& value) { m_timelineHasBeenSet = true; m_timeline = std::forward<TimelineT>(value); }
    template<typename TimelineT = CanaryRunTimeline>
    CanaryRun& WithTimeline(TimelineT&& value) { SetTimeline(std::forward<TimelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where the canary stored artifacts from the run. Artifacts
     * include the log file, screenshots, and HAR files.</p>
     */
    inline const Aws::String& GetArtifactS3Location() const { return m_artifactS3Location; }
    inline bool ArtifactS3LocationHasBeenSet() const { return m_artifactS3LocationHasBeenSet; }
    template<typename ArtifactS3LocationT = Aws::String>
    void SetArtifactS3Location(ArtifactS3LocationT&& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = std::forward<ArtifactS3LocationT>(value); }
    template<typename ArtifactS3LocationT = Aws::String>
    CanaryRun& WithArtifactS3Location(ArtifactS3LocationT&& value) { SetArtifactS3Location(std::forward<ArtifactS3LocationT>(value)); return *this;}
    ///@}
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
