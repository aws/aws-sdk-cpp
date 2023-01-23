/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/VPCDerivedInfo.h>
#include <aws/opensearch/model/VpcEndpointStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The connection endpoint for connecting to an Amazon OpenSearch Service domain
   * through a proxy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/VpcEndpoint">AWS
   * API Reference</a></p>
   */
  class VpcEndpoint
  {
  public:
    AWS_OPENSEARCHSERVICE_API VpcEndpoint();
    AWS_OPENSEARCHSERVICE_API VpcEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API VpcEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The creator of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline VpcEndpoint& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline VpcEndpoint& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline VpcEndpoint& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}


    /**
     * <p>Options to specify the subnets and security groups for an Amazon OpenSearch
     * Service VPC endpoint.</p>
     */
    inline const VPCDerivedInfo& GetVpcOptions() const{ return m_vpcOptions; }

    /**
     * <p>Options to specify the subnets and security groups for an Amazon OpenSearch
     * Service VPC endpoint.</p>
     */
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }

    /**
     * <p>Options to specify the subnets and security groups for an Amazon OpenSearch
     * Service VPC endpoint.</p>
     */
    inline void SetVpcOptions(const VPCDerivedInfo& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = value; }

    /**
     * <p>Options to specify the subnets and security groups for an Amazon OpenSearch
     * Service VPC endpoint.</p>
     */
    inline void SetVpcOptions(VPCDerivedInfo&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::move(value); }

    /**
     * <p>Options to specify the subnets and security groups for an Amazon OpenSearch
     * Service VPC endpoint.</p>
     */
    inline VpcEndpoint& WithVpcOptions(const VPCDerivedInfo& value) { SetVpcOptions(value); return *this;}

    /**
     * <p>Options to specify the subnets and security groups for an Amazon OpenSearch
     * Service VPC endpoint.</p>
     */
    inline VpcEndpoint& WithVpcOptions(VPCDerivedInfo&& value) { SetVpcOptions(std::move(value)); return *this;}


    /**
     * <p>The current status of the endpoint.</p>
     */
    inline const VpcEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline void SetStatus(const VpcEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline void SetStatus(VpcEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline VpcEndpoint& WithStatus(const VpcEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline VpcEndpoint& WithStatus(VpcEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline VpcEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline VpcEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The connection endpoint ID for connecting to the domain.</p>
     */
    inline VpcEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    VPCDerivedInfo m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;

    VpcEndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
