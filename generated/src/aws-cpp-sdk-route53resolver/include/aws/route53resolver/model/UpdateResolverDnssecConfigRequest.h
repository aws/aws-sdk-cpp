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
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolverDnssecConfig"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline UpdateResolverDnssecConfigRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline UpdateResolverDnssecConfigRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're updating the DNSSEC
     * validation status for.</p>
     */
    inline UpdateResolverDnssecConfigRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The new value that you are specifying for DNSSEC validation for the VPC. The
     * value can be <code>ENABLE</code> or <code>DISABLE</code>. Be aware that it can
     * take time for a validation status change to be completed.</p>
     */
    inline const Validation& GetValidation() const{ return m_validation; }

    /**
     * <p>The new value that you are specifying for DNSSEC validation for the VPC. The
     * value can be <code>ENABLE</code> or <code>DISABLE</code>. Be aware that it can
     * take time for a validation status change to be completed.</p>
     */
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }

    /**
     * <p>The new value that you are specifying for DNSSEC validation for the VPC. The
     * value can be <code>ENABLE</code> or <code>DISABLE</code>. Be aware that it can
     * take time for a validation status change to be completed.</p>
     */
    inline void SetValidation(const Validation& value) { m_validationHasBeenSet = true; m_validation = value; }

    /**
     * <p>The new value that you are specifying for DNSSEC validation for the VPC. The
     * value can be <code>ENABLE</code> or <code>DISABLE</code>. Be aware that it can
     * take time for a validation status change to be completed.</p>
     */
    inline void SetValidation(Validation&& value) { m_validationHasBeenSet = true; m_validation = std::move(value); }

    /**
     * <p>The new value that you are specifying for DNSSEC validation for the VPC. The
     * value can be <code>ENABLE</code> or <code>DISABLE</code>. Be aware that it can
     * take time for a validation status change to be completed.</p>
     */
    inline UpdateResolverDnssecConfigRequest& WithValidation(const Validation& value) { SetValidation(value); return *this;}

    /**
     * <p>The new value that you are specifying for DNSSEC validation for the VPC. The
     * value can be <code>ENABLE</code> or <code>DISABLE</code>. Be aware that it can
     * take time for a validation status change to be completed.</p>
     */
    inline UpdateResolverDnssecConfigRequest& WithValidation(Validation&& value) { SetValidation(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Validation m_validation;
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
