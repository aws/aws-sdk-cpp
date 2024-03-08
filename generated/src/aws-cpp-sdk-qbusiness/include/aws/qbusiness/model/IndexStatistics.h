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
    AWS_QBUSINESS_API IndexStatistics();
    AWS_QBUSINESS_API IndexStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API IndexStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of documents indexed.</p>
     */
    inline const TextDocumentStatistics& GetTextDocumentStatistics() const{ return m_textDocumentStatistics; }

    /**
     * <p>The number of documents indexed.</p>
     */
    inline bool TextDocumentStatisticsHasBeenSet() const { return m_textDocumentStatisticsHasBeenSet; }

    /**
     * <p>The number of documents indexed.</p>
     */
    inline void SetTextDocumentStatistics(const TextDocumentStatistics& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = value; }

    /**
     * <p>The number of documents indexed.</p>
     */
    inline void SetTextDocumentStatistics(TextDocumentStatistics&& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = std::move(value); }

    /**
     * <p>The number of documents indexed.</p>
     */
    inline IndexStatistics& WithTextDocumentStatistics(const TextDocumentStatistics& value) { SetTextDocumentStatistics(value); return *this;}

    /**
     * <p>The number of documents indexed.</p>
     */
    inline IndexStatistics& WithTextDocumentStatistics(TextDocumentStatistics&& value) { SetTextDocumentStatistics(std::move(value)); return *this;}

  private:

    TextDocumentStatistics m_textDocumentStatistics;
    bool m_textDocumentStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
