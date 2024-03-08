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
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class CancelDomainConfigChangeRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API CancelDomainConfigChangeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelDomainConfigChange"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline CancelDomainConfigChangeRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline CancelDomainConfigChangeRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline CancelDomainConfigChangeRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>When set to <code>True</code>, returns the list of change IDs and properties
     * that will be cancelled without actually cancelling the change.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>When set to <code>True</code>, returns the list of change IDs and properties
     * that will be cancelled without actually cancelling the change.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>When set to <code>True</code>, returns the list of change IDs and properties
     * that will be cancelled without actually cancelling the change.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>When set to <code>True</code>, returns the list of change IDs and properties
     * that will be cancelled without actually cancelling the change.</p>
     */
    inline CancelDomainConfigChangeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
