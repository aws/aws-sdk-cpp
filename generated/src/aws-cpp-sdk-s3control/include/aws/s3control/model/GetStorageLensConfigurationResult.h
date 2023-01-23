/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/StorageLensConfiguration.h>
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


    /**
     * <p>The S3 Storage Lens configuration requested.</p>
     */
    inline const StorageLensConfiguration& GetStorageLensConfiguration() const{ return m_storageLensConfiguration; }

    /**
     * <p>The S3 Storage Lens configuration requested.</p>
     */
    inline void SetStorageLensConfiguration(const StorageLensConfiguration& value) { m_storageLensConfiguration = value; }

    /**
     * <p>The S3 Storage Lens configuration requested.</p>
     */
    inline void SetStorageLensConfiguration(StorageLensConfiguration&& value) { m_storageLensConfiguration = std::move(value); }

    /**
     * <p>The S3 Storage Lens configuration requested.</p>
     */
    inline GetStorageLensConfigurationResult& WithStorageLensConfiguration(const StorageLensConfiguration& value) { SetStorageLensConfiguration(value); return *this;}

    /**
     * <p>The S3 Storage Lens configuration requested.</p>
     */
    inline GetStorageLensConfigurationResult& WithStorageLensConfiguration(StorageLensConfiguration&& value) { SetStorageLensConfiguration(std::move(value)); return *this;}

  private:

    StorageLensConfiguration m_storageLensConfiguration;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
