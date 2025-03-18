/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/SMBFileShareInfo.h>
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
   * <p>DescribeSMBFileSharesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSMBFileSharesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeSMBFileSharesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult() = default;
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline const Aws::Vector<SMBFileShareInfo>& GetSMBFileShareInfoList() const { return m_sMBFileShareInfoList; }
    template<typename SMBFileShareInfoListT = Aws::Vector<SMBFileShareInfo>>
    void SetSMBFileShareInfoList(SMBFileShareInfoListT&& value) { m_sMBFileShareInfoListHasBeenSet = true; m_sMBFileShareInfoList = std::forward<SMBFileShareInfoListT>(value); }
    template<typename SMBFileShareInfoListT = Aws::Vector<SMBFileShareInfo>>
    DescribeSMBFileSharesResult& WithSMBFileShareInfoList(SMBFileShareInfoListT&& value) { SetSMBFileShareInfoList(std::forward<SMBFileShareInfoListT>(value)); return *this;}
    template<typename SMBFileShareInfoListT = SMBFileShareInfo>
    DescribeSMBFileSharesResult& AddSMBFileShareInfoList(SMBFileShareInfoListT&& value) { m_sMBFileShareInfoListHasBeenSet = true; m_sMBFileShareInfoList.emplace_back(std::forward<SMBFileShareInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSMBFileSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SMBFileShareInfo> m_sMBFileShareInfoList;
    bool m_sMBFileShareInfoListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
