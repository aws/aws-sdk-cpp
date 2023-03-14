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
    AWS_OPENSEARCHSERVICE_API DescribeDryRunProgressResult();
    AWS_OPENSEARCHSERVICE_API DescribeDryRunProgressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDryRunProgressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the dry run, including any validation errors.</p>
     */
    inline const DryRunProgressStatus& GetDryRunProgressStatus() const{ return m_dryRunProgressStatus; }

    /**
     * <p>The current status of the dry run, including any validation errors.</p>
     */
    inline void SetDryRunProgressStatus(const DryRunProgressStatus& value) { m_dryRunProgressStatus = value; }

    /**
     * <p>The current status of the dry run, including any validation errors.</p>
     */
    inline void SetDryRunProgressStatus(DryRunProgressStatus&& value) { m_dryRunProgressStatus = std::move(value); }

    /**
     * <p>The current status of the dry run, including any validation errors.</p>
     */
    inline DescribeDryRunProgressResult& WithDryRunProgressStatus(const DryRunProgressStatus& value) { SetDryRunProgressStatus(value); return *this;}

    /**
     * <p>The current status of the dry run, including any validation errors.</p>
     */
    inline DescribeDryRunProgressResult& WithDryRunProgressStatus(DryRunProgressStatus&& value) { SetDryRunProgressStatus(std::move(value)); return *this;}


    /**
     * <p>Details about the changes you're planning to make on the domain.</p>
     */
    inline const DomainStatus& GetDryRunConfig() const{ return m_dryRunConfig; }

    /**
     * <p>Details about the changes you're planning to make on the domain.</p>
     */
    inline void SetDryRunConfig(const DomainStatus& value) { m_dryRunConfig = value; }

    /**
     * <p>Details about the changes you're planning to make on the domain.</p>
     */
    inline void SetDryRunConfig(DomainStatus&& value) { m_dryRunConfig = std::move(value); }

    /**
     * <p>Details about the changes you're planning to make on the domain.</p>
     */
    inline DescribeDryRunProgressResult& WithDryRunConfig(const DomainStatus& value) { SetDryRunConfig(value); return *this;}

    /**
     * <p>Details about the changes you're planning to make on the domain.</p>
     */
    inline DescribeDryRunProgressResult& WithDryRunConfig(DomainStatus&& value) { SetDryRunConfig(std::move(value)); return *this;}


    /**
     * <p>The results of the dry run. </p>
     */
    inline const DryRunResults& GetDryRunResults() const{ return m_dryRunResults; }

    /**
     * <p>The results of the dry run. </p>
     */
    inline void SetDryRunResults(const DryRunResults& value) { m_dryRunResults = value; }

    /**
     * <p>The results of the dry run. </p>
     */
    inline void SetDryRunResults(DryRunResults&& value) { m_dryRunResults = std::move(value); }

    /**
     * <p>The results of the dry run. </p>
     */
    inline DescribeDryRunProgressResult& WithDryRunResults(const DryRunResults& value) { SetDryRunResults(value); return *this;}

    /**
     * <p>The results of the dry run. </p>
     */
    inline DescribeDryRunProgressResult& WithDryRunResults(DryRunResults&& value) { SetDryRunResults(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDryRunProgressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDryRunProgressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDryRunProgressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DryRunProgressStatus m_dryRunProgressStatus;

    DomainStatus m_dryRunConfig;

    DryRunResults m_dryRunResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
