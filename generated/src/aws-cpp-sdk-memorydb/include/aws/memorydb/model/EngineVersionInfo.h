/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Provides details of the Redis OSS engine version</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/EngineVersionInfo">AWS
   * API Reference</a></p>
   */
  class EngineVersionInfo
  {
  public:
    AWS_MEMORYDB_API EngineVersionInfo() = default;
    AWS_MEMORYDB_API EngineVersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API EngineVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the engine for which version information is provided.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    EngineVersionInfo& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    EngineVersionInfo& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patched engine version</p>
     */
    inline const Aws::String& GetEnginePatchVersion() const { return m_enginePatchVersion; }
    inline bool EnginePatchVersionHasBeenSet() const { return m_enginePatchVersionHasBeenSet; }
    template<typename EnginePatchVersionT = Aws::String>
    void SetEnginePatchVersion(EnginePatchVersionT&& value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion = std::forward<EnginePatchVersionT>(value); }
    template<typename EnginePatchVersionT = Aws::String>
    EngineVersionInfo& WithEnginePatchVersion(EnginePatchVersionT&& value) { SetEnginePatchVersion(std::forward<EnginePatchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline const Aws::String& GetParameterGroupFamily() const { return m_parameterGroupFamily; }
    inline bool ParameterGroupFamilyHasBeenSet() const { return m_parameterGroupFamilyHasBeenSet; }
    template<typename ParameterGroupFamilyT = Aws::String>
    void SetParameterGroupFamily(ParameterGroupFamilyT&& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = std::forward<ParameterGroupFamilyT>(value); }
    template<typename ParameterGroupFamilyT = Aws::String>
    EngineVersionInfo& WithParameterGroupFamily(ParameterGroupFamilyT&& value) { SetParameterGroupFamily(std::forward<ParameterGroupFamilyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_enginePatchVersion;
    bool m_enginePatchVersionHasBeenSet = false;

    Aws::String m_parameterGroupFamily;
    bool m_parameterGroupFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
