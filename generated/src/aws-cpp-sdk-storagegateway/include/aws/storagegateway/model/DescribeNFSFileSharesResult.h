/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_STORAGEGATEWAY_API DescribeNFSFileSharesResult();
    AWS_STORAGEGATEWAY_API DescribeNFSFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeNFSFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline const Aws::Vector<NFSFileShareInfo>& GetNFSFileShareInfoList() const{ return m_nFSFileShareInfoList; }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline void SetNFSFileShareInfoList(const Aws::Vector<NFSFileShareInfo>& value) { m_nFSFileShareInfoList = value; }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline void SetNFSFileShareInfoList(Aws::Vector<NFSFileShareInfo>&& value) { m_nFSFileShareInfoList = std::move(value); }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeNFSFileSharesResult& WithNFSFileShareInfoList(const Aws::Vector<NFSFileShareInfo>& value) { SetNFSFileShareInfoList(value); return *this;}

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeNFSFileSharesResult& WithNFSFileShareInfoList(Aws::Vector<NFSFileShareInfo>&& value) { SetNFSFileShareInfoList(std::move(value)); return *this;}

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeNFSFileSharesResult& AddNFSFileShareInfoList(const NFSFileShareInfo& value) { m_nFSFileShareInfoList.push_back(value); return *this; }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeNFSFileSharesResult& AddNFSFileShareInfoList(NFSFileShareInfo&& value) { m_nFSFileShareInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<NFSFileShareInfo> m_nFSFileShareInfoList;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
