/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
   * <p>RetrieveTapeRecoveryPointOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RetrieveTapeRecoveryPointOutput">AWS
   * API Reference</a></p>
   */
  class RetrieveTapeRecoveryPointResult
  {
  public:
    AWS_STORAGEGATEWAY_API RetrieveTapeRecoveryPointResult() = default;
    AWS_STORAGEGATEWAY_API RetrieveTapeRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API RetrieveTapeRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline const Aws::String& GetTapeARN() const { return m_tapeARN; }
    template<typename TapeARNT = Aws::String>
    void SetTapeARN(TapeARNT&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::forward<TapeARNT>(value); }
    template<typename TapeARNT = Aws::String>
    RetrieveTapeRecoveryPointResult& WithTapeARN(TapeARNT&& value) { SetTapeARN(std::forward<TapeARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RetrieveTapeRecoveryPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
