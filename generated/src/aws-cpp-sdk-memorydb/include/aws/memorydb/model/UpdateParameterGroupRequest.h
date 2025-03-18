/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ParameterNameValue.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class UpdateParameterGroupRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API UpdateParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateParameterGroup"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the parameter group to update.</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    UpdateParameterGroupRequest& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of parameter names and values for the parameter update. You must
     * supply at least one parameter name and value; subsequent arguments are optional.
     * A maximum of 20 parameters may be updated per request.</p>
     */
    inline const Aws::Vector<ParameterNameValue>& GetParameterNameValues() const { return m_parameterNameValues; }
    inline bool ParameterNameValuesHasBeenSet() const { return m_parameterNameValuesHasBeenSet; }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    void SetParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = std::forward<ParameterNameValuesT>(value); }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    UpdateParameterGroupRequest& WithParameterNameValues(ParameterNameValuesT&& value) { SetParameterNameValues(std::forward<ParameterNameValuesT>(value)); return *this;}
    template<typename ParameterNameValuesT = ParameterNameValue>
    UpdateParameterGroupRequest& AddParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.emplace_back(std::forward<ParameterNameValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::Vector<ParameterNameValue> m_parameterNameValues;
    bool m_parameterNameValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
