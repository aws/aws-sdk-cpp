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
   */
  class DescribeDryRunProgressRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDryRunProgressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDryRunProgress"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DescribeDryRunProgressRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the dry run.</p>
     */
    inline const Aws::String& GetDryRunId() const { return m_dryRunId; }
    inline bool DryRunIdHasBeenSet() const { return m_dryRunIdHasBeenSet; }
    template<typename DryRunIdT = Aws::String>
    void SetDryRunId(DryRunIdT&& value) { m_dryRunIdHasBeenSet = true; m_dryRunId = std::forward<DryRunIdT>(value); }
    template<typename DryRunIdT = Aws::String>
    DescribeDryRunProgressRequest& WithDryRunId(DryRunIdT&& value) { SetDryRunId(std::forward<DryRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to include the configuration of the dry run in the response. The
     * configuration specifies the updates that you're planning to make on the
     * domain.</p>
     */
    inline bool GetLoadDryRunConfig() const { return m_loadDryRunConfig; }
    inline bool LoadDryRunConfigHasBeenSet() const { return m_loadDryRunConfigHasBeenSet; }
    inline void SetLoadDryRunConfig(bool value) { m_loadDryRunConfigHasBeenSet = true; m_loadDryRunConfig = value; }
    inline DescribeDryRunProgressRequest& WithLoadDryRunConfig(bool value) { SetLoadDryRunConfig(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_dryRunId;
    bool m_dryRunIdHasBeenSet = false;

    bool m_loadDryRunConfig{false};
    bool m_loadDryRunConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
