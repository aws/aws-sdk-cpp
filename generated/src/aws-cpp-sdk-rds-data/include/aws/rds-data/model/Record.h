﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/Value.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>A record returned by a call.</p>  <p>This data structure is only used
   * with the deprecated <code>ExecuteSql</code> operation. Use the
   * <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code> operation
   * instead.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/Record">AWS API
   * Reference</a></p>
   */
  class Record
  {
  public:
    AWS_RDSDATASERVICE_API Record() = default;
    AWS_RDSDATASERVICE_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The values returned in the record.</p>
     */
    inline const Aws::Vector<Value>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Value>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Value>>
    Record& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Value>
    Record& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Value> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
