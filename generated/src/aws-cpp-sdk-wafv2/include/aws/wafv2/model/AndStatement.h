/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Statement.h>
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
namespace WAFV2
{
namespace Model
{
  class Statement;

  /**
   * <p>A logical rule statement used to combine other rule statements with AND
   * logic. You provide more than one <a>Statement</a> within the
   * <code>AndStatement</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AndStatement">AWS
   * API Reference</a></p>
   */
  class AndStatement
  {
  public:
    AWS_WAFV2_API AndStatement() = default;
    AWS_WAFV2_API AndStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AndStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline const Aws::Vector<Statement>& GetStatements() const { return m_statements; }
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }
    template<typename StatementsT = Aws::Vector<Statement>>
    void SetStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements = std::forward<StatementsT>(value); }
    template<typename StatementsT = Aws::Vector<Statement>>
    AndStatement& WithStatements(StatementsT&& value) { SetStatements(std::forward<StatementsT>(value)); return *this;}
    template<typename StatementsT = Statement>
    AndStatement& AddStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements.emplace_back(std::forward<StatementsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Statement> m_statements;
    bool m_statementsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
