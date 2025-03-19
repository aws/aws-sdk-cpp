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
    AWS_PI_API DescribeDimensionKeysResult() = default;
    AWS_PI_API DescribeDimensionKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API DescribeDimensionKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The start time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetAlignedStartTime() const { return m_alignedStartTime; }
    template<typename AlignedStartTimeT = Aws::Utils::DateTime>
    void SetAlignedStartTime(AlignedStartTimeT&& value) { m_alignedStartTimeHasBeenSet = true; m_alignedStartTime = std::forward<AlignedStartTimeT>(value); }
    template<typename AlignedStartTimeT = Aws::Utils::DateTime>
    DescribeDimensionKeysResult& WithAlignedStartTime(AlignedStartTimeT&& value) { SetAlignedStartTime(std::forward<AlignedStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the returned dimension keys, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedEndTime</code> will be greater than or equal to the value of the
     * user-specified <code>Endtime</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetAlignedEndTime() const { return m_alignedEndTime; }
    template<typename AlignedEndTimeT = Aws::Utils::DateTime>
    void SetAlignedEndTime(AlignedEndTimeT&& value) { m_alignedEndTimeHasBeenSet = true; m_alignedEndTime = std::forward<AlignedEndTimeT>(value); }
    template<typename AlignedEndTimeT = Aws::Utils::DateTime>
    DescribeDimensionKeysResult& WithAlignedEndTime(AlignedEndTimeT&& value) { SetAlignedEndTime(std::forward<AlignedEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>PartitionBy</code> was present in the request,
     * <code>PartitionKeys</code> contains the breakdown of dimension keys by the
     * specified partitions. </p>
     */
    inline const Aws::Vector<ResponsePartitionKey>& GetPartitionKeys() const { return m_partitionKeys; }
    template<typename PartitionKeysT = Aws::Vector<ResponsePartitionKey>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<ResponsePartitionKey>>
    DescribeDimensionKeysResult& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = ResponsePartitionKey>
    DescribeDimensionKeysResult& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The dimension keys that were requested.</p>
     */
    inline const Aws::Vector<DimensionKeyDescription>& GetKeys() const { return m_keys; }
    template<typename KeysT = Aws::Vector<DimensionKeyDescription>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<DimensionKeyDescription>>
    DescribeDimensionKeysResult& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = DimensionKeyDescription>
    DescribeDimensionKeysResult& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDimensionKeysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDimensionKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_alignedStartTime{};
    bool m_alignedStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_alignedEndTime{};
    bool m_alignedEndTimeHasBeenSet = false;

    Aws::Vector<ResponsePartitionKey> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::Vector<DimensionKeyDescription> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
