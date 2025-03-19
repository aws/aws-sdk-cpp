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
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteChapCredentialsOutput">AWS
   * API Reference</a></p>
   */
  class DeleteChapCredentialsResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteChapCredentialsResult() = default;
    AWS_STORAGEGATEWAY_API DeleteChapCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteChapCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetTargetARN() const { return m_targetARN; }
    template<typename TargetARNT = Aws::String>
    void SetTargetARN(TargetARNT&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::forward<TargetARNT>(value); }
    template<typename TargetARNT = Aws::String>
    DeleteChapCredentialsResult& WithTargetARN(TargetARNT&& value) { SetTargetARN(std::forward<TargetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline const Aws::String& GetInitiatorName() const { return m_initiatorName; }
    template<typename InitiatorNameT = Aws::String>
    void SetInitiatorName(InitiatorNameT&& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = std::forward<InitiatorNameT>(value); }
    template<typename InitiatorNameT = Aws::String>
    DeleteChapCredentialsResult& WithInitiatorName(InitiatorNameT&& value) { SetInitiatorName(std::forward<InitiatorNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteChapCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetARN;
    bool m_targetARNHasBeenSet = false;

    Aws::String m_initiatorName;
    bool m_initiatorNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
