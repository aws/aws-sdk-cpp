/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DeleteIntegrationRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIntegration"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline const Aws::String& GetIntegrationIdentifier() const{ return m_integrationIdentifier; }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline bool IntegrationIdentifierHasBeenSet() const { return m_integrationIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline void SetIntegrationIdentifier(const Aws::String& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = value; }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline void SetIntegrationIdentifier(Aws::String&& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline void SetIntegrationIdentifier(const char* value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline DeleteIntegrationRequest& WithIntegrationIdentifier(const Aws::String& value) { SetIntegrationIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline DeleteIntegrationRequest& WithIntegrationIdentifier(Aws::String&& value) { SetIntegrationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline DeleteIntegrationRequest& WithIntegrationIdentifier(const char* value) { SetIntegrationIdentifier(value); return *this;}

  private:

    Aws::String m_integrationIdentifier;
    bool m_integrationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
