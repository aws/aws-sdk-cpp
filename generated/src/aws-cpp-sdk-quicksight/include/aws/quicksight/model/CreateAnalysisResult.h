﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateAnalysisResult
  {
  public:
    AWS_QUICKSIGHT_API CreateAnalysisResult();
    AWS_QUICKSIGHT_API CreateAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the analysis.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateAnalysisResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateAnalysisResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateAnalysisResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline CreateAnalysisResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline CreateAnalysisResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline CreateAnalysisResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the creation of the analysis. </p>
     */
    inline const ResourceStatus& GetCreationStatus() const{ return m_creationStatus; }
    inline void SetCreationStatus(const ResourceStatus& value) { m_creationStatus = value; }
    inline void SetCreationStatus(ResourceStatus&& value) { m_creationStatus = std::move(value); }
    inline CreateAnalysisResult& WithCreationStatus(const ResourceStatus& value) { SetCreationStatus(value); return *this;}
    inline CreateAnalysisResult& WithCreationStatus(ResourceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline CreateAnalysisResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_analysisId;

    ResourceStatus m_creationStatus;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
