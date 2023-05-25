/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/DeleteVpcEndpointDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class DeleteVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API DeleteVpcEndpointResult();
    AWS_OPENSEARCHSERVERLESS_API DeleteVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API DeleteVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the deleted endpoint.</p>
     */
    inline const DeleteVpcEndpointDetail& GetDeleteVpcEndpointDetail() const{ return m_deleteVpcEndpointDetail; }

    /**
     * <p>Details about the deleted endpoint.</p>
     */
    inline void SetDeleteVpcEndpointDetail(const DeleteVpcEndpointDetail& value) { m_deleteVpcEndpointDetail = value; }

    /**
     * <p>Details about the deleted endpoint.</p>
     */
    inline void SetDeleteVpcEndpointDetail(DeleteVpcEndpointDetail&& value) { m_deleteVpcEndpointDetail = std::move(value); }

    /**
     * <p>Details about the deleted endpoint.</p>
     */
    inline DeleteVpcEndpointResult& WithDeleteVpcEndpointDetail(const DeleteVpcEndpointDetail& value) { SetDeleteVpcEndpointDetail(value); return *this;}

    /**
     * <p>Details about the deleted endpoint.</p>
     */
    inline DeleteVpcEndpointResult& WithDeleteVpcEndpointDetail(DeleteVpcEndpointDetail&& value) { SetDeleteVpcEndpointDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteVpcEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteVpcEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteVpcEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeleteVpcEndpointDetail m_deleteVpcEndpointDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
