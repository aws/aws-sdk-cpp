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
    AWS_S3TABLES_API UpdateTableMetadataLocationResult() = default;
    AWS_S3TABLES_API UpdateTableMetadataLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API UpdateTableMetadataLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTableMetadataLocationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const { return m_tableARN; }
    template<typename TableARNT = Aws::String>
    void SetTableARN(TableARNT&& value) { m_tableARNHasBeenSet = true; m_tableARN = std::forward<TableARNT>(value); }
    template<typename TableARNT = Aws::String>
    UpdateTableMetadataLocationResult& WithTableARN(TableARNT&& value) { SetTableARN(std::forward<TableARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace the table is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Aws::Vector<Aws::String>>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::Vector<Aws::String>>
    UpdateTableMetadataLocationResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    template<typename NamespaceT = Aws::String>
    UpdateTableMetadataLocationResult& AddNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace.emplace_back(std::forward<NamespaceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version token of the table.</p>
     */
    inline const Aws::String& GetVersionToken() const { return m_versionToken; }
    template<typename VersionTokenT = Aws::String>
    void SetVersionToken(VersionTokenT&& value) { m_versionTokenHasBeenSet = true; m_versionToken = std::forward<VersionTokenT>(value); }
    template<typename VersionTokenT = Aws::String>
    UpdateTableMetadataLocationResult& WithVersionToken(VersionTokenT&& value) { SetVersionToken(std::forward<VersionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata location of the table.</p>
     */
    inline const Aws::String& GetMetadataLocation() const { return m_metadataLocation; }
    template<typename MetadataLocationT = Aws::String>
    void SetMetadataLocation(MetadataLocationT&& value) { m_metadataLocationHasBeenSet = true; m_metadataLocation = std::forward<MetadataLocationT>(value); }
    template<typename MetadataLocationT = Aws::String>
    UpdateTableMetadataLocationResult& WithMetadataLocation(MetadataLocationT&& value) { SetMetadataLocation(std::forward<MetadataLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateTableMetadataLocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_tableARN;
    bool m_tableARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_versionToken;
    bool m_versionTokenHasBeenSet = false;

    Aws::String m_metadataLocation;
    bool m_metadataLocationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
