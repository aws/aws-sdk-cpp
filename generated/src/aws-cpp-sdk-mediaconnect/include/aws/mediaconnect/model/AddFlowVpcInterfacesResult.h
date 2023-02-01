/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/VpcInterface.h>
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
namespace MediaConnect
{
namespace Model
{
  class AddFlowVpcInterfacesResult
  {
  public:
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesResult();
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that these VPC interfaces were added to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that these VPC interfaces were added to.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that these VPC interfaces were added to.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that these VPC interfaces were added to.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that these VPC interfaces were added to.
     */
    inline AddFlowVpcInterfacesResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that these VPC interfaces were added to.
     */
    inline AddFlowVpcInterfacesResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that these VPC interfaces were added to.
     */
    inline AddFlowVpcInterfacesResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The details of the newly added VPC interfaces.
     */
    inline const Aws::Vector<VpcInterface>& GetVpcInterfaces() const{ return m_vpcInterfaces; }

    /**
     * The details of the newly added VPC interfaces.
     */
    inline void SetVpcInterfaces(const Aws::Vector<VpcInterface>& value) { m_vpcInterfaces = value; }

    /**
     * The details of the newly added VPC interfaces.
     */
    inline void SetVpcInterfaces(Aws::Vector<VpcInterface>&& value) { m_vpcInterfaces = std::move(value); }

    /**
     * The details of the newly added VPC interfaces.
     */
    inline AddFlowVpcInterfacesResult& WithVpcInterfaces(const Aws::Vector<VpcInterface>& value) { SetVpcInterfaces(value); return *this;}

    /**
     * The details of the newly added VPC interfaces.
     */
    inline AddFlowVpcInterfacesResult& WithVpcInterfaces(Aws::Vector<VpcInterface>&& value) { SetVpcInterfaces(std::move(value)); return *this;}

    /**
     * The details of the newly added VPC interfaces.
     */
    inline AddFlowVpcInterfacesResult& AddVpcInterfaces(const VpcInterface& value) { m_vpcInterfaces.push_back(value); return *this; }

    /**
     * The details of the newly added VPC interfaces.
     */
    inline AddFlowVpcInterfacesResult& AddVpcInterfaces(VpcInterface&& value) { m_vpcInterfaces.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_flowArn;

    Aws::Vector<VpcInterface> m_vpcInterfaces;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
