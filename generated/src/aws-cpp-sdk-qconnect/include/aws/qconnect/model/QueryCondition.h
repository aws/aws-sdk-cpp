/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/QueryConditionItem.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Information about how to query content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QueryCondition">AWS
   * API Reference</a></p>
   */
  class QueryCondition
  {
  public:
    AWS_QCONNECT_API QueryCondition() = default;
    AWS_QCONNECT_API QueryCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QueryCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition for the query.</p>
     */
    inline const QueryConditionItem& GetSingle() const { return m_single; }
    inline bool SingleHasBeenSet() const { return m_singleHasBeenSet; }
    template<typename SingleT = QueryConditionItem>
    void SetSingle(SingleT&& value) { m_singleHasBeenSet = true; m_single = std::forward<SingleT>(value); }
    template<typename SingleT = QueryConditionItem>
    QueryCondition& WithSingle(SingleT&& value) { SetSingle(std::forward<SingleT>(value)); return *this;}
    ///@}
  private:

    QueryConditionItem m_single;
    bool m_singleHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
