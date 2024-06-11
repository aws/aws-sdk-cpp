﻿/**
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
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult();
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline const Aws::Vector<SMBFileShareInfo>& GetSMBFileShareInfoList() const{ return m_sMBFileShareInfoList; }
    inline void SetSMBFileShareInfoList(const Aws::Vector<SMBFileShareInfo>& value) { m_sMBFileShareInfoList = value; }
    inline void SetSMBFileShareInfoList(Aws::Vector<SMBFileShareInfo>&& value) { m_sMBFileShareInfoList = std::move(value); }
    inline DescribeSMBFileSharesResult& WithSMBFileShareInfoList(const Aws::Vector<SMBFileShareInfo>& value) { SetSMBFileShareInfoList(value); return *this;}
    inline DescribeSMBFileSharesResult& WithSMBFileShareInfoList(Aws::Vector<SMBFileShareInfo>&& value) { SetSMBFileShareInfoList(std::move(value)); return *this;}
    inline DescribeSMBFileSharesResult& AddSMBFileShareInfoList(const SMBFileShareInfo& value) { m_sMBFileShareInfoList.push_back(value); return *this; }
    inline DescribeSMBFileSharesResult& AddSMBFileShareInfoList(SMBFileShareInfo&& value) { m_sMBFileShareInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSMBFileSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSMBFileSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSMBFileSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SMBFileShareInfo> m_sMBFileShareInfoList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
