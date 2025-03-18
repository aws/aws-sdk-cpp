/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DryRunProgressStatus.h>
#include <aws/opensearch/model/DomainStatus.h>
#include <aws/opensearch/model/DryRunResults.h>
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
  class DescribeDryRunProgressResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDryRunProgressResult() = default;
    AWS_OPENSEARCHSERVICE_API DescribeDryRunProgressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDryRunProgressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the dry run, including any validation errors.</p>
     */
    inline const DryRunProgressStatus& GetDryRunProgressStatus() const { return m_dryRunProgressStatus; }
    template<typename DryRunProgressStatusT = DryRunProgressStatus>
    void SetDryRunProgressStatus(DryRunProgressStatusT&& value) { m_dryRunProgressStatusHasBeenSet = true; m_dryRunProgressStatus = std::forward<DryRunProgressStatusT>(value); }
    template<typename DryRunProgressStatusT = DryRunProgressStatus>
    DescribeDryRunProgressResult& WithDryRunProgressStatus(DryRunProgressStatusT&& value) { SetDryRunProgressStatus(std::forward<DryRunProgressStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the changes you're planning to make on the domain.</p>
     */
    inline const DomainStatus& GetDryRunConfig() const { return m_dryRunConfig; }
    template<typename DryRunConfigT = DomainStatus>
    void SetDryRunConfig(DryRunConfigT&& value) { m_dryRunConfigHasBeenSet = true; m_dryRunConfig = std::forward<DryRunConfigT>(value); }
    template<typename DryRunConfigT = DomainStatus>
    DescribeDryRunProgressResult& WithDryRunConfig(DryRunConfigT&& value) { SetDryRunConfig(std::forward<DryRunConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the dry run. </p>
     */
    inline const DryRunResults& GetDryRunResults() const { return m_dryRunResults; }
    template<typename DryRunResultsT = DryRunResults>
    void SetDryRunResults(DryRunResultsT&& value) { m_dryRunResultsHasBeenSet = true; m_dryRunResults = std::forward<DryRunResultsT>(value); }
    template<typename DryRunResultsT = DryRunResults>
    DescribeDryRunProgressResult& WithDryRunResults(DryRunResultsT&& value) { SetDryRunResults(std::forward<DryRunResultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDryRunProgressResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DryRunProgressStatus m_dryRunProgressStatus;
    bool m_dryRunProgressStatusHasBeenSet = false;

    DomainStatus m_dryRunConfig;
    bool m_dryRunConfigHasBeenSet = false;

    DryRunResults m_dryRunResults;
    bool m_dryRunResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
