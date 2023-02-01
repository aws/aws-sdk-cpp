/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class GetOperationRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API GetOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOperation"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline GetOperationRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline GetOperationRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline GetOperationRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
