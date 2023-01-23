/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   */
  class ResendOperationAuthorizationRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API ResendOperationAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResendOperationAuthorization"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Operation ID. </p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p> Operation ID. </p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p> Operation ID. </p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p> Operation ID. </p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p> Operation ID. </p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p> Operation ID. </p>
     */
    inline ResendOperationAuthorizationRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p> Operation ID. </p>
     */
    inline ResendOperationAuthorizationRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p> Operation ID. </p>
     */
    inline ResendOperationAuthorizationRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
