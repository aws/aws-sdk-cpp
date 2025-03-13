/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/EngineType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about an OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainInfo">AWS
   * API Reference</a></p>
   */
  class DomainInfo
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainInfo() = default;
    AWS_OPENSEARCHSERVICE_API DomainInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainInfo& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of search engine that the domain is running.<code>OpenSearch</code>
     * for an OpenSearch engine, or <code>Elasticsearch</code> for a legacy
     * Elasticsearch OSS engine.</p>
     */
    inline EngineType GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(EngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline DomainInfo& WithEngineType(EngineType value) { SetEngineType(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    EngineType m_engineType{EngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
