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
    AWS_QUICKSIGHT_API RestoreAnalysisResult() = default;
    AWS_QUICKSIGHT_API RestoreAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API RestoreAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline RestoreAnalysisResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis that you're restoring.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RestoreAnalysisResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the analysis that you're restoring. </p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    RestoreAnalysisResult& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestoreAnalysisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of folder arns thatthe analysis failed to be restored to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRestorationFailedFolderArns() const { return m_restorationFailedFolderArns; }
    template<typename RestorationFailedFolderArnsT = Aws::Vector<Aws::String>>
    void SetRestorationFailedFolderArns(RestorationFailedFolderArnsT&& value) { m_restorationFailedFolderArnsHasBeenSet = true; m_restorationFailedFolderArns = std::forward<RestorationFailedFolderArnsT>(value); }
    template<typename RestorationFailedFolderArnsT = Aws::Vector<Aws::String>>
    RestoreAnalysisResult& WithRestorationFailedFolderArns(RestorationFailedFolderArnsT&& value) { SetRestorationFailedFolderArns(std::forward<RestorationFailedFolderArnsT>(value)); return *this;}
    template<typename RestorationFailedFolderArnsT = Aws::String>
    RestoreAnalysisResult& AddRestorationFailedFolderArns(RestorationFailedFolderArnsT&& value) { m_restorationFailedFolderArnsHasBeenSet = true; m_restorationFailedFolderArns.emplace_back(std::forward<RestorationFailedFolderArnsT>(value)); return *this; }
    ///@}
  private:

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_restorationFailedFolderArns;
    bool m_restorationFailedFolderArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
