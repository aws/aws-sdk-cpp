﻿/**
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
   * <p>CreateNFSFileShareOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateNFSFileShareOutput">AWS
   * API Reference</a></p>
   */
  class CreateNFSFileShareResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateNFSFileShareResult();
    AWS_STORAGEGATEWAY_API CreateNFSFileShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateNFSFileShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the newly created file share.</p>
     */
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARN = value; }
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARN = std::move(value); }
    inline void SetFileShareARN(const char* value) { m_fileShareARN.assign(value); }
    inline CreateNFSFileShareResult& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}
    inline CreateNFSFileShareResult& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}
    inline CreateNFSFileShareResult& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateNFSFileShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNFSFileShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNFSFileShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileShareARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
