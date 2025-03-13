/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class ResetParameterGroupRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API ResetParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetParameterGroup"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    ResetParameterGroupRequest& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, all parameters in the parameter group are reset to their default
     * values. If false, only the parameters listed by ParameterNames are reset to
     * their default values.</p>
     */
    inline bool GetAllParameters() const { return m_allParameters; }
    inline bool AllParametersHasBeenSet() const { return m_allParametersHasBeenSet; }
    inline void SetAllParameters(bool value) { m_allParametersHasBeenSet = true; m_allParameters = value; }
    inline ResetParameterGroupRequest& WithAllParameters(bool value) { SetAllParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParameterNames() const { return m_parameterNames; }
    inline bool ParameterNamesHasBeenSet() const { return m_parameterNamesHasBeenSet; }
    template<typename ParameterNamesT = Aws::Vector<Aws::String>>
    void SetParameterNames(ParameterNamesT&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames = std::forward<ParameterNamesT>(value); }
    template<typename ParameterNamesT = Aws::Vector<Aws::String>>
    ResetParameterGroupRequest& WithParameterNames(ParameterNamesT&& value) { SetParameterNames(std::forward<ParameterNamesT>(value)); return *this;}
    template<typename ParameterNamesT = Aws::String>
    ResetParameterGroupRequest& AddParameterNames(ParameterNamesT&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames.emplace_back(std::forward<ParameterNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    bool m_allParameters{false};
    bool m_allParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_parameterNames;
    bool m_parameterNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
