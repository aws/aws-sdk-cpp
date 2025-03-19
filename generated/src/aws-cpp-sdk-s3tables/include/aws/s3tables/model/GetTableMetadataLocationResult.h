/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
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
namespace S3Tables
{
namespace Model
{
  class GetTableMetadataLocationResult
  {
  public:
    AWS_S3TABLES_API GetTableMetadataLocationResult() = default;
    AWS_S3TABLES_API GetTableMetadataLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableMetadataLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version token.</p>
     */
    inline const Aws::String& GetVersionToken() const { return m_versionToken; }
    template<typename VersionTokenT = Aws::String>
    void SetVersionToken(VersionTokenT&& value) { m_versionTokenHasBeenSet = true; m_versionToken = std::forward<VersionTokenT>(value); }
    template<typename VersionTokenT = Aws::String>
    GetTableMetadataLocationResult& WithVersionToken(VersionTokenT&& value) { SetVersionToken(std::forward<VersionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata location.</p>
     */
    inline const Aws::String& GetMetadataLocation() const { return m_metadataLocation; }
    template<typename MetadataLocationT = Aws::String>
    void SetMetadataLocation(MetadataLocationT&& value) { m_metadataLocationHasBeenSet = true; m_metadataLocation = std::forward<MetadataLocationT>(value); }
    template<typename MetadataLocationT = Aws::String>
    GetTableMetadataLocationResult& WithMetadataLocation(MetadataLocationT&& value) { SetMetadataLocation(std::forward<MetadataLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warehouse location.</p>
     */
    inline const Aws::String& GetWarehouseLocation() const { return m_warehouseLocation; }
    template<typename WarehouseLocationT = Aws::String>
    void SetWarehouseLocation(WarehouseLocationT&& value) { m_warehouseLocationHasBeenSet = true; m_warehouseLocation = std::forward<WarehouseLocationT>(value); }
    template<typename WarehouseLocationT = Aws::String>
    GetTableMetadataLocationResult& WithWarehouseLocation(WarehouseLocationT&& value) { SetWarehouseLocation(std::forward<WarehouseLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableMetadataLocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionToken;
    bool m_versionTokenHasBeenSet = false;

    Aws::String m_metadataLocation;
    bool m_metadataLocationHasBeenSet = false;

    Aws::String m_warehouseLocation;
    bool m_warehouseLocationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
