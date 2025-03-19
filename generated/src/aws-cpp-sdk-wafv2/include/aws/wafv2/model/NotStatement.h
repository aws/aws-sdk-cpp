/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace WAFV2
{
namespace Model
{
  class Statement;

  /**
   * <p>A logical rule statement used to negate the results of another rule
   * statement. You provide one <a>Statement</a> within the
   * <code>NotStatement</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/NotStatement">AWS
   * API Reference</a></p>
   */
  class NotStatement
  {
  public:
    AWS_WAFV2_API NotStatement() = default;
    AWS_WAFV2_API NotStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API NotStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The statement to negate. You can use any statement that can be nested.</p>
     */
    inline const Statement& GetStatement() const{
      return *m_statement;
    }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    template<typename StatementT = Statement>
    void SetStatement(StatementT&& value) {
      m_statementHasBeenSet = true; 
      m_statement = Aws::MakeShared<Statement>("NotStatement", std::forward<StatementT>(value));
    }
    template<typename StatementT = Statement>
    NotStatement& WithStatement(StatementT&& value) { SetStatement(std::forward<StatementT>(value)); return *this;}
    ///@}
  private:

    std::shared_ptr<Statement> m_statement;
    bool m_statementHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
