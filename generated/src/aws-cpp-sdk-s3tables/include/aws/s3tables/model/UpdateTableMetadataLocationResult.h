/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateTableMetadataLocationResult
  {
  public:
    AWS_S3TABLES_API UpdateTableMetadataLocationResult();
    AWS_S3TABLES_API UpdateTableMetadataLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API UpdateTableMetadataLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateTableMetadataLocationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateTableMetadataLocationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const{ return m_tableARN; }
    inline void SetTableARN(const Aws::String& value) { m_tableARN = value; }
    inline void SetTableARN(Aws::String&& value) { m_tableARN = std::move(value); }
    inline void SetTableARN(const char* value) { m_tableARN.assign(value); }
    inline UpdateTableMetadataLocationResult& WithTableARN(const Aws::String& value) { SetTableARN(value); return *this;}
    inline UpdateTableMetadataLocationResult& WithTableARN(Aws::String&& value) { SetTableARN(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationResult& WithTableARN(const char* value) { SetTableARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace the table is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::Vector<Aws::String>& value) { m_namespace = value; }
    inline void SetNamespace(Aws::Vector<Aws::String>&& value) { m_namespace = std::move(value); }
    inline UpdateTableMetadataLocationResult& WithNamespace(const Aws::Vector<Aws::String>& value) { SetNamespace(value); return *this;}
    inline UpdateTableMetadataLocationResult& WithNamespace(Aws::Vector<Aws::String>&& value) { SetNamespace(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationResult& AddNamespace(const Aws::String& value) { m_namespace.push_back(value); return *this; }
    inline UpdateTableMetadataLocationResult& AddNamespace(Aws::String&& value) { m_namespace.push_back(std::move(value)); return *this; }
    inline UpdateTableMetadataLocationResult& AddNamespace(const char* value) { m_namespace.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version token of the table.</p>
     */
    inline const Aws::String& GetVersionToken() const{ return m_versionToken; }
    inline void SetVersionToken(const Aws::String& value) { m_versionToken = value; }
    inline void SetVersionToken(Aws::String&& value) { m_versionToken = std::move(value); }
    inline void SetVersionToken(const char* value) { m_versionToken.assign(value); }
    inline UpdateTableMetadataLocationResult& WithVersionToken(const Aws::String& value) { SetVersionToken(value); return *this;}
    inline UpdateTableMetadataLocationResult& WithVersionToken(Aws::String&& value) { SetVersionToken(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationResult& WithVersionToken(const char* value) { SetVersionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata location of the table.</p>
     */
    inline const Aws::String& GetMetadataLocation() const{ return m_metadataLocation; }
    inline void SetMetadataLocation(const Aws::String& value) { m_metadataLocation = value; }
    inline void SetMetadataLocation(Aws::String&& value) { m_metadataLocation = std::move(value); }
    inline void SetMetadataLocation(const char* value) { m_metadataLocation.assign(value); }
    inline UpdateTableMetadataLocationResult& WithMetadataLocation(const Aws::String& value) { SetMetadataLocation(value); return *this;}
    inline UpdateTableMetadataLocationResult& WithMetadataLocation(Aws::String&& value) { SetMetadataLocation(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationResult& WithMetadataLocation(const char* value) { SetMetadataLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTableMetadataLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTableMetadataLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_tableARN;

    Aws::Vector<Aws::String> m_namespace;

    Aws::String m_versionToken;

    Aws::String m_metadataLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
