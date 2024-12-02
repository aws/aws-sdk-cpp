/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ResourceGatewayStatus.h>
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
namespace VPCLattice
{
namespace Model
{
  class DeleteResourceGatewayResult
  {
  public:
    AWS_VPCLATTICE_API DeleteResourceGatewayResult();
    AWS_VPCLATTICE_API DeleteResourceGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API DeleteResourceGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource gateway.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteResourceGatewayResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteResourceGatewayResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteResourceGatewayResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DeleteResourceGatewayResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteResourceGatewayResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteResourceGatewayResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource gateway.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DeleteResourceGatewayResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteResourceGatewayResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteResourceGatewayResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource gateway.</p>
     */
    inline const ResourceGatewayStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceGatewayStatus& value) { m_status = value; }
    inline void SetStatus(ResourceGatewayStatus&& value) { m_status = std::move(value); }
    inline DeleteResourceGatewayResult& WithStatus(const ResourceGatewayStatus& value) { SetStatus(value); return *this;}
    inline DeleteResourceGatewayResult& WithStatus(ResourceGatewayStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteResourceGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteResourceGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteResourceGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    ResourceGatewayStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
