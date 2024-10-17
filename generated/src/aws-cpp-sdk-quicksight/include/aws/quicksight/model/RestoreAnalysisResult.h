/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class RestoreAnalysisResult
  {
  public:
    AWS_QUICKSIGHT_API RestoreAnalysisResult();
    AWS_QUICKSIGHT_API RestoreAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API RestoreAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline RestoreAnalysisResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis that you're restoring.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline RestoreAnalysisResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RestoreAnalysisResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RestoreAnalysisResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the analysis that you're restoring. </p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline RestoreAnalysisResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline RestoreAnalysisResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline RestoreAnalysisResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RestoreAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RestoreAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RestoreAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of folder arns thatthe analysis failed to be restored to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRestorationFailedFolderArns() const{ return m_restorationFailedFolderArns; }
    inline void SetRestorationFailedFolderArns(const Aws::Vector<Aws::String>& value) { m_restorationFailedFolderArns = value; }
    inline void SetRestorationFailedFolderArns(Aws::Vector<Aws::String>&& value) { m_restorationFailedFolderArns = std::move(value); }
    inline RestoreAnalysisResult& WithRestorationFailedFolderArns(const Aws::Vector<Aws::String>& value) { SetRestorationFailedFolderArns(value); return *this;}
    inline RestoreAnalysisResult& WithRestorationFailedFolderArns(Aws::Vector<Aws::String>&& value) { SetRestorationFailedFolderArns(std::move(value)); return *this;}
    inline RestoreAnalysisResult& AddRestorationFailedFolderArns(const Aws::String& value) { m_restorationFailedFolderArns.push_back(value); return *this; }
    inline RestoreAnalysisResult& AddRestorationFailedFolderArns(Aws::String&& value) { m_restorationFailedFolderArns.push_back(std::move(value)); return *this; }
    inline RestoreAnalysisResult& AddRestorationFailedFolderArns(const char* value) { m_restorationFailedFolderArns.push_back(value); return *this; }
    ///@}
  private:

    int m_status;

    Aws::String m_arn;

    Aws::String m_analysisId;

    Aws::String m_requestId;

    Aws::Vector<Aws::String> m_restorationFailedFolderArns;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
