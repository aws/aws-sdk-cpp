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
    AWS_QCONNECT_API QueryCondition();
    AWS_QCONNECT_API QueryCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QueryCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The condition for the query.</p>
     */
    inline const QueryConditionItem& GetSingle() const{ return m_single; }

    /**
     * <p>The condition for the query.</p>
     */
    inline bool SingleHasBeenSet() const { return m_singleHasBeenSet; }

    /**
     * <p>The condition for the query.</p>
     */
    inline void SetSingle(const QueryConditionItem& value) { m_singleHasBeenSet = true; m_single = value; }

    /**
     * <p>The condition for the query.</p>
     */
    inline void SetSingle(QueryConditionItem&& value) { m_singleHasBeenSet = true; m_single = std::move(value); }

    /**
     * <p>The condition for the query.</p>
     */
    inline QueryCondition& WithSingle(const QueryConditionItem& value) { SetSingle(value); return *this;}

    /**
     * <p>The condition for the query.</p>
     */
    inline QueryCondition& WithSingle(QueryConditionItem&& value) { SetSingle(std::move(value)); return *this;}

  private:

    QueryConditionItem m_single;
    bool m_singleHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
