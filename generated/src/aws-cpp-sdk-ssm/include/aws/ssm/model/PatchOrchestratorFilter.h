/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines a filter used in Patch Manager APIs. Supported filter keys depend on
   * the API operation that includes the filter. Patch Manager API operations that
   * use <code>PatchOrchestratorFilter</code> include the following:</p> <ul> <li>
   * <p> <a>DescribeAvailablePatches</a> </p> </li> <li> <p>
   * <a>DescribeInstancePatches</a> </p> </li> <li> <p> <a>DescribePatchBaselines</a>
   * </p> </li> <li> <p> <a>DescribePatchGroups</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchOrchestratorFilter">AWS
   * API Reference</a></p>
   */
  class PatchOrchestratorFilter
  {
  public:
    AWS_SSM_API PatchOrchestratorFilter();
    AWS_SSM_API PatchOrchestratorFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchOrchestratorFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key for the filter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline PatchOrchestratorFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline PatchOrchestratorFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline PatchOrchestratorFilter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline PatchOrchestratorFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline PatchOrchestratorFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline PatchOrchestratorFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline PatchOrchestratorFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline PatchOrchestratorFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
