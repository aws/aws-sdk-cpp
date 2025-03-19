/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainConfig.h>
#include <aws/opensearch/model/DryRunResults.h>
#include <aws/opensearch/model/DryRunProgressStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The results of an <code>UpdateDomain</code> request. Contains the status of
   * the domain being updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateDomainConfigResponse">AWS
   * API Reference</a></p>
   */
  class UpdateDomainConfigResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigResult() = default;
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the updated domain.</p>
     */
    inline const DomainConfig& GetDomainConfig() const { return m_domainConfig; }
    template<typename DomainConfigT = DomainConfig>
    void SetDomainConfig(DomainConfigT&& value) { m_domainConfigHasBeenSet = true; m_domainConfig = std::forward<DomainConfigT>(value); }
    template<typename DomainConfigT = DomainConfig>
    UpdateDomainConfigResult& WithDomainConfig(DomainConfigT&& value) { SetDomainConfig(std::forward<DomainConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Results of the dry run performed in the update domain request.</p>
     */
    inline const DryRunResults& GetDryRunResults() const { return m_dryRunResults; }
    template<typename DryRunResultsT = DryRunResults>
    void SetDryRunResults(DryRunResultsT&& value) { m_dryRunResultsHasBeenSet = true; m_dryRunResults = std::forward<DryRunResultsT>(value); }
    template<typename DryRunResultsT = DryRunResults>
    UpdateDomainConfigResult& WithDryRunResults(DryRunResultsT&& value) { SetDryRunResults(std::forward<DryRunResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dry run being performed on the domain, if any.</p>
     */
    inline const DryRunProgressStatus& GetDryRunProgressStatus() const { return m_dryRunProgressStatus; }
    template<typename DryRunProgressStatusT = DryRunProgressStatus>
    void SetDryRunProgressStatus(DryRunProgressStatusT&& value) { m_dryRunProgressStatusHasBeenSet = true; m_dryRunProgressStatus = std::forward<DryRunProgressStatusT>(value); }
    template<typename DryRunProgressStatusT = DryRunProgressStatus>
    UpdateDomainConfigResult& WithDryRunProgressStatus(DryRunProgressStatusT&& value) { SetDryRunProgressStatus(std::forward<DryRunProgressStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDomainConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainConfig m_domainConfig;
    bool m_domainConfigHasBeenSet = false;

    DryRunResults m_dryRunResults;
    bool m_dryRunResultsHasBeenSet = false;

    DryRunProgressStatus m_dryRunProgressStatus;
    bool m_dryRunProgressStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
