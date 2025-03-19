/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Query.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/QueriesConfig">AWS
   * API Reference</a></p>
   */
  class QueriesConfig
  {
  public:
    AWS_TEXTRACT_API QueriesConfig() = default;
    AWS_TEXTRACT_API QueriesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API QueriesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<Query>& GetQueries() const { return m_queries; }
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }
    template<typename QueriesT = Aws::Vector<Query>>
    void SetQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries = std::forward<QueriesT>(value); }
    template<typename QueriesT = Aws::Vector<Query>>
    QueriesConfig& WithQueries(QueriesT&& value) { SetQueries(std::forward<QueriesT>(value)); return *this;}
    template<typename QueriesT = Query>
    QueriesConfig& AddQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries.emplace_back(std::forward<QueriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Query> m_queries;
    bool m_queriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
