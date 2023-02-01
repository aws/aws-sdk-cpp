/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CreateVpcEndpointDetail.h>
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
  class CreateVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointResult();
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the created interface VPC endpoint.</p>
     */
    inline const CreateVpcEndpointDetail& GetCreateVpcEndpointDetail() const{ return m_createVpcEndpointDetail; }

    /**
     * <p>Details about the created interface VPC endpoint.</p>
     */
    inline void SetCreateVpcEndpointDetail(const CreateVpcEndpointDetail& value) { m_createVpcEndpointDetail = value; }

    /**
     * <p>Details about the created interface VPC endpoint.</p>
     */
    inline void SetCreateVpcEndpointDetail(CreateVpcEndpointDetail&& value) { m_createVpcEndpointDetail = std::move(value); }

    /**
     * <p>Details about the created interface VPC endpoint.</p>
     */
    inline CreateVpcEndpointResult& WithCreateVpcEndpointDetail(const CreateVpcEndpointDetail& value) { SetCreateVpcEndpointDetail(value); return *this;}

    /**
     * <p>Details about the created interface VPC endpoint.</p>
     */
    inline CreateVpcEndpointResult& WithCreateVpcEndpointDetail(CreateVpcEndpointDetail&& value) { SetCreateVpcEndpointDetail(std::move(value)); return *this;}

  private:

    CreateVpcEndpointDetail m_createVpcEndpointDetail;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
