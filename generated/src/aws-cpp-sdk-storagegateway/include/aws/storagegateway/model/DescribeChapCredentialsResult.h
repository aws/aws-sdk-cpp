/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ChapInfo.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeChapCredentialsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeChapCredentialsResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeChapCredentialsResult() = default;
    AWS_STORAGEGATEWAY_API DescribeChapCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeChapCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline const Aws::Vector<ChapInfo>& GetChapCredentials() const { return m_chapCredentials; }
    template<typename ChapCredentialsT = Aws::Vector<ChapInfo>>
    void SetChapCredentials(ChapCredentialsT&& value) { m_chapCredentialsHasBeenSet = true; m_chapCredentials = std::forward<ChapCredentialsT>(value); }
    template<typename ChapCredentialsT = Aws::Vector<ChapInfo>>
    DescribeChapCredentialsResult& WithChapCredentials(ChapCredentialsT&& value) { SetChapCredentials(std::forward<ChapCredentialsT>(value)); return *this;}
    template<typename ChapCredentialsT = ChapInfo>
    DescribeChapCredentialsResult& AddChapCredentials(ChapCredentialsT&& value) { m_chapCredentialsHasBeenSet = true; m_chapCredentials.emplace_back(std::forward<ChapCredentialsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeChapCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChapInfo> m_chapCredentials;
    bool m_chapCredentialsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
