/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/UpdateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mwaa/model/UpdateError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/model/WorkerReplacementStrategy.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Describes the status of the last update on the environment, and any errors
   * that were encountered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/LastUpdate">AWS API
   * Reference</a></p>
   */
  class LastUpdate
  {
  public:
    AWS_MWAA_API LastUpdate() = default;
    AWS_MWAA_API LastUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API LastUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the last update on the environment.</p>
     */
    inline UpdateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UpdateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LastUpdate& WithStatus(UpdateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the last update on the environment.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LastUpdate& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error that was encountered during the last update of the environment.</p>
     */
    inline const UpdateError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = UpdateError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = UpdateError>
    LastUpdate& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the last update to the environment. Includes internal processes
     * by Amazon MWAA, such as an environment maintenance update.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    LastUpdate& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker replacement strategy used in the last update of the
     * environment.</p>
     */
    inline WorkerReplacementStrategy GetWorkerReplacementStrategy() const { return m_workerReplacementStrategy; }
    inline bool WorkerReplacementStrategyHasBeenSet() const { return m_workerReplacementStrategyHasBeenSet; }
    inline void SetWorkerReplacementStrategy(WorkerReplacementStrategy value) { m_workerReplacementStrategyHasBeenSet = true; m_workerReplacementStrategy = value; }
    inline LastUpdate& WithWorkerReplacementStrategy(WorkerReplacementStrategy value) { SetWorkerReplacementStrategy(value); return *this;}
    ///@}
  private:

    UpdateStatus m_status{UpdateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    UpdateError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    WorkerReplacementStrategy m_workerReplacementStrategy{WorkerReplacementStrategy::NOT_SET};
    bool m_workerReplacementStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
