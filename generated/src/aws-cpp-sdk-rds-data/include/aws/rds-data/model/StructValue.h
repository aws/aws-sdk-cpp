/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/Value.h>
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
namespace RDSDataService
{
namespace Model
{
  class Value;

  /**
   * <p>A structure value returned by a call.</p>  <p>This data structure is
   * only used with the deprecated <code>ExecuteSql</code> operation. Use the
   * <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code> operation
   * instead.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/StructValue">AWS
   * API Reference</a></p>
   */
  class StructValue
  {
  public:
    AWS_RDSDATASERVICE_API StructValue() = default;
    AWS_RDSDATASERVICE_API StructValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API StructValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attributes returned in the record.</p>
     */
    inline const Aws::Vector<Value>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Value>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Value>>
    StructValue& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Value>
    StructValue& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Value> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
