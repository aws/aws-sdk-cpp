/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/ChangeProgressDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by <code>UpgradeDomain</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeDomainResponse">AWS
   * API Reference</a></p>
   */
  class UpgradeDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult() = default;
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline const Aws::String& GetUpgradeId() const { return m_upgradeId; }
    template<typename UpgradeIdT = Aws::String>
    void SetUpgradeId(UpgradeIdT&& value) { m_upgradeIdHasBeenSet = true; m_upgradeId = std::forward<UpgradeIdT>(value); }
    template<typename UpgradeIdT = Aws::String>
    UpgradeDomainResult& WithUpgradeId(UpgradeIdT&& value) { SetUpgradeId(std::forward<UpgradeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpgradeDomainResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
    template<typename TargetVersionT = Aws::String>
    void SetTargetVersion(TargetVersionT&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::forward<TargetVersionT>(value); }
    template<typename TargetVersionT = Aws::String>
    UpgradeDomainResult& WithTargetVersion(TargetVersionT&& value) { SetTargetVersion(std::forward<TargetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, indicates that an upgrade eligibility check was performed.</p>
     */
    inline bool GetPerformCheckOnly() const { return m_performCheckOnly; }
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnlyHasBeenSet = true; m_performCheckOnly = value; }
    inline UpgradeDomainResult& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const { return m_advancedOptions; }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    UpgradeDomainResult& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    template<typename AdvancedOptionsKeyT = Aws::String, typename AdvancedOptionsValueT = Aws::String>
    UpgradeDomainResult& AddAdvancedOptions(AdvancedOptionsKeyT&& key, AdvancedOptionsValueT&& value) {
      m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::forward<AdvancedOptionsKeyT>(key), std::forward<AdvancedOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Container for information about a configuration change happening on a
     * domain.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const { return m_changeProgressDetails; }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    void SetChangeProgressDetails(ChangeProgressDetailsT&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::forward<ChangeProgressDetailsT>(value); }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    UpgradeDomainResult& WithChangeProgressDetails(ChangeProgressDetailsT&& value) { SetChangeProgressDetails(std::forward<ChangeProgressDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpgradeDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_upgradeId;
    bool m_upgradeIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    bool m_performCheckOnly{false};
    bool m_performCheckOnlyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
