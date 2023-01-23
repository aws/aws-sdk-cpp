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
  class DescribeDataSourcePermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDataSourcePermissionsResult();
    AWS_QUICKSIGHT_API DescribeDataSourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDataSourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline void SetDataSourceArn(const char* value) { m_dataSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}


    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }

    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline DescribeDataSourcePermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline DescribeDataSourcePermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }


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
    inline DescribeDataSourcePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDataSourcePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline DescribeDataSourcePermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_dataSourceArn;

    Aws::String m_dataSourceId;

    Aws::Vector<ResourcePermission> m_permissions;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
