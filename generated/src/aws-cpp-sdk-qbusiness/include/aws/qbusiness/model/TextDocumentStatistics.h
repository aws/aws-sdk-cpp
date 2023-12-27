/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>

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
   * <p>Provides information about text documents in an index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/TextDocumentStatistics">AWS
   * API Reference</a></p>
   */
  class TextDocumentStatistics
  {
  public:
    AWS_QBUSINESS_API TextDocumentStatistics();
    AWS_QBUSINESS_API TextDocumentStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API TextDocumentStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline long long GetIndexedTextBytes() const{ return m_indexedTextBytes; }

    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline bool IndexedTextBytesHasBeenSet() const { return m_indexedTextBytesHasBeenSet; }

    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline void SetIndexedTextBytes(long long value) { m_indexedTextBytesHasBeenSet = true; m_indexedTextBytes = value; }

    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline TextDocumentStatistics& WithIndexedTextBytes(long long value) { SetIndexedTextBytes(value); return *this;}


    /**
     * <p>The number of text documents indexed.</p>
     */
    inline int GetIndexedTextDocumentCount() const{ return m_indexedTextDocumentCount; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline bool IndexedTextDocumentCountHasBeenSet() const { return m_indexedTextDocumentCountHasBeenSet; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline void SetIndexedTextDocumentCount(int value) { m_indexedTextDocumentCountHasBeenSet = true; m_indexedTextDocumentCount = value; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline TextDocumentStatistics& WithIndexedTextDocumentCount(int value) { SetIndexedTextDocumentCount(value); return *this;}

  private:

    long long m_indexedTextBytes;
    bool m_indexedTextBytesHasBeenSet = false;

    int m_indexedTextDocumentCount;
    bool m_indexedTextDocumentCountHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
