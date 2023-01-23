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


    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }

    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis whose permissions you're describing.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline const Aws::String& GetAnalysisArn() const{ return m_analysisArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline void SetAnalysisArn(const Aws::String& value) { m_analysisArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline void SetAnalysisArn(Aws::String&& value) { m_analysisArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline void SetAnalysisArn(const char* value) { m_analysisArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithAnalysisArn(const Aws::String& value) { SetAnalysisArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithAnalysisArn(Aws::String&& value) { SetAnalysisArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis whose permissions you're
     * describing.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithAnalysisArn(const char* value) { SetAnalysisArn(value); return *this;}


    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline DescribeAnalysisPermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis.</p>
     */
    inline DescribeAnalysisPermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
