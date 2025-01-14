﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/StorageLensConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetStorageLensConfigurationResult
  {
  public:
    AWS_S3CONTROL_API GetStorageLensConfigurationResult();
    AWS_S3CONTROL_API GetStorageLensConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetStorageLensConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The S3 Storage Lens configuration requested.</p>
     */
    inline const StorageLensConfiguration& GetStorageLensConfiguration() const{ return m_storageLensConfiguration; }
    inline void SetStorageLensConfiguration(const StorageLensConfiguration& value) { m_storageLensConfiguration = value; }
    inline void SetStorageLensConfiguration(StorageLensConfiguration&& value) { m_storageLensConfiguration = std::move(value); }
    inline GetStorageLensConfigurationResult& WithStorageLensConfiguration(const StorageLensConfiguration& value) { SetStorageLensConfiguration(value); return *this;}
    inline GetStorageLensConfigurationResult& WithStorageLensConfiguration(StorageLensConfiguration&& value) { SetStorageLensConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStorageLensConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStorageLensConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStorageLensConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetStorageLensConfigurationResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetStorageLensConfigurationResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetStorageLensConfigurationResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    StorageLensConfiguration m_storageLensConfiguration;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
