/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>GetDomainMaintenanceStatus</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetDomainMaintenanceStatusRequest">AWS
   * API Reference</a></p>
   */
  class GetDomainMaintenanceStatusRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetDomainMaintenanceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainMaintenanceStatus"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline GetDomainMaintenanceStatusRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline GetDomainMaintenanceStatusRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline GetDomainMaintenanceStatusRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline const Aws::String& GetMaintenanceId() const{ return m_maintenanceId; }

    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline bool MaintenanceIdHasBeenSet() const { return m_maintenanceIdHasBeenSet; }

    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline void SetMaintenanceId(const Aws::String& value) { m_maintenanceIdHasBeenSet = true; m_maintenanceId = value; }

    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline void SetMaintenanceId(Aws::String&& value) { m_maintenanceIdHasBeenSet = true; m_maintenanceId = std::move(value); }

    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline void SetMaintenanceId(const char* value) { m_maintenanceIdHasBeenSet = true; m_maintenanceId.assign(value); }

    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusRequest& WithMaintenanceId(const Aws::String& value) { SetMaintenanceId(value); return *this;}

    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusRequest& WithMaintenanceId(Aws::String&& value) { SetMaintenanceId(std::move(value)); return *this;}

    /**
     * <p>The request ID of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusRequest& WithMaintenanceId(const char* value) { SetMaintenanceId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_maintenanceId;
    bool m_maintenanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
