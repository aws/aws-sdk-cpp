/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>CreateTapeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapesOutput">AWS
   * API Reference</a></p>
   */
  class CreateTapesResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateTapesResult() = default;
    AWS_STORAGEGATEWAY_API CreateTapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateTapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTapeARNs() const { return m_tapeARNs; }
    template<typename TapeARNsT = Aws::Vector<Aws::String>>
    void SetTapeARNs(TapeARNsT&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs = std::forward<TapeARNsT>(value); }
    template<typename TapeARNsT = Aws::Vector<Aws::String>>
    CreateTapesResult& WithTapeARNs(TapeARNsT&& value) { SetTapeARNs(std::forward<TapeARNsT>(value)); return *this;}
    template<typename TapeARNsT = Aws::String>
    CreateTapesResult& AddTapeARNs(TapeARNsT&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.emplace_back(std::forward<TapeARNsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTapesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tapeARNs;
    bool m_tapeARNsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
