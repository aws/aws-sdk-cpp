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
    AWS_QUICKSIGHT_API Ingestion();
    AWS_QUICKSIGHT_API Ingestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Ingestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Ingestion& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Ingestion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Ingestion& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingestion ID.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }
    inline bool IngestionIdHasBeenSet() const { return m_ingestionIdHasBeenSet; }
    inline void SetIngestionId(const Aws::String& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = value; }
    inline void SetIngestionId(Aws::String&& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = std::move(value); }
    inline void SetIngestionId(const char* value) { m_ingestionIdHasBeenSet = true; m_ingestionId.assign(value); }
    inline Ingestion& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}
    inline Ingestion& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}
    inline Ingestion& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingestion status.</p>
     */
    inline const IngestionStatus& GetIngestionStatus() const{ return m_ingestionStatus; }
    inline bool IngestionStatusHasBeenSet() const { return m_ingestionStatusHasBeenSet; }
    inline void SetIngestionStatus(const IngestionStatus& value) { m_ingestionStatusHasBeenSet = true; m_ingestionStatus = value; }
    inline void SetIngestionStatus(IngestionStatus&& value) { m_ingestionStatusHasBeenSet = true; m_ingestionStatus = std::move(value); }
    inline Ingestion& WithIngestionStatus(const IngestionStatus& value) { SetIngestionStatus(value); return *this;}
    inline Ingestion& WithIngestionStatus(IngestionStatus&& value) { SetIngestionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error information for this ingestion.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }
    inline Ingestion& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}
    inline Ingestion& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RowInfo& GetRowInfo() const{ return m_rowInfo; }
    inline bool RowInfoHasBeenSet() const { return m_rowInfoHasBeenSet; }
    inline void SetRowInfo(const RowInfo& value) { m_rowInfoHasBeenSet = true; m_rowInfo = value; }
    inline void SetRowInfo(RowInfo&& value) { m_rowInfoHasBeenSet = true; m_rowInfo = std::move(value); }
    inline Ingestion& WithRowInfo(const RowInfo& value) { SetRowInfo(value); return *this;}
    inline Ingestion& WithRowInfo(RowInfo&& value) { SetRowInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const QueueInfo& GetQueueInfo() const{ return m_queueInfo; }
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }
    inline void SetQueueInfo(const QueueInfo& value) { m_queueInfoHasBeenSet = true; m_queueInfo = value; }
    inline void SetQueueInfo(QueueInfo&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::move(value); }
    inline Ingestion& WithQueueInfo(const QueueInfo& value) { SetQueueInfo(value); return *this;}
    inline Ingestion& WithQueueInfo(QueueInfo&& value) { SetQueueInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this ingestion started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Ingestion& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Ingestion& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this ingestion took, measured in seconds.</p>
     */
    inline long long GetIngestionTimeInSeconds() const{ return m_ingestionTimeInSeconds; }
    inline bool IngestionTimeInSecondsHasBeenSet() const { return m_ingestionTimeInSecondsHasBeenSet; }
    inline void SetIngestionTimeInSeconds(long long value) { m_ingestionTimeInSecondsHasBeenSet = true; m_ingestionTimeInSeconds = value; }
    inline Ingestion& WithIngestionTimeInSeconds(long long value) { SetIngestionTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the data ingested, in bytes.</p>
     */
    inline long long GetIngestionSizeInBytes() const{ return m_ingestionSizeInBytes; }
    inline bool IngestionSizeInBytesHasBeenSet() const { return m_ingestionSizeInBytesHasBeenSet; }
    inline void SetIngestionSizeInBytes(long long value) { m_ingestionSizeInBytesHasBeenSet = true; m_ingestionSizeInBytes = value; }
    inline Ingestion& WithIngestionSizeInBytes(long long value) { SetIngestionSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event source for this ingestion.</p>
     */
    inline const IngestionRequestSource& GetRequestSource() const{ return m_requestSource; }
    inline bool RequestSourceHasBeenSet() const { return m_requestSourceHasBeenSet; }
    inline void SetRequestSource(const IngestionRequestSource& value) { m_requestSourceHasBeenSet = true; m_requestSource = value; }
    inline void SetRequestSource(IngestionRequestSource&& value) { m_requestSourceHasBeenSet = true; m_requestSource = std::move(value); }
    inline Ingestion& WithRequestSource(const IngestionRequestSource& value) { SetRequestSource(value); return *this;}
    inline Ingestion& WithRequestSource(IngestionRequestSource&& value) { SetRequestSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of this ingestion.</p>
     */
    inline const IngestionRequestType& GetRequestType() const{ return m_requestType; }
    inline bool RequestTypeHasBeenSet() const { return m_requestTypeHasBeenSet; }
    inline void SetRequestType(const IngestionRequestType& value) { m_requestTypeHasBeenSet = true; m_requestType = value; }
    inline void SetRequestType(IngestionRequestType&& value) { m_requestTypeHasBeenSet = true; m_requestType = std::move(value); }
    inline Ingestion& WithRequestType(const IngestionRequestType& value) { SetRequestType(value); return *this;}
    inline Ingestion& WithRequestType(IngestionRequestType&& value) { SetRequestType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ingestionId;
    bool m_ingestionIdHasBeenSet = false;

    IngestionStatus m_ingestionStatus;
    bool m_ingestionStatusHasBeenSet = false;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    RowInfo m_rowInfo;
    bool m_rowInfoHasBeenSet = false;

    QueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    long long m_ingestionTimeInSeconds;
    bool m_ingestionTimeInSecondsHasBeenSet = false;

    long long m_ingestionSizeInBytes;
    bool m_ingestionSizeInBytesHasBeenSet = false;

    IngestionRequestSource m_requestSource;
    bool m_requestSourceHasBeenSet = false;

    IngestionRequestType m_requestType;
    bool m_requestTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
