/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IngestionStatus.h>
#include <aws/quicksight/model/ErrorInfo.h>
#include <aws/quicksight/model/RowInfo.h>
#include <aws/quicksight/model/QueueInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/IngestionRequestSource.h>
#include <aws/quicksight/model/IngestionRequestType.h>
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
   * <p>Information about the SPICE ingestion for a dataset.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Ingestion">AWS
   * API Reference</a></p>
   */
  class Ingestion
  {
  public:
    AWS_QUICKSIGHT_API Ingestion() = default;
    AWS_QUICKSIGHT_API Ingestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Ingestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Ingestion& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingestion ID.</p>
     */
    inline const Aws::String& GetIngestionId() const { return m_ingestionId; }
    inline bool IngestionIdHasBeenSet() const { return m_ingestionIdHasBeenSet; }
    template<typename IngestionIdT = Aws::String>
    void SetIngestionId(IngestionIdT&& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = std::forward<IngestionIdT>(value); }
    template<typename IngestionIdT = Aws::String>
    Ingestion& WithIngestionId(IngestionIdT&& value) { SetIngestionId(std::forward<IngestionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingestion status.</p>
     */
    inline IngestionStatus GetIngestionStatus() const { return m_ingestionStatus; }
    inline bool IngestionStatusHasBeenSet() const { return m_ingestionStatusHasBeenSet; }
    inline void SetIngestionStatus(IngestionStatus value) { m_ingestionStatusHasBeenSet = true; m_ingestionStatus = value; }
    inline Ingestion& WithIngestionStatus(IngestionStatus value) { SetIngestionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error information for this ingestion.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = ErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ErrorInfo>
    Ingestion& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RowInfo& GetRowInfo() const { return m_rowInfo; }
    inline bool RowInfoHasBeenSet() const { return m_rowInfoHasBeenSet; }
    template<typename RowInfoT = RowInfo>
    void SetRowInfo(RowInfoT&& value) { m_rowInfoHasBeenSet = true; m_rowInfo = std::forward<RowInfoT>(value); }
    template<typename RowInfoT = RowInfo>
    Ingestion& WithRowInfo(RowInfoT&& value) { SetRowInfo(std::forward<RowInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const QueueInfo& GetQueueInfo() const { return m_queueInfo; }
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }
    template<typename QueueInfoT = QueueInfo>
    void SetQueueInfo(QueueInfoT&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::forward<QueueInfoT>(value); }
    template<typename QueueInfoT = QueueInfo>
    Ingestion& WithQueueInfo(QueueInfoT&& value) { SetQueueInfo(std::forward<QueueInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this ingestion started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Ingestion& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this ingestion took, measured in seconds.</p>
     */
    inline long long GetIngestionTimeInSeconds() const { return m_ingestionTimeInSeconds; }
    inline bool IngestionTimeInSecondsHasBeenSet() const { return m_ingestionTimeInSecondsHasBeenSet; }
    inline void SetIngestionTimeInSeconds(long long value) { m_ingestionTimeInSecondsHasBeenSet = true; m_ingestionTimeInSeconds = value; }
    inline Ingestion& WithIngestionTimeInSeconds(long long value) { SetIngestionTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the data ingested, in bytes.</p>
     */
    inline long long GetIngestionSizeInBytes() const { return m_ingestionSizeInBytes; }
    inline bool IngestionSizeInBytesHasBeenSet() const { return m_ingestionSizeInBytesHasBeenSet; }
    inline void SetIngestionSizeInBytes(long long value) { m_ingestionSizeInBytesHasBeenSet = true; m_ingestionSizeInBytes = value; }
    inline Ingestion& WithIngestionSizeInBytes(long long value) { SetIngestionSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event source for this ingestion.</p>
     */
    inline IngestionRequestSource GetRequestSource() const { return m_requestSource; }
    inline bool RequestSourceHasBeenSet() const { return m_requestSourceHasBeenSet; }
    inline void SetRequestSource(IngestionRequestSource value) { m_requestSourceHasBeenSet = true; m_requestSource = value; }
    inline Ingestion& WithRequestSource(IngestionRequestSource value) { SetRequestSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of this ingestion.</p>
     */
    inline IngestionRequestType GetRequestType() const { return m_requestType; }
    inline bool RequestTypeHasBeenSet() const { return m_requestTypeHasBeenSet; }
    inline void SetRequestType(IngestionRequestType value) { m_requestTypeHasBeenSet = true; m_requestType = value; }
    inline Ingestion& WithRequestType(IngestionRequestType value) { SetRequestType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ingestionId;
    bool m_ingestionIdHasBeenSet = false;

    IngestionStatus m_ingestionStatus{IngestionStatus::NOT_SET};
    bool m_ingestionStatusHasBeenSet = false;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    RowInfo m_rowInfo;
    bool m_rowInfoHasBeenSet = false;

    QueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    long long m_ingestionTimeInSeconds{0};
    bool m_ingestionTimeInSecondsHasBeenSet = false;

    long long m_ingestionSizeInBytes{0};
    bool m_ingestionSizeInBytesHasBeenSet = false;

    IngestionRequestSource m_requestSource{IngestionRequestSource::NOT_SET};
    bool m_requestSourceHasBeenSet = false;

    IngestionRequestType m_requestType{IngestionRequestType::NOT_SET};
    bool m_requestTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
