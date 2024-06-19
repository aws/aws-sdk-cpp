/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DataSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DataSourceStatus.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>GetDataSource</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetDataSourceResponse">AWS
   * API Reference</a></p>
   */
  class GetDataSourceResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetDataSourceResult();
    AWS_OPENSEARCHSERVICE_API GetDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of data source.</p>
     */
    inline const DataSourceType& GetDataSourceType() const{ return m_dataSourceType; }
    inline void SetDataSourceType(const DataSourceType& value) { m_dataSourceType = value; }
    inline void SetDataSourceType(DataSourceType&& value) { m_dataSourceType = std::move(value); }
    inline GetDataSourceResult& WithDataSourceType(const DataSourceType& value) { SetDataSourceType(value); return *this;}
    inline GetDataSourceResult& WithDataSourceType(DataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDataSourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDataSourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDataSourceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDataSourceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDataSourceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDataSourceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataSourceStatus& value) { m_status = value; }
    inline void SetStatus(DataSourceStatus&& value) { m_status = std::move(value); }
    inline GetDataSourceResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}
    inline GetDataSourceResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataSourceType m_dataSourceType;

    Aws::String m_name;

    Aws::String m_description;

    DataSourceStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
