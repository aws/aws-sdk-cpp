/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Information about a queued dataset SPICE ingestion.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QueueInfo">AWS
   * API Reference</a></p>
   */
  class QueueInfo
  {
  public:
    AWS_QUICKSIGHT_API QueueInfo() = default;
    AWS_QUICKSIGHT_API QueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API QueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline const Aws::String& GetWaitingOnIngestion() const { return m_waitingOnIngestion; }
    inline bool WaitingOnIngestionHasBeenSet() const { return m_waitingOnIngestionHasBeenSet; }
    template<typename WaitingOnIngestionT = Aws::String>
    void SetWaitingOnIngestion(WaitingOnIngestionT&& value) { m_waitingOnIngestionHasBeenSet = true; m_waitingOnIngestion = std::forward<WaitingOnIngestionT>(value); }
    template<typename WaitingOnIngestionT = Aws::String>
    QueueInfo& WithWaitingOnIngestion(WaitingOnIngestionT&& value) { SetWaitingOnIngestion(std::forward<WaitingOnIngestionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline const Aws::String& GetQueuedIngestion() const { return m_queuedIngestion; }
    inline bool QueuedIngestionHasBeenSet() const { return m_queuedIngestionHasBeenSet; }
    template<typename QueuedIngestionT = Aws::String>
    void SetQueuedIngestion(QueuedIngestionT&& value) { m_queuedIngestionHasBeenSet = true; m_queuedIngestion = std::forward<QueuedIngestionT>(value); }
    template<typename QueuedIngestionT = Aws::String>
    QueueInfo& WithQueuedIngestion(QueuedIngestionT&& value) { SetQueuedIngestion(std::forward<QueuedIngestionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_waitingOnIngestion;
    bool m_waitingOnIngestionHasBeenSet = false;

    Aws::String m_queuedIngestion;
    bool m_queuedIngestionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
