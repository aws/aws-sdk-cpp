/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>

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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Information about the status of the query, including progress and bytes
   * scanned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QueryStatus">AWS
   * API Reference</a></p>
   */
  class QueryStatus
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryStatus();
    AWS_TIMESTREAMQUERY_API QueryStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QueryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The progress of the query, expressed as a percentage.</p>
     */
    inline double GetProgressPercentage() const{ return m_progressPercentage; }

    /**
     * <p>The progress of the query, expressed as a percentage.</p>
     */
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }

    /**
     * <p>The progress of the query, expressed as a percentage.</p>
     */
    inline void SetProgressPercentage(double value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }

    /**
     * <p>The progress of the query, expressed as a percentage.</p>
     */
    inline QueryStatus& WithProgressPercentage(double value) { SetProgressPercentage(value); return *this;}


    /**
     * <p>The amount of data scanned by the query in bytes. This is a cumulative sum
     * and represents the total amount of bytes scanned since the query was started.
     * </p>
     */
    inline long long GetCumulativeBytesScanned() const{ return m_cumulativeBytesScanned; }

    /**
     * <p>The amount of data scanned by the query in bytes. This is a cumulative sum
     * and represents the total amount of bytes scanned since the query was started.
     * </p>
     */
    inline bool CumulativeBytesScannedHasBeenSet() const { return m_cumulativeBytesScannedHasBeenSet; }

    /**
     * <p>The amount of data scanned by the query in bytes. This is a cumulative sum
     * and represents the total amount of bytes scanned since the query was started.
     * </p>
     */
    inline void SetCumulativeBytesScanned(long long value) { m_cumulativeBytesScannedHasBeenSet = true; m_cumulativeBytesScanned = value; }

    /**
     * <p>The amount of data scanned by the query in bytes. This is a cumulative sum
     * and represents the total amount of bytes scanned since the query was started.
     * </p>
     */
    inline QueryStatus& WithCumulativeBytesScanned(long long value) { SetCumulativeBytesScanned(value); return *this;}


    /**
     * <p>The amount of data scanned by the query in bytes that you will be charged
     * for. This is a cumulative sum and represents the total amount of data that you
     * will be charged for since the query was started. The charge is applied only once
     * and is either applied when the query completes running or when the query is
     * cancelled. </p>
     */
    inline long long GetCumulativeBytesMetered() const{ return m_cumulativeBytesMetered; }

    /**
     * <p>The amount of data scanned by the query in bytes that you will be charged
     * for. This is a cumulative sum and represents the total amount of data that you
     * will be charged for since the query was started. The charge is applied only once
     * and is either applied when the query completes running or when the query is
     * cancelled. </p>
     */
    inline bool CumulativeBytesMeteredHasBeenSet() const { return m_cumulativeBytesMeteredHasBeenSet; }

    /**
     * <p>The amount of data scanned by the query in bytes that you will be charged
     * for. This is a cumulative sum and represents the total amount of data that you
     * will be charged for since the query was started. The charge is applied only once
     * and is either applied when the query completes running or when the query is
     * cancelled. </p>
     */
    inline void SetCumulativeBytesMetered(long long value) { m_cumulativeBytesMeteredHasBeenSet = true; m_cumulativeBytesMetered = value; }

    /**
     * <p>The amount of data scanned by the query in bytes that you will be charged
     * for. This is a cumulative sum and represents the total amount of data that you
     * will be charged for since the query was started. The charge is applied only once
     * and is either applied when the query completes running or when the query is
     * cancelled. </p>
     */
    inline QueryStatus& WithCumulativeBytesMetered(long long value) { SetCumulativeBytesMetered(value); return *this;}

  private:

    double m_progressPercentage;
    bool m_progressPercentageHasBeenSet = false;

    long long m_cumulativeBytesScanned;
    bool m_cumulativeBytesScannedHasBeenSet = false;

    long long m_cumulativeBytesMetered;
    bool m_cumulativeBytesMeteredHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
