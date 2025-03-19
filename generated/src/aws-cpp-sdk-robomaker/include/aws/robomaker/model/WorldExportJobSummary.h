/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldExportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/OutputLocation.h>
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
   * <p>Information about a world export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/WorldExportJobSummary">AWS
   * API Reference</a></p>
   */
  class WorldExportJobSummary
  {
  public:
    AWS_ROBOMAKER_API WorldExportJobSummary() = default;
    AWS_ROBOMAKER_API WorldExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API WorldExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    WorldExportJobSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world export job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world export job is being cancelled.</p> </dd>
     * </dl>
     */
    inline WorldExportJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorldExportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorldExportJobSummary& WithStatus(WorldExportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    WorldExportJobSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of worlds.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorlds() const { return m_worlds; }
    inline bool WorldsHasBeenSet() const { return m_worldsHasBeenSet; }
    template<typename WorldsT = Aws::Vector<Aws::String>>
    void SetWorlds(WorldsT&& value) { m_worldsHasBeenSet = true; m_worlds = std::forward<WorldsT>(value); }
    template<typename WorldsT = Aws::Vector<Aws::String>>
    WorldExportJobSummary& WithWorlds(WorldsT&& value) { SetWorlds(std::forward<WorldsT>(value)); return *this;}
    template<typename WorldsT = Aws::String>
    WorldExportJobSummary& AddWorlds(WorldsT&& value) { m_worldsHasBeenSet = true; m_worlds.emplace_back(std::forward<WorldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    WorldExportJobSummary& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    WorldExportJobStatus m_status{WorldExportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_worlds;
    bool m_worldsHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
