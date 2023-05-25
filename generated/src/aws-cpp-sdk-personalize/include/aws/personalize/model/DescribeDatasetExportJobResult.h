/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DatasetExportJob.h>
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
  class DescribeDatasetExportJobResult
  {
  public:
    AWS_PERSONALIZE_API DescribeDatasetExportJobResult();
    AWS_PERSONALIZE_API DescribeDatasetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDatasetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the dataset export job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline const DatasetExportJob& GetDatasetExportJob() const{ return m_datasetExportJob; }

    /**
     * <p>Information about the dataset export job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline void SetDatasetExportJob(const DatasetExportJob& value) { m_datasetExportJob = value; }

    /**
     * <p>Information about the dataset export job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline void SetDatasetExportJob(DatasetExportJob&& value) { m_datasetExportJob = std::move(value); }

    /**
     * <p>Information about the dataset export job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline DescribeDatasetExportJobResult& WithDatasetExportJob(const DatasetExportJob& value) { SetDatasetExportJob(value); return *this;}

    /**
     * <p>Information about the dataset export job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline DescribeDatasetExportJobResult& WithDatasetExportJob(DatasetExportJob&& value) { SetDatasetExportJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDatasetExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDatasetExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDatasetExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatasetExportJob m_datasetExportJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
