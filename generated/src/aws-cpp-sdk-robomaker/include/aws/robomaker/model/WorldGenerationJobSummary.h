/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/WorldGenerationJobStatus.h>
#include <aws/robomaker/model/WorldCount.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a world generator job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/WorldGenerationJobSummary">AWS
   * API Reference</a></p>
   */
  class WorldGenerationJobSummary
  {
  public:
    AWS_ROBOMAKER_API WorldGenerationJobSummary() = default;
    AWS_ROBOMAKER_API WorldGenerationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API WorldGenerationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    WorldGenerationJobSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline const Aws::String& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = Aws::String>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Aws::String>
    WorldGenerationJobSummary& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the world generator job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    WorldGenerationJobSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the world generator job:</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world generator job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world generator job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * generator job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world generator
     * job failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>PartialFailed</dt> <dd> <p>Some worlds did not generate.</p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world generator job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world generator job is being cancelled.</p> </dd>
     * </dl>
     */
    inline WorldGenerationJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorldGenerationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorldGenerationJobSummary& WithStatus(WorldGenerationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the world count.</p>
     */
    inline const WorldCount& GetWorldCount() const { return m_worldCount; }
    inline bool WorldCountHasBeenSet() const { return m_worldCountHasBeenSet; }
    template<typename WorldCountT = WorldCount>
    void SetWorldCount(WorldCountT&& value) { m_worldCountHasBeenSet = true; m_worldCount = std::forward<WorldCountT>(value); }
    template<typename WorldCountT = WorldCount>
    WorldGenerationJobSummary& WithWorldCount(WorldCountT&& value) { SetWorldCount(std::forward<WorldCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of worlds that were generated.</p>
     */
    inline int GetSucceededWorldCount() const { return m_succeededWorldCount; }
    inline bool SucceededWorldCountHasBeenSet() const { return m_succeededWorldCountHasBeenSet; }
    inline void SetSucceededWorldCount(int value) { m_succeededWorldCountHasBeenSet = true; m_succeededWorldCount = value; }
    inline WorldGenerationJobSummary& WithSucceededWorldCount(int value) { SetSucceededWorldCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of worlds that failed.</p>
     */
    inline int GetFailedWorldCount() const { return m_failedWorldCount; }
    inline bool FailedWorldCountHasBeenSet() const { return m_failedWorldCountHasBeenSet; }
    inline void SetFailedWorldCount(int value) { m_failedWorldCountHasBeenSet = true; m_failedWorldCount = value; }
    inline WorldGenerationJobSummary& WithFailedWorldCount(int value) { SetFailedWorldCount(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    WorldGenerationJobStatus m_status{WorldGenerationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    WorldCount m_worldCount;
    bool m_worldCountHasBeenSet = false;

    int m_succeededWorldCount{0};
    bool m_succeededWorldCountHasBeenSet = false;

    int m_failedWorldCount{0};
    bool m_failedWorldCountHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
