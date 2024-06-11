﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/model/StorageClass.h>
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
namespace MediaStoreData
{
namespace Model
{
  class PutObjectResult
  {
  public:
    AWS_MEDIASTOREDATA_API PutObjectResult();
    AWS_MEDIASTOREDATA_API PutObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTOREDATA_API PutObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline const Aws::String& GetContentSHA256() const{ return m_contentSHA256; }
    inline void SetContentSHA256(const Aws::String& value) { m_contentSHA256 = value; }
    inline void SetContentSHA256(Aws::String&& value) { m_contentSHA256 = std::move(value); }
    inline void SetContentSHA256(const char* value) { m_contentSHA256.assign(value); }
    inline PutObjectResult& WithContentSHA256(const Aws::String& value) { SetContentSHA256(value); return *this;}
    inline PutObjectResult& WithContentSHA256(Aws::String&& value) { SetContentSHA256(std::move(value)); return *this;}
    inline PutObjectResult& WithContentSHA256(const char* value) { SetContentSHA256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline PutObjectResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline PutObjectResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline PutObjectResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage class where the object was persisted. The class should be
     * “Temporal”.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }
    inline void SetStorageClass(const StorageClass& value) { m_storageClass = value; }
    inline void SetStorageClass(StorageClass&& value) { m_storageClass = std::move(value); }
    inline PutObjectResult& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}
    inline PutObjectResult& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutObjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutObjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutObjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contentSHA256;

    Aws::String m_eTag;

    StorageClass m_storageClass;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
