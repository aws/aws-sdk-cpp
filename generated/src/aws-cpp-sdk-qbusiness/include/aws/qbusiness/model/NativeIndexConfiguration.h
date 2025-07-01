/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qbusiness/model/DocumentAttributeBoostingConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information for an Amazon Q Business index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/NativeIndexConfiguration">AWS
   * API Reference</a></p>
   */
  class NativeIndexConfiguration
  {
  public:
    AWS_QBUSINESS_API NativeIndexConfiguration() = default;
    AWS_QBUSINESS_API NativeIndexConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API NativeIndexConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    NativeIndexConfiguration& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A read-only field that specifies the version of the
     * <code>NativeIndexConfiguration</code>.</p> <p>Amazon Q Business introduces
     * enhanced document retrieval capabilities in version 2 of
     * <code>NativeIndexConfiguration</code>, focusing on streamlined metadata boosting
     * that prioritizes recency and source relevance to deliver more accurate responses
     * to your queries. Version 2 has the following differences from version 1:</p>
     * <ul> <li> <p>Version 2 supports a single Date field (created_at OR
     * last_updated_at) for recency boosting</p> </li> <li> <p>Version 2 supports a
     * single String field with an ordered list of up to 5 values</p> </li> <li>
     * <p>Version 2 introduces number-based boost levels (ONE, TWO) alongside the
     * text-based levels</p> </li> <li> <p>Version 2 allows specifying prioritization
     * between Date and String fields</p> </li> <li> <p>Version 2 maintains backward
     * compatibility with existing configurations</p> </li> </ul>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline NativeIndexConfiguration& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the default boosts applied by Amazon Q Business to supported
     * document attribute data types.</p>
     */
    inline const Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>& GetBoostingOverride() const { return m_boostingOverride; }
    inline bool BoostingOverrideHasBeenSet() const { return m_boostingOverrideHasBeenSet; }
    template<typename BoostingOverrideT = Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>>
    void SetBoostingOverride(BoostingOverrideT&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride = std::forward<BoostingOverrideT>(value); }
    template<typename BoostingOverrideT = Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>>
    NativeIndexConfiguration& WithBoostingOverride(BoostingOverrideT&& value) { SetBoostingOverride(std::forward<BoostingOverrideT>(value)); return *this;}
    template<typename BoostingOverrideKeyT = Aws::String, typename BoostingOverrideValueT = DocumentAttributeBoostingConfiguration>
    NativeIndexConfiguration& AddBoostingOverride(BoostingOverrideKeyT&& key, BoostingOverrideValueT&& value) {
      m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(std::forward<BoostingOverrideKeyT>(key), std::forward<BoostingOverrideValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration> m_boostingOverride;
    bool m_boostingOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
