/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DataDeletionJob.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeDataDeletionJobResult
  {
  public:
    AWS_PERSONALIZE_API DescribeDataDeletionJobResult() = default;
    AWS_PERSONALIZE_API DescribeDataDeletionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDataDeletionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the data deletion job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>PENDING</p> </li> <li>
     * <p>IN_PROGRESS</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>FAILED</p> </li>
     * </ul>
     */
    inline const DataDeletionJob& GetDataDeletionJob() const { return m_dataDeletionJob; }
    template<typename DataDeletionJobT = DataDeletionJob>
    void SetDataDeletionJob(DataDeletionJobT&& value) { m_dataDeletionJobHasBeenSet = true; m_dataDeletionJob = std::forward<DataDeletionJobT>(value); }
    template<typename DataDeletionJobT = DataDeletionJob>
    DescribeDataDeletionJobResult& WithDataDeletionJob(DataDeletionJobT&& value) { SetDataDeletionJob(std::forward<DataDeletionJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDataDeletionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataDeletionJob m_dataDeletionJob;
    bool m_dataDeletionJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
