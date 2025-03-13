/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/Validation.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateResolverDnssecConfigRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolverDnssecConfig"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    UpdateResolverDnssecConfigRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value that you are specifying for DNSSEC validation for the VPC. The
     * value can be <code>ENABLE</code> or <code>DISABLE</code>. Be aware that it can
     * take time for a validation status change to be completed.</p>
     */
    inline Validation GetValidation() const { return m_validation; }
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
    inline void SetValidation(Validation value) { m_validationHasBeenSet = true; m_validation = value; }
    inline UpdateResolverDnssecConfigRequest& WithValidation(Validation value) { SetValidation(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Validation m_validation{Validation::NOT_SET};
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
