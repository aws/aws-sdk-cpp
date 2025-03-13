/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to the <code>UpgradeDomain</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeDomainRequest">AWS
   * API Reference</a></p>
   */
  class UpgradeDomainRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpgradeDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpgradeDomain"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of the OpenSearch Service domain that you want to upgrade.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpgradeDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OpenSearch or Elasticsearch version to which you want to upgrade, in the
     * format Opensearch_X.Y or Elasticsearch_X.Y.</p>
     */
    inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
    template<typename TargetVersionT = Aws::String>
    void SetTargetVersion(TargetVersionT&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::forward<TargetVersionT>(value); }
    template<typename TargetVersionT = Aws::String>
    UpgradeDomainRequest& WithTargetVersion(TargetVersionT&& value) { SetTargetVersion(std::forward<TargetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, indicates that an upgrade eligibility check needs to be performed.
     * Does not actually perform the upgrade.</p>
     */
    inline bool GetPerformCheckOnly() const { return m_performCheckOnly; }
    inline bool PerformCheckOnlyHasBeenSet() const { return m_performCheckOnlyHasBeenSet; }
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnlyHasBeenSet = true; m_performCheckOnly = value; }
    inline UpgradeDomainRequest& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only supports the <code>override_main_response_version</code> parameter and
     * not other advanced options. You can only include this option when upgrading to
     * an OpenSearch version. Specifies whether the domain reports its version as 7.10
     * so that it continues to work with Elasticsearch OSS clients and plugins.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    UpgradeDomainRequest& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    template<typename AdvancedOptionsKeyT = Aws::String, typename AdvancedOptionsValueT = Aws::String>
    UpgradeDomainRequest& AddAdvancedOptions(AdvancedOptionsKeyT&& key, AdvancedOptionsValueT&& value) {
      m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::forward<AdvancedOptionsKeyT>(key), std::forward<AdvancedOptionsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    bool m_performCheckOnly{false};
    bool m_performCheckOnlyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
