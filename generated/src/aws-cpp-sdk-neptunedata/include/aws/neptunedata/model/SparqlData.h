/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Neptune logs are converted to SPARQL quads in the graph using the Resource
   * Description Framework (RDF) <a href="https://www.w3.org/TR/n-quads/">N-QUADS</a>
   * language defined in the W3C RDF 1.1 N-Quads specification</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/SparqlData">AWS
   * API Reference</a></p>
   */
  class SparqlData
  {
  public:
    AWS_NEPTUNEDATA_API SparqlData() = default;
    AWS_NEPTUNEDATA_API SparqlData(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API SparqlData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Holds an <a href="https://www.w3.org/TR/n-quads/">N-QUADS</a> statement
     * expressing the changed quad.</p>
     */
    inline const Aws::String& GetStmt() const { return m_stmt; }
    inline bool StmtHasBeenSet() const { return m_stmtHasBeenSet; }
    template<typename StmtT = Aws::String>
    void SetStmt(StmtT&& value) { m_stmtHasBeenSet = true; m_stmt = std::forward<StmtT>(value); }
    template<typename StmtT = Aws::String>
    SparqlData& WithStmt(StmtT&& value) { SetStmt(std::forward<StmtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stmt;
    bool m_stmtHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
