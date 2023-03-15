﻿/**
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
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigResult();
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the updated domain.</p>
     */
    inline const DomainConfig& GetDomainConfig() const{ return m_domainConfig; }

    /**
     * <p>The status of the updated domain.</p>
     */
    inline void SetDomainConfig(const DomainConfig& value) { m_domainConfig = value; }

    /**
     * <p>The status of the updated domain.</p>
     */
    inline void SetDomainConfig(DomainConfig&& value) { m_domainConfig = std::move(value); }

    /**
     * <p>The status of the updated domain.</p>
     */
    inline UpdateDomainConfigResult& WithDomainConfig(const DomainConfig& value) { SetDomainConfig(value); return *this;}

    /**
     * <p>The status of the updated domain.</p>
     */
    inline UpdateDomainConfigResult& WithDomainConfig(DomainConfig&& value) { SetDomainConfig(std::move(value)); return *this;}


    /**
     * <p>Results of the dry run performed in the update domain request.</p>
     */
    inline const DryRunResults& GetDryRunResults() const{ return m_dryRunResults; }

    /**
     * <p>Results of the dry run performed in the update domain request.</p>
     */
    inline void SetDryRunResults(const DryRunResults& value) { m_dryRunResults = value; }

    /**
     * <p>Results of the dry run performed in the update domain request.</p>
     */
    inline void SetDryRunResults(DryRunResults&& value) { m_dryRunResults = std::move(value); }

    /**
     * <p>Results of the dry run performed in the update domain request.</p>
     */
    inline UpdateDomainConfigResult& WithDryRunResults(const DryRunResults& value) { SetDryRunResults(value); return *this;}

    /**
     * <p>Results of the dry run performed in the update domain request.</p>
     */
    inline UpdateDomainConfigResult& WithDryRunResults(DryRunResults&& value) { SetDryRunResults(std::move(value)); return *this;}


    /**
     * <p>The status of the dry run being performed on the domain, if any.</p>
     */
    inline const DryRunProgressStatus& GetDryRunProgressStatus() const{ return m_dryRunProgressStatus; }

    /**
     * <p>The status of the dry run being performed on the domain, if any.</p>
     */
    inline void SetDryRunProgressStatus(const DryRunProgressStatus& value) { m_dryRunProgressStatus = value; }

    /**
     * <p>The status of the dry run being performed on the domain, if any.</p>
     */
    inline void SetDryRunProgressStatus(DryRunProgressStatus&& value) { m_dryRunProgressStatus = std::move(value); }

    /**
     * <p>The status of the dry run being performed on the domain, if any.</p>
     */
    inline UpdateDomainConfigResult& WithDryRunProgressStatus(const DryRunProgressStatus& value) { SetDryRunProgressStatus(value); return *this;}

    /**
     * <p>The status of the dry run being performed on the domain, if any.</p>
     */
    inline UpdateDomainConfigResult& WithDryRunProgressStatus(DryRunProgressStatus&& value) { SetDryRunProgressStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDomainConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDomainConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDomainConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainConfig m_domainConfig;

    DryRunResults m_dryRunResults;

    DryRunProgressStatus m_dryRunProgressStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
