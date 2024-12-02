/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{
  class AddDirectQueryDataSourceResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API AddDirectQueryDataSourceResult();
    AWS_OPENSEARCHSERVICE_API AddDirectQueryDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AddDirectQueryDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique, system-generated identifier that represents the data source.
     * </p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArn.assign(value); }
    inline AddDirectQueryDataSourceResult& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline AddDirectQueryDataSourceResult& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline AddDirectQueryDataSourceResult& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddDirectQueryDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddDirectQueryDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddDirectQueryDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
