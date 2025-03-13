/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class SelectRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API SelectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Select"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * The expression used to query the domain.
     */
    inline const Aws::String& GetSelectExpression() const { return m_selectExpression; }
    inline bool SelectExpressionHasBeenSet() const { return m_selectExpressionHasBeenSet; }
    template<typename SelectExpressionT = Aws::String>
    void SetSelectExpression(SelectExpressionT&& value) { m_selectExpressionHasBeenSet = true; m_selectExpression = std::forward<SelectExpressionT>(value); }
    template<typename SelectExpressionT = Aws::String>
    SelectRequest& WithSelectExpression(SelectExpressionT&& value) { SetSelectExpression(std::forward<SelectExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A string informing Amazon SimpleDB where to start the next list of
     * <code>ItemNames</code>.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SelectRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline bool GetConsistentRead() const { return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline SelectRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}
  private:

    Aws::String m_selectExpression;
    bool m_selectExpressionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_consistentRead{false};
    bool m_consistentReadHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
