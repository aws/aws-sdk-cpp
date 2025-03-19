/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/NFSFileShareInfo.h>
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
   * <p>DescribeNFSFileSharesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeNFSFileSharesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeNFSFileSharesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeNFSFileSharesResult() = default;
    AWS_STORAGEGATEWAY_API DescribeNFSFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeNFSFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline const Aws::Vector<NFSFileShareInfo>& GetNFSFileShareInfoList() const { return m_nFSFileShareInfoList; }
    template<typename NFSFileShareInfoListT = Aws::Vector<NFSFileShareInfo>>
    void SetNFSFileShareInfoList(NFSFileShareInfoListT&& value) { m_nFSFileShareInfoListHasBeenSet = true; m_nFSFileShareInfoList = std::forward<NFSFileShareInfoListT>(value); }
    template<typename NFSFileShareInfoListT = Aws::Vector<NFSFileShareInfo>>
    DescribeNFSFileSharesResult& WithNFSFileShareInfoList(NFSFileShareInfoListT&& value) { SetNFSFileShareInfoList(std::forward<NFSFileShareInfoListT>(value)); return *this;}
    template<typename NFSFileShareInfoListT = NFSFileShareInfo>
    DescribeNFSFileSharesResult& AddNFSFileShareInfoList(NFSFileShareInfoListT&& value) { m_nFSFileShareInfoListHasBeenSet = true; m_nFSFileShareInfoList.emplace_back(std::forward<NFSFileShareInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeNFSFileSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NFSFileShareInfo> m_nFSFileShareInfoList;
    bool m_nFSFileShareInfoListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
