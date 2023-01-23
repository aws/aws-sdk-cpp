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
    AWS_OPENSEARCHSERVICE_API CompatibleVersionsMap();
    AWS_OPENSEARCHSERVICE_API CompatibleVersionsMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API CompatibleVersionsMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline CompatibleVersionsMap& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline CompatibleVersionsMap& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>The current version that the OpenSearch Service domain is running.</p>
     */
    inline CompatibleVersionsMap& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetVersions() const{ return m_targetVersions; }

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline bool TargetVersionsHasBeenSet() const { return m_targetVersionsHasBeenSet; }

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline void SetTargetVersions(const Aws::Vector<Aws::String>& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = value; }

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline void SetTargetVersions(Aws::Vector<Aws::String>&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = std::move(value); }

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline CompatibleVersionsMap& WithTargetVersions(const Aws::Vector<Aws::String>& value) { SetTargetVersions(value); return *this;}

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline CompatibleVersionsMap& WithTargetVersions(Aws::Vector<Aws::String>&& value) { SetTargetVersions(std::move(value)); return *this;}

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline CompatibleVersionsMap& AddTargetVersions(const Aws::String& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(value); return *this; }

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline CompatibleVersionsMap& AddTargetVersions(Aws::String&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The possible versions that you can upgrade the domain to.</p>
     */
    inline CompatibleVersionsMap& AddTargetVersions(const char* value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(value); return *this; }

  private:

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetVersions;
    bool m_targetVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
