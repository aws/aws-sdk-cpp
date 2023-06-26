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
    AWS_PERSONALIZE_API DescribeDatasetImportJobResult();
    AWS_PERSONALIZE_API DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline const DatasetImportJob& GetDatasetImportJob() const{ return m_datasetImportJob; }

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline void SetDatasetImportJob(const DatasetImportJob& value) { m_datasetImportJob = value; }

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline void SetDatasetImportJob(DatasetImportJob&& value) { m_datasetImportJob = std::move(value); }

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJob(const DatasetImportJob& value) { SetDatasetImportJob(value); return *this;}

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJob(DatasetImportJob&& value) { SetDatasetImportJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDatasetImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDatasetImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDatasetImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatasetImportJob m_datasetImportJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
