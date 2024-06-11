﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class DescribeReportCreationResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API DescribeReportCreationResult();
    AWS_RESOURCEGROUPSTAGGINGAPI_API DescribeReportCreationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API DescribeReportCreationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code> - Report creation is in
     * progress.</p> </li> <li> <p> <code>SUCCEEDED</code> - Report creation is
     * complete. You can open the report from the Amazon S3 bucket that you specified
     * when you ran <code>StartReportCreation</code>.</p> </li> <li> <p>
     * <code>FAILED</code> - Report creation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> <li> <p> <code>NO REPORT</code> - No report was generated
     * in the last 90 days.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeReportCreationResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeReportCreationResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeReportCreationResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon S3 bucket where the report was stored on creation.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }
    inline void SetS3Location(const Aws::String& value) { m_s3Location = value; }
    inline void SetS3Location(Aws::String&& value) { m_s3Location = std::move(value); }
    inline void SetS3Location(const char* value) { m_s3Location.assign(value); }
    inline DescribeReportCreationResult& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}
    inline DescribeReportCreationResult& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}
    inline DescribeReportCreationResult& WithS3Location(const char* value) { SetS3Location(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeReportCreationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeReportCreationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeReportCreationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReportCreationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReportCreationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReportCreationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_status;

    Aws::String m_s3Location;

    Aws::String m_errorMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
