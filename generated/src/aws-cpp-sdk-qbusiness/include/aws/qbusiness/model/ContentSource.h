/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/RetrieverContentSource.h>
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
   * <p>Specifies the source of content to search in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ContentSource">AWS
   * API Reference</a></p>
   */
  class ContentSource
  {
  public:
    AWS_QBUSINESS_API ContentSource() = default;
    AWS_QBUSINESS_API ContentSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ContentSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The retriever to use as the content source.</p>
     */
    inline const RetrieverContentSource& GetRetriever() const { return m_retriever; }
    inline bool RetrieverHasBeenSet() const { return m_retrieverHasBeenSet; }
    template<typename RetrieverT = RetrieverContentSource>
    void SetRetriever(RetrieverT&& value) { m_retrieverHasBeenSet = true; m_retriever = std::forward<RetrieverT>(value); }
    template<typename RetrieverT = RetrieverContentSource>
    ContentSource& WithRetriever(RetrieverT&& value) { SetRetriever(std::forward<RetrieverT>(value)); return *this;}
    ///@}
  private:

    RetrieverContentSource m_retriever;
    bool m_retrieverHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
