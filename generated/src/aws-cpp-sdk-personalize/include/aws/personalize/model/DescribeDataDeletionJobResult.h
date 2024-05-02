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
    AWS_PERSONALIZE_API DescribeDataDeletionJobResult();
    AWS_PERSONALIZE_API DescribeDataDeletionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDataDeletionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the data deletion job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>PENDING</p> </li> <li>
     * <p>IN_PROGRESS</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>FAILED</p> </li>
     * </ul>
     */
    inline const DataDeletionJob& GetDataDeletionJob() const{ return m_dataDeletionJob; }

    /**
     * <p>Information about the data deletion job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>PENDING</p> </li> <li>
     * <p>IN_PROGRESS</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>FAILED</p> </li>
     * </ul>
     */
    inline void SetDataDeletionJob(const DataDeletionJob& value) { m_dataDeletionJob = value; }

    /**
     * <p>Information about the data deletion job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>PENDING</p> </li> <li>
     * <p>IN_PROGRESS</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>FAILED</p> </li>
     * </ul>
     */
    inline void SetDataDeletionJob(DataDeletionJob&& value) { m_dataDeletionJob = std::move(value); }

    /**
     * <p>Information about the data deletion job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>PENDING</p> </li> <li>
     * <p>IN_PROGRESS</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>FAILED</p> </li>
     * </ul>
     */
    inline DescribeDataDeletionJobResult& WithDataDeletionJob(const DataDeletionJob& value) { SetDataDeletionJob(value); return *this;}

    /**
     * <p>Information about the data deletion job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>PENDING</p> </li> <li>
     * <p>IN_PROGRESS</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>FAILED</p> </li>
     * </ul>
     */
    inline DescribeDataDeletionJobResult& WithDataDeletionJob(DataDeletionJob&& value) { SetDataDeletionJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDataDeletionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDataDeletionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDataDeletionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DataDeletionJob m_dataDeletionJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
