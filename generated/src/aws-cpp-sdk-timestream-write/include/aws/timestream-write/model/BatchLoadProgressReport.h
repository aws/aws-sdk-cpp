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
    AWS_TIMESTREAMWRITE_API BatchLoadProgressReport();
    AWS_TIMESTREAMWRITE_API BatchLoadProgressReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API BatchLoadProgressReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline long long GetRecordsProcessed() const{ return m_recordsProcessed; }

    /**
     * <p/>
     */
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRecordsProcessed(long long value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }

    /**
     * <p/>
     */
    inline BatchLoadProgressReport& WithRecordsProcessed(long long value) { SetRecordsProcessed(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetRecordsIngested() const{ return m_recordsIngested; }

    /**
     * <p/>
     */
    inline bool RecordsIngestedHasBeenSet() const { return m_recordsIngestedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRecordsIngested(long long value) { m_recordsIngestedHasBeenSet = true; m_recordsIngested = value; }

    /**
     * <p/>
     */
    inline BatchLoadProgressReport& WithRecordsIngested(long long value) { SetRecordsIngested(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetParseFailures() const{ return m_parseFailures; }

    /**
     * <p/>
     */
    inline bool ParseFailuresHasBeenSet() const { return m_parseFailuresHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetParseFailures(long long value) { m_parseFailuresHasBeenSet = true; m_parseFailures = value; }

    /**
     * <p/>
     */
    inline BatchLoadProgressReport& WithParseFailures(long long value) { SetParseFailures(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetRecordIngestionFailures() const{ return m_recordIngestionFailures; }

    /**
     * <p/>
     */
    inline bool RecordIngestionFailuresHasBeenSet() const { return m_recordIngestionFailuresHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRecordIngestionFailures(long long value) { m_recordIngestionFailuresHasBeenSet = true; m_recordIngestionFailures = value; }

    /**
     * <p/>
     */
    inline BatchLoadProgressReport& WithRecordIngestionFailures(long long value) { SetRecordIngestionFailures(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetFileFailures() const{ return m_fileFailures; }

    /**
     * <p/>
     */
    inline bool FileFailuresHasBeenSet() const { return m_fileFailuresHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetFileFailures(long long value) { m_fileFailuresHasBeenSet = true; m_fileFailures = value; }

    /**
     * <p/>
     */
    inline BatchLoadProgressReport& WithFileFailures(long long value) { SetFileFailures(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetBytesMetered() const{ return m_bytesMetered; }

    /**
     * <p/>
     */
    inline bool BytesMeteredHasBeenSet() const { return m_bytesMeteredHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetBytesMetered(long long value) { m_bytesMeteredHasBeenSet = true; m_bytesMetered = value; }

    /**
     * <p/>
     */
    inline BatchLoadProgressReport& WithBytesMetered(long long value) { SetBytesMetered(value); return *this;}

  private:

    long long m_recordsProcessed;
    bool m_recordsProcessedHasBeenSet = false;

    long long m_recordsIngested;
    bool m_recordsIngestedHasBeenSet = false;

    long long m_parseFailures;
    bool m_parseFailuresHasBeenSet = false;

    long long m_recordIngestionFailures;
    bool m_recordIngestionFailuresHasBeenSet = false;

    long long m_fileFailures;
    bool m_fileFailuresHasBeenSet = false;

    long long m_bytesMetered;
    bool m_bytesMeteredHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
