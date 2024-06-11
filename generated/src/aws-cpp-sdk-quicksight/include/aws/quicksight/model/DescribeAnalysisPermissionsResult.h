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
    AWS_QUICKSIGHT_API DescribeAnalysisPermissionsResult();
    AWS_QUICKSIGHT_API DescribeAnalysisPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAnalysisPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline DescribeAnalysisPermissionsResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline DescribeAnalysisPermissionsResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline DescribeAnalysisPermissionsResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline const Aws::String& GetAnalysisArn() const{ return m_analysisArn; }
    inline void SetAnalysisArn(const Aws::String& value) { m_analysisArn = value; }
    inline void SetAnalysisArn(Aws::String&& value) { m_analysisArn = std::move(value); }
    inline void SetAnalysisArn(const char* value) { m_analysisArn.assign(value); }
    inline DescribeAnalysisPermissionsResult& WithAnalysisArn(const Aws::String& value) { SetAnalysisArn(value); return *this;}
    inline DescribeAnalysisPermissionsResult& WithAnalysisArn(Aws::String&& value) { SetAnalysisArn(std::move(value)); return *this;}
    inline DescribeAnalysisPermissionsResult& WithAnalysisArn(const char* value) { SetAnalysisArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }
    inline DescribeAnalysisPermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}
    inline DescribeAnalysisPermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline DescribeAnalysisPermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }
    inline DescribeAnalysisPermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DescribeAnalysisPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAnalysisPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAnalysisPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAnalysisPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisId;

    Aws::String m_analysisArn;

    Aws::Vector<ResourcePermission> m_permissions;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
