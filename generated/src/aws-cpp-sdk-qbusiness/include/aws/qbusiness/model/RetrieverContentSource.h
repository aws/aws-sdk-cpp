/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Specifies a retriever as the content source for a search.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/RetrieverContentSource">AWS
   * API Reference</a></p>
   */
  class RetrieverContentSource
  {
  public:
    AWS_QBUSINESS_API RetrieverContentSource() = default;
    AWS_QBUSINESS_API RetrieverContentSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API RetrieverContentSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the retriever to use as the content source.</p>
     */
    inline const Aws::String& GetRetrieverId() const { return m_retrieverId; }
    inline bool RetrieverIdHasBeenSet() const { return m_retrieverIdHasBeenSet; }
    template<typename RetrieverIdT = Aws::String>
    void SetRetrieverId(RetrieverIdT&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::forward<RetrieverIdT>(value); }
    template<typename RetrieverIdT = Aws::String>
    RetrieverContentSource& WithRetrieverId(RetrieverIdT&& value) { SetRetrieverId(std::forward<RetrieverIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
