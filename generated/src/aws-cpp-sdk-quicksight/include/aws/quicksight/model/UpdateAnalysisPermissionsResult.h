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
  class UpdateAnalysisPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateAnalysisPermissionsResult();
    AWS_QUICKSIGHT_API UpdateAnalysisPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateAnalysisPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis that you updated.</p>
     */
    inline const Aws::String& GetAnalysisArn() const{ return m_analysisArn; }
    inline void SetAnalysisArn(const Aws::String& value) { m_analysisArn = value; }
    inline void SetAnalysisArn(Aws::String&& value) { m_analysisArn = std::move(value); }
    inline void SetAnalysisArn(const char* value) { m_analysisArn.assign(value); }
    inline UpdateAnalysisPermissionsResult& WithAnalysisArn(const Aws::String& value) { SetAnalysisArn(value); return *this;}
    inline UpdateAnalysisPermissionsResult& WithAnalysisArn(Aws::String&& value) { SetAnalysisArn(std::move(value)); return *this;}
    inline UpdateAnalysisPermissionsResult& WithAnalysisArn(const char* value) { SetAnalysisArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the analysis that you updated permissions for.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline UpdateAnalysisPermissionsResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline UpdateAnalysisPermissionsResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline UpdateAnalysisPermissionsResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }
    inline UpdateAnalysisPermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}
    inline UpdateAnalysisPermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline UpdateAnalysisPermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }
    inline UpdateAnalysisPermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAnalysisPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAnalysisPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAnalysisPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateAnalysisPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisArn;

    Aws::String m_analysisId;

    Aws::Vector<ResourcePermission> m_permissions;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
