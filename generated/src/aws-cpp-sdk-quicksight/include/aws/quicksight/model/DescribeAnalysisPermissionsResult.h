/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
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
  class DescribeAnalysisPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAnalysisPermissionsResult() = default;
    AWS_QUICKSIGHT_API DescribeAnalysisPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAnalysisPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    DescribeAnalysisPermissionsResult& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline const Aws::String& GetAnalysisArn() const { return m_analysisArn; }
    template<typename AnalysisArnT = Aws::String>
    void SetAnalysisArn(AnalysisArnT&& value) { m_analysisArnHasBeenSet = true; m_analysisArn = std::forward<AnalysisArnT>(value); }
    template<typename AnalysisArnT = Aws::String>
    DescribeAnalysisPermissionsResult& WithAnalysisArn(AnalysisArnT&& value) { SetAnalysisArn(std::forward<AnalysisArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    DescribeAnalysisPermissionsResult& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    DescribeAnalysisPermissionsResult& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAnalysisPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAnalysisPermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_analysisArn;
    bool m_analysisArnHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
