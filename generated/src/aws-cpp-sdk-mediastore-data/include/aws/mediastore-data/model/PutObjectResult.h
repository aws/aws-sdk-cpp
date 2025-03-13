/**
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
    AWS_MEDIASTOREDATA_API PutObjectResult() = default;
    AWS_MEDIASTOREDATA_API PutObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTOREDATA_API PutObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline const Aws::String& GetContentSHA256() const { return m_contentSHA256; }
    template<typename ContentSHA256T = Aws::String>
    void SetContentSHA256(ContentSHA256T&& value) { m_contentSHA256HasBeenSet = true; m_contentSHA256 = std::forward<ContentSHA256T>(value); }
    template<typename ContentSHA256T = Aws::String>
    PutObjectResult& WithContentSHA256(ContentSHA256T&& value) { SetContentSHA256(std::forward<ContentSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    PutObjectResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage class where the object was persisted. The class should be
     * “Temporal”.</p>
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline PutObjectResult& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutObjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentSHA256;
    bool m_contentSHA256HasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
