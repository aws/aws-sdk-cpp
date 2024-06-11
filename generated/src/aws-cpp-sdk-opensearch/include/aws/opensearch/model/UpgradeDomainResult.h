﻿/**
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
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult();
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpgradeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the domain upgrade.</p>
     */
    inline const Aws::String& GetUpgradeId() const{ return m_upgradeId; }
    inline void SetUpgradeId(const Aws::String& value) { m_upgradeId = value; }
    inline void SetUpgradeId(Aws::String&& value) { m_upgradeId = std::move(value); }
    inline void SetUpgradeId(const char* value) { m_upgradeId.assign(value); }
    inline UpgradeDomainResult& WithUpgradeId(const Aws::String& value) { SetUpgradeId(value); return *this;}
    inline UpgradeDomainResult& WithUpgradeId(Aws::String&& value) { SetUpgradeId(std::move(value)); return *this;}
    inline UpgradeDomainResult& WithUpgradeId(const char* value) { SetUpgradeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain that was upgraded.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline UpgradeDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline UpgradeDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline UpgradeDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>OpenSearch or Elasticsearch version that the domain was upgraded to.</p>
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersion = value; }
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersion = std::move(value); }
    inline void SetTargetVersion(const char* value) { m_targetVersion.assign(value); }
    inline UpgradeDomainResult& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}
    inline UpgradeDomainResult& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}
    inline UpgradeDomainResult& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, indicates that an upgrade eligibility check was performed.</p>
     */
    inline bool GetPerformCheckOnly() const{ return m_performCheckOnly; }
    inline void SetPerformCheckOnly(bool value) { m_performCheckOnly = value; }
    inline UpgradeDomainResult& WithPerformCheckOnly(bool value) { SetPerformCheckOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advanced options configuration for the domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptions = value; }
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptions = std::move(value); }
    inline UpgradeDomainResult& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}
    inline UpgradeDomainResult& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    inline UpgradeDomainResult& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptions.emplace(key, value); return *this; }
    inline UpgradeDomainResult& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline UpgradeDomainResult& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline UpgradeDomainResult& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline UpgradeDomainResult& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline UpgradeDomainResult& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline UpgradeDomainResult& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container for information about a configuration change happening on a
     * domain.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetails = value; }
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetails = std::move(value); }
    inline UpgradeDomainResult& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}
    inline UpgradeDomainResult& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpgradeDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpgradeDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpgradeDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_upgradeId;

    Aws::String m_domainName;

    Aws::String m_targetVersion;

    bool m_performCheckOnly;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;

    ChangeProgressDetails m_changeProgressDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
