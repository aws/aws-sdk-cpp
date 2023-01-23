/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/ResponsePartitionKey.h>
#include <aws/pi/model/DimensionKeyDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PI
{
namespace Model
{
  class DescribeDimensionKeysResult
  {
  public:
    AWS_PI_API DescribeDimensionKeysResult();
    AWS_PI_API DescribeDimensionKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API DescribeDimensionKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The start time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetAlignedStartTime() const{ return m_alignedStartTime; }

    /**
     * <p>The start time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>. </p>
     */
    inline void SetAlignedStartTime(const Aws::Utils::DateTime& value) { m_alignedStartTime = value; }

    /**
     * <p>The start time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>. </p>
     */
    inline void SetAlignedStartTime(Aws::Utils::DateTime&& value) { m_alignedStartTime = std::move(value); }

    /**
     * <p>The start time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>. </p>
     */
    inline DescribeDimensionKeysResult& WithAlignedStartTime(const Aws::Utils::DateTime& value) { SetAlignedStartTime(value); return *this;}

    /**
     * <p>The start time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>. </p>
     */
    inline DescribeDimensionKeysResult& WithAlignedStartTime(Aws::Utils::DateTime&& value) { SetAlignedStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedEndTime</code> will be greater than or equal to the value of the
     * user-specified <code>Endtime</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetAlignedEndTime() const{ return m_alignedEndTime; }

    /**
     * <p>The end time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedEndTime</code> will be greater than or equal to the value of the
     * user-specified <code>Endtime</code>. </p>
     */
    inline void SetAlignedEndTime(const Aws::Utils::DateTime& value) { m_alignedEndTime = value; }

    /**
     * <p>The end time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedEndTime</code> will be greater than or equal to the value of the
     * user-specified <code>Endtime</code>. </p>
     */
    inline void SetAlignedEndTime(Aws::Utils::DateTime&& value) { m_alignedEndTime = std::move(value); }

    /**
     * <p>The end time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedEndTime</code> will be greater than or equal to the value of the
     * user-specified <code>Endtime</code>. </p>
     */
    inline DescribeDimensionKeysResult& WithAlignedEndTime(const Aws::Utils::DateTime& value) { SetAlignedEndTime(value); return *this;}

    /**
     * <p>The end time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedEndTime</code> will be greater than or equal to the value of the
     * user-specified <code>Endtime</code>. </p>
     */
    inline DescribeDimensionKeysResult& WithAlignedEndTime(Aws::Utils::DateTime&& value) { SetAlignedEndTime(std::move(value)); return *this;}


    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline const Aws::Vector<ResponsePartitionKey>& GetPartitionKeys() const{ return m_partitionKeys; }

    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline void SetPartitionKeys(const Aws::Vector<ResponsePartitionKey>& value) { m_partitionKeys = value; }

    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline void SetPartitionKeys(Aws::Vector<ResponsePartitionKey>&& value) { m_partitionKeys = std::move(value); }

    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline DescribeDimensionKeysResult& WithPartitionKeys(const Aws::Vector<ResponsePartitionKey>& value) { SetPartitionKeys(value); return *this;}

    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline DescribeDimensionKeysResult& WithPartitionKeys(Aws::Vector<ResponsePartitionKey>&& value) { SetPartitionKeys(std::move(value)); return *this;}

    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline DescribeDimensionKeysResult& AddPartitionKeys(const ResponsePartitionKey& value) { m_partitionKeys.push_back(value); return *this; }

    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline DescribeDimensionKeysResult& AddPartitionKeys(ResponsePartitionKey&& value) { m_partitionKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline const Aws::Vector<DimensionKeyDescription>& GetKeys() const{ return m_keys; }

    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline void SetKeys(const Aws::Vector<DimensionKeyDescription>& value) { m_keys = value; }

    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline void SetKeys(Aws::Vector<DimensionKeyDescription>&& value) { m_keys = std::move(value); }

    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline DescribeDimensionKeysResult& WithKeys(const Aws::Vector<DimensionKeyDescription>& value) { SetKeys(value); return *this;}

    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline DescribeDimensionKeysResult& WithKeys(Aws::Vector<DimensionKeyDescription>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline DescribeDimensionKeysResult& AddKeys(const DimensionKeyDescription& value) { m_keys.push_back(value); return *this; }

    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline DescribeDimensionKeysResult& AddKeys(DimensionKeyDescription&& value) { m_keys.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline DescribeDimensionKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline DescribeDimensionKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline DescribeDimensionKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_alignedStartTime;

    Aws::Utils::DateTime m_alignedEndTime;

    Aws::Vector<ResponsePartitionKey> m_partitionKeys;

    Aws::Vector<DimensionKeyDescription> m_keys;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
