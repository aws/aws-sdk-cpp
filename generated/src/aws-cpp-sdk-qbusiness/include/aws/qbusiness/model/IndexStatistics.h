/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/TextDocumentStatistics.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information about the number of documents in an index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/IndexStatistics">AWS
   * API Reference</a></p>
   */
  class IndexStatistics
  {
  public:
    AWS_QBUSINESS_API IndexStatistics() = default;
    AWS_QBUSINESS_API IndexStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API IndexStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of documents indexed.</p>
     */
    inline const TextDocumentStatistics& GetTextDocumentStatistics() const { return m_textDocumentStatistics; }
    inline bool TextDocumentStatisticsHasBeenSet() const { return m_textDocumentStatisticsHasBeenSet; }
    template<typename TextDocumentStatisticsT = TextDocumentStatistics>
    void SetTextDocumentStatistics(TextDocumentStatisticsT&& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = std::forward<TextDocumentStatisticsT>(value); }
    template<typename TextDocumentStatisticsT = TextDocumentStatistics>
    IndexStatistics& WithTextDocumentStatistics(TextDocumentStatisticsT&& value) { SetTextDocumentStatistics(std::forward<TextDocumentStatisticsT>(value)); return *this;}
    ///@}
  private:

    TextDocumentStatistics m_textDocumentStatistics;
    bool m_textDocumentStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
