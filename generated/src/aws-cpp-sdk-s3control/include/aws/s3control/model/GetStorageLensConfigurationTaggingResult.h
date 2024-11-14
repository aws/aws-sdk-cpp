/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/StorageLensTag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetStorageLensConfigurationTaggingResult
  {
  public:
    AWS_S3CONTROL_API GetStorageLensConfigurationTaggingResult();
    AWS_S3CONTROL_API GetStorageLensConfigurationTaggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetStorageLensConfigurationTaggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The tags of S3 Storage Lens configuration requested.</p>
     */
    inline const Aws::Vector<StorageLensTag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<StorageLensTag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<StorageLensTag>&& value) { m_tags = std::move(value); }
    inline GetStorageLensConfigurationTaggingResult& WithTags(const Aws::Vector<StorageLensTag>& value) { SetTags(value); return *this;}
    inline GetStorageLensConfigurationTaggingResult& WithTags(Aws::Vector<StorageLensTag>&& value) { SetTags(std::move(value)); return *this;}
    inline GetStorageLensConfigurationTaggingResult& AddTags(const StorageLensTag& value) { m_tags.push_back(value); return *this; }
    inline GetStorageLensConfigurationTaggingResult& AddTags(StorageLensTag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStorageLensConfigurationTaggingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStorageLensConfigurationTaggingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStorageLensConfigurationTaggingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetStorageLensConfigurationTaggingResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetStorageLensConfigurationTaggingResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetStorageLensConfigurationTaggingResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StorageLensTag> m_tags;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
