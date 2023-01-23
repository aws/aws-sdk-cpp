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
   * <p>Provides details of the Redis engine version</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/EngineVersionInfo">AWS
   * API Reference</a></p>
   */
  class EngineVersionInfo
  {
  public:
    AWS_MEMORYDB_API EngineVersionInfo();
    AWS_MEMORYDB_API EngineVersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API EngineVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The engine version</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version</p>
     */
    inline EngineVersionInfo& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version</p>
     */
    inline EngineVersionInfo& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version</p>
     */
    inline EngineVersionInfo& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The patched engine version</p>
     */
    inline const Aws::String& GetEnginePatchVersion() const{ return m_enginePatchVersion; }

    /**
     * <p>The patched engine version</p>
     */
    inline bool EnginePatchVersionHasBeenSet() const { return m_enginePatchVersionHasBeenSet; }

    /**
     * <p>The patched engine version</p>
     */
    inline void SetEnginePatchVersion(const Aws::String& value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion = value; }

    /**
     * <p>The patched engine version</p>
     */
    inline void SetEnginePatchVersion(Aws::String&& value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion = std::move(value); }

    /**
     * <p>The patched engine version</p>
     */
    inline void SetEnginePatchVersion(const char* value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion.assign(value); }

    /**
     * <p>The patched engine version</p>
     */
    inline EngineVersionInfo& WithEnginePatchVersion(const Aws::String& value) { SetEnginePatchVersion(value); return *this;}

    /**
     * <p>The patched engine version</p>
     */
    inline EngineVersionInfo& WithEnginePatchVersion(Aws::String&& value) { SetEnginePatchVersion(std::move(value)); return *this;}

    /**
     * <p>The patched engine version</p>
     */
    inline EngineVersionInfo& WithEnginePatchVersion(const char* value) { SetEnginePatchVersion(value); return *this;}


    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline const Aws::String& GetParameterGroupFamily() const{ return m_parameterGroupFamily; }

    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline bool ParameterGroupFamilyHasBeenSet() const { return m_parameterGroupFamilyHasBeenSet; }

    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline void SetParameterGroupFamily(const Aws::String& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = value; }

    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline void SetParameterGroupFamily(Aws::String&& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = std::move(value); }

    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline void SetParameterGroupFamily(const char* value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily.assign(value); }

    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline EngineVersionInfo& WithParameterGroupFamily(const Aws::String& value) { SetParameterGroupFamily(value); return *this;}

    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline EngineVersionInfo& WithParameterGroupFamily(Aws::String&& value) { SetParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline EngineVersionInfo& WithParameterGroupFamily(const char* value) { SetParameterGroupFamily(value); return *this;}

  private:

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
