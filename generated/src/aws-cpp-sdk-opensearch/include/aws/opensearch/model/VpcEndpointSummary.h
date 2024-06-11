/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Summary information for an Amazon OpenSearch Service-managed VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/VpcEndpointSummary">AWS
   * API Reference</a></p>
   */
  class VpcEndpointSummary
  {
  public:
    AWS_OPENSEARCHSERVICE_API VpcEndpointSummary();
    AWS_OPENSEARCHSERVICE_API VpcEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API VpcEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline VpcEndpointSummary& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline VpcEndpointSummary& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline VpcEndpointSummary& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creator of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }
    inline VpcEndpointSummary& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}
    inline VpcEndpointSummary& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}
    inline VpcEndpointSummary& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }
    inline VpcEndpointSummary& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}
    inline VpcEndpointSummary& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}
    inline VpcEndpointSummary& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint.</p>
     */
    inline const VpcEndpointStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VpcEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VpcEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VpcEndpointSummary& WithStatus(const VpcEndpointStatus& value) { SetStatus(value); return *this;}
    inline VpcEndpointSummary& WithStatus(VpcEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    VpcEndpointStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
