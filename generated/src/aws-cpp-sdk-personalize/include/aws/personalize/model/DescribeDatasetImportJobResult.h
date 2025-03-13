/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DatasetImportJob.h>
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
  class DescribeDatasetImportJobResult
  {
  public:
    AWS_PERSONALIZE_API DescribeDatasetImportJobResult() = default;
    AWS_PERSONALIZE_API DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline const DatasetImportJob& GetDatasetImportJob() const { return m_datasetImportJob; }
    template<typename DatasetImportJobT = DatasetImportJob>
    void SetDatasetImportJob(DatasetImportJobT&& value) { m_datasetImportJobHasBeenSet = true; m_datasetImportJob = std::forward<DatasetImportJobT>(value); }
    template<typename DatasetImportJobT = DatasetImportJob>
    DescribeDatasetImportJobResult& WithDatasetImportJob(DatasetImportJobT&& value) { SetDatasetImportJob(std::forward<DatasetImportJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatasetImportJob m_datasetImportJob;
    bool m_datasetImportJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
