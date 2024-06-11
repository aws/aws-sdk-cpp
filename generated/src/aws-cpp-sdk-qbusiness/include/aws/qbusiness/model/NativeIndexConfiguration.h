﻿/**
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
    AWS_QBUSINESS_API NativeIndexConfiguration();
    AWS_QBUSINESS_API NativeIndexConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API NativeIndexConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline NativeIndexConfiguration& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline NativeIndexConfiguration& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline NativeIndexConfiguration& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the default boosts applied by Amazon Q Business to supported
     * document attribute data types.</p>
     */
    inline const Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>& GetBoostingOverride() const{ return m_boostingOverride; }
    inline bool BoostingOverrideHasBeenSet() const { return m_boostingOverrideHasBeenSet; }
    inline void SetBoostingOverride(const Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride = value; }
    inline void SetBoostingOverride(Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride = std::move(value); }
    inline NativeIndexConfiguration& WithBoostingOverride(const Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>& value) { SetBoostingOverride(value); return *this;}
    inline NativeIndexConfiguration& WithBoostingOverride(Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>&& value) { SetBoostingOverride(std::move(value)); return *this;}
    inline NativeIndexConfiguration& AddBoostingOverride(const Aws::String& key, const DocumentAttributeBoostingConfiguration& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, value); return *this; }
    inline NativeIndexConfiguration& AddBoostingOverride(Aws::String&& key, const DocumentAttributeBoostingConfiguration& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(std::move(key), value); return *this; }
    inline NativeIndexConfiguration& AddBoostingOverride(const Aws::String& key, DocumentAttributeBoostingConfiguration&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, std::move(value)); return *this; }
    inline NativeIndexConfiguration& AddBoostingOverride(Aws::String&& key, DocumentAttributeBoostingConfiguration&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(std::move(key), std::move(value)); return *this; }
    inline NativeIndexConfiguration& AddBoostingOverride(const char* key, DocumentAttributeBoostingConfiguration&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, std::move(value)); return *this; }
    inline NativeIndexConfiguration& AddBoostingOverride(const char* key, const DocumentAttributeBoostingConfiguration& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration> m_boostingOverride;
    bool m_boostingOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
