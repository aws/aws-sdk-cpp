/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
   * upgrade them to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CompatibleVersionsMap">AWS
   * API Reference</a></p>
   */
  class CompatibleVersionsMap
  {
  public:
    AWS_OPENSEARCHSERVICE_API CompatibleVersionsMap() = default;
    AWS_OPENSEARCHSERVICE_API CompatibleVersionsMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API CompatibleVersionsMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    CompatibleVersionsMap& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetVersions() const { return m_targetVersions; }
    inline bool TargetVersionsHasBeenSet() const { return m_targetVersionsHasBeenSet; }
    template<typename TargetVersionsT = Aws::Vector<Aws::String>>
    void SetTargetVersions(TargetVersionsT&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = std::forward<TargetVersionsT>(value); }
    template<typename TargetVersionsT = Aws::Vector<Aws::String>>
    CompatibleVersionsMap& WithTargetVersions(TargetVersionsT&& value) { SetTargetVersions(std::forward<TargetVersionsT>(value)); return *this;}
    template<typename TargetVersionsT = Aws::String>
    CompatibleVersionsMap& AddTargetVersions(TargetVersionsT&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.emplace_back(std::forward<TargetVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetVersions;
    bool m_targetVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
