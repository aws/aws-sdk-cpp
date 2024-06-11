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
   * <p>AddTagsToResourceOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddTagsToResourceOutput">AWS
   * API Reference</a></p>
   */
  class AddTagsToResourceResult
  {
  public:
    AWS_STORAGEGATEWAY_API AddTagsToResourceResult();
    AWS_STORAGEGATEWAY_API AddTagsToResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API AddTagsToResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARN.assign(value); }
    inline AddTagsToResourceResult& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline AddTagsToResourceResult& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline AddTagsToResourceResult& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddTagsToResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddTagsToResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddTagsToResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
