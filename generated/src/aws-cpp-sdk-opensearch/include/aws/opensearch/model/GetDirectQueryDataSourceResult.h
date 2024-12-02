/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DirectQueryDataSourceType.h>
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
namespace OpenSearchService
{
namespace Model
{
  class GetDirectQueryDataSourceResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetDirectQueryDataSourceResult();
    AWS_OPENSEARCHSERVICE_API GetDirectQueryDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetDirectQueryDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A unique, user-defined label to identify the data source within your
     * OpenSearch Service environment. </p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceName = value; }
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceName = std::move(value); }
    inline void SetDataSourceName(const char* value) { m_dataSourceName.assign(value); }
    inline GetDirectQueryDataSourceResult& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline GetDirectQueryDataSourceResult& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline GetDirectQueryDataSourceResult& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supported Amazon Web Services service that is used as the source for
     * direct queries in OpenSearch Service. </p>
     */
    inline const DirectQueryDataSourceType& GetDataSourceType() const{ return m_dataSourceType; }
    inline void SetDataSourceType(const DirectQueryDataSourceType& value) { m_dataSourceType = value; }
    inline void SetDataSourceType(DirectQueryDataSourceType&& value) { m_dataSourceType = std::move(value); }
    inline GetDirectQueryDataSourceResult& WithDataSourceType(const DirectQueryDataSourceType& value) { SetDataSourceType(value); return *this;}
    inline GetDirectQueryDataSourceResult& WithDataSourceType(DirectQueryDataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description that provides additional context and details about the data
     * source. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDirectQueryDataSourceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDirectQueryDataSourceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDirectQueryDataSourceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of Amazon Resource Names (ARNs) for the OpenSearch collections that
     * are associated with the direct query data source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenSearchArns() const{ return m_openSearchArns; }
    inline void SetOpenSearchArns(const Aws::Vector<Aws::String>& value) { m_openSearchArns = value; }
    inline void SetOpenSearchArns(Aws::Vector<Aws::String>&& value) { m_openSearchArns = std::move(value); }
    inline GetDirectQueryDataSourceResult& WithOpenSearchArns(const Aws::Vector<Aws::String>& value) { SetOpenSearchArns(value); return *this;}
    inline GetDirectQueryDataSourceResult& WithOpenSearchArns(Aws::Vector<Aws::String>&& value) { SetOpenSearchArns(std::move(value)); return *this;}
    inline GetDirectQueryDataSourceResult& AddOpenSearchArns(const Aws::String& value) { m_openSearchArns.push_back(value); return *this; }
    inline GetDirectQueryDataSourceResult& AddOpenSearchArns(Aws::String&& value) { m_openSearchArns.push_back(std::move(value)); return *this; }
    inline GetDirectQueryDataSourceResult& AddOpenSearchArns(const char* value) { m_openSearchArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The unique, system-generated identifier that represents the data source.
     * </p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArn.assign(value); }
    inline GetDirectQueryDataSourceResult& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline GetDirectQueryDataSourceResult& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline GetDirectQueryDataSourceResult& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDirectQueryDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDirectQueryDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDirectQueryDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceName;

    DirectQueryDataSourceType m_dataSourceType;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_openSearchArns;

    Aws::String m_dataSourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
