/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configuration information for an Amazon Q index.</p><p><h3>See Also:</h3>  
   * <a
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


    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline const Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>& GetBoostingOverride() const{ return m_boostingOverride; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline bool BoostingOverrideHasBeenSet() const { return m_boostingOverrideHasBeenSet; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline void SetBoostingOverride(const Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride = value; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline void SetBoostingOverride(Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride = std::move(value); }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& WithBoostingOverride(const Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>& value) { SetBoostingOverride(value); return *this;}

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& WithBoostingOverride(Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration>&& value) { SetBoostingOverride(std::move(value)); return *this;}

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& AddBoostingOverride(const Aws::String& key, const DocumentAttributeBoostingConfiguration& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, value); return *this; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& AddBoostingOverride(Aws::String&& key, const DocumentAttributeBoostingConfiguration& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(std::move(key), value); return *this; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& AddBoostingOverride(const Aws::String& key, DocumentAttributeBoostingConfiguration&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& AddBoostingOverride(Aws::String&& key, DocumentAttributeBoostingConfiguration&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& AddBoostingOverride(const char* key, DocumentAttributeBoostingConfiguration&& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Overrides the default boosts applied by Amazon Q to supported document
     * attribute data types.</p>
     */
    inline NativeIndexConfiguration& AddBoostingOverride(const char* key, const DocumentAttributeBoostingConfiguration& value) { m_boostingOverrideHasBeenSet = true; m_boostingOverride.emplace(key, value); return *this; }


    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline NativeIndexConfiguration& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline NativeIndexConfiguration& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline NativeIndexConfiguration& WithIndexId(const char* value) { SetIndexId(value); return *this;}

  private:

    Aws::Map<Aws::String, DocumentAttributeBoostingConfiguration> m_boostingOverride;
    bool m_boostingOverrideHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
