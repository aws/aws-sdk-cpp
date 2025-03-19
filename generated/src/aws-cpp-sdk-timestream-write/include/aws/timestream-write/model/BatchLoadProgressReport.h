/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>

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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Details about the progress of a batch load task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/BatchLoadProgressReport">AWS
   * API Reference</a></p>
   */
  class BatchLoadProgressReport
  {
  public:
    AWS_TIMESTREAMWRITE_API BatchLoadProgressReport() = default;
    AWS_TIMESTREAMWRITE_API BatchLoadProgressReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API BatchLoadProgressReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline long long GetRecordsProcessed() const { return m_recordsProcessed; }
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }
    inline void SetRecordsProcessed(long long value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }
    inline BatchLoadProgressReport& WithRecordsProcessed(long long value) { SetRecordsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline long long GetRecordsIngested() const { return m_recordsIngested; }
    inline bool RecordsIngestedHasBeenSet() const { return m_recordsIngestedHasBeenSet; }
    inline void SetRecordsIngested(long long value) { m_recordsIngestedHasBeenSet = true; m_recordsIngested = value; }
    inline BatchLoadProgressReport& WithRecordsIngested(long long value) { SetRecordsIngested(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline long long GetParseFailures() const { return m_parseFailures; }
    inline bool ParseFailuresHasBeenSet() const { return m_parseFailuresHasBeenSet; }
    inline void SetParseFailures(long long value) { m_parseFailuresHasBeenSet = true; m_parseFailures = value; }
    inline BatchLoadProgressReport& WithParseFailures(long long value) { SetParseFailures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline long long GetRecordIngestionFailures() const { return m_recordIngestionFailures; }
    inline bool RecordIngestionFailuresHasBeenSet() const { return m_recordIngestionFailuresHasBeenSet; }
    inline void SetRecordIngestionFailures(long long value) { m_recordIngestionFailuresHasBeenSet = true; m_recordIngestionFailures = value; }
    inline BatchLoadProgressReport& WithRecordIngestionFailures(long long value) { SetRecordIngestionFailures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline long long GetFileFailures() const { return m_fileFailures; }
    inline bool FileFailuresHasBeenSet() const { return m_fileFailuresHasBeenSet; }
    inline void SetFileFailures(long long value) { m_fileFailuresHasBeenSet = true; m_fileFailures = value; }
    inline BatchLoadProgressReport& WithFileFailures(long long value) { SetFileFailures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline long long GetBytesMetered() const { return m_bytesMetered; }
    inline bool BytesMeteredHasBeenSet() const { return m_bytesMeteredHasBeenSet; }
    inline void SetBytesMetered(long long value) { m_bytesMeteredHasBeenSet = true; m_bytesMetered = value; }
    inline BatchLoadProgressReport& WithBytesMetered(long long value) { SetBytesMetered(value); return *this;}
    ///@}
  private:

    long long m_recordsProcessed{0};
    bool m_recordsProcessedHasBeenSet = false;

    long long m_recordsIngested{0};
    bool m_recordsIngestedHasBeenSet = false;

    long long m_parseFailures{0};
    bool m_parseFailuresHasBeenSet = false;

    long long m_recordIngestionFailures{0};
    bool m_recordIngestionFailuresHasBeenSet = false;

    long long m_fileFailures{0};
    bool m_fileFailuresHasBeenSet = false;

    long long m_bytesMetered{0};
    bool m_bytesMeteredHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
