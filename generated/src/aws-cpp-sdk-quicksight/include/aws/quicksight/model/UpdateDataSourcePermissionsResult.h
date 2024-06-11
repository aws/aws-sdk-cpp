/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateDataSourcePermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDataSourcePermissionsResult();
    AWS_QUICKSIGHT_API UpdateDataSourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDataSourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArn.assign(value); }
    inline UpdateDataSourcePermissionsResult& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline UpdateDataSourcePermissionsResult& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline UpdateDataSourcePermissionsResult& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }
    inline UpdateDataSourcePermissionsResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline UpdateDataSourcePermissionsResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline UpdateDataSourcePermissionsResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDataSourcePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDataSourcePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDataSourcePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateDataSourcePermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceArn;

    Aws::String m_dataSourceId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
