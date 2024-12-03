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
    AWS_S3TABLES_API GetTableMetadataLocationResult();
    AWS_S3TABLES_API GetTableMetadataLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableMetadataLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version token.</p>
     */
    inline const Aws::String& GetVersionToken() const{ return m_versionToken; }
    inline void SetVersionToken(const Aws::String& value) { m_versionToken = value; }
    inline void SetVersionToken(Aws::String&& value) { m_versionToken = std::move(value); }
    inline void SetVersionToken(const char* value) { m_versionToken.assign(value); }
    inline GetTableMetadataLocationResult& WithVersionToken(const Aws::String& value) { SetVersionToken(value); return *this;}
    inline GetTableMetadataLocationResult& WithVersionToken(Aws::String&& value) { SetVersionToken(std::move(value)); return *this;}
    inline GetTableMetadataLocationResult& WithVersionToken(const char* value) { SetVersionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata location.</p>
     */
    inline const Aws::String& GetMetadataLocation() const{ return m_metadataLocation; }
    inline void SetMetadataLocation(const Aws::String& value) { m_metadataLocation = value; }
    inline void SetMetadataLocation(Aws::String&& value) { m_metadataLocation = std::move(value); }
    inline void SetMetadataLocation(const char* value) { m_metadataLocation.assign(value); }
    inline GetTableMetadataLocationResult& WithMetadataLocation(const Aws::String& value) { SetMetadataLocation(value); return *this;}
    inline GetTableMetadataLocationResult& WithMetadataLocation(Aws::String&& value) { SetMetadataLocation(std::move(value)); return *this;}
    inline GetTableMetadataLocationResult& WithMetadataLocation(const char* value) { SetMetadataLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warehouse location.</p>
     */
    inline const Aws::String& GetWarehouseLocation() const{ return m_warehouseLocation; }
    inline void SetWarehouseLocation(const Aws::String& value) { m_warehouseLocation = value; }
    inline void SetWarehouseLocation(Aws::String&& value) { m_warehouseLocation = std::move(value); }
    inline void SetWarehouseLocation(const char* value) { m_warehouseLocation.assign(value); }
    inline GetTableMetadataLocationResult& WithWarehouseLocation(const Aws::String& value) { SetWarehouseLocation(value); return *this;}
    inline GetTableMetadataLocationResult& WithWarehouseLocation(Aws::String&& value) { SetWarehouseLocation(std::move(value)); return *this;}
    inline GetTableMetadataLocationResult& WithWarehouseLocation(const char* value) { SetWarehouseLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableMetadataLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableMetadataLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableMetadataLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_versionToken;

    Aws::String m_metadataLocation;

    Aws::String m_warehouseLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
