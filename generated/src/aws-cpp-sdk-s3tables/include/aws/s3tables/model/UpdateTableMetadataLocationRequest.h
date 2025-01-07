/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Tables
{
namespace Model
{

  /**
   */
  class UpdateTableMetadataLocationRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API UpdateTableMetadataLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTableMetadataLocation"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket. </p>
     */
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN.assign(value); }
    inline UpdateTableMetadataLocationRequest& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline UpdateTableMetadataLocationRequest& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationRequest& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the table.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline UpdateTableMetadataLocationRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline UpdateTableMetadataLocationRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateTableMetadataLocationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateTableMetadataLocationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version token of the table. </p>
     */
    inline const Aws::String& GetVersionToken() const{ return m_versionToken; }
    inline bool VersionTokenHasBeenSet() const { return m_versionTokenHasBeenSet; }
    inline void SetVersionToken(const Aws::String& value) { m_versionTokenHasBeenSet = true; m_versionToken = value; }
    inline void SetVersionToken(Aws::String&& value) { m_versionTokenHasBeenSet = true; m_versionToken = std::move(value); }
    inline void SetVersionToken(const char* value) { m_versionTokenHasBeenSet = true; m_versionToken.assign(value); }
    inline UpdateTableMetadataLocationRequest& WithVersionToken(const Aws::String& value) { SetVersionToken(value); return *this;}
    inline UpdateTableMetadataLocationRequest& WithVersionToken(Aws::String&& value) { SetVersionToken(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationRequest& WithVersionToken(const char* value) { SetVersionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new metadata location for the table. </p>
     */
    inline const Aws::String& GetMetadataLocation() const{ return m_metadataLocation; }
    inline bool MetadataLocationHasBeenSet() const { return m_metadataLocationHasBeenSet; }
    inline void SetMetadataLocation(const Aws::String& value) { m_metadataLocationHasBeenSet = true; m_metadataLocation = value; }
    inline void SetMetadataLocation(Aws::String&& value) { m_metadataLocationHasBeenSet = true; m_metadataLocation = std::move(value); }
    inline void SetMetadataLocation(const char* value) { m_metadataLocationHasBeenSet = true; m_metadataLocation.assign(value); }
    inline UpdateTableMetadataLocationRequest& WithMetadataLocation(const Aws::String& value) { SetMetadataLocation(value); return *this;}
    inline UpdateTableMetadataLocationRequest& WithMetadataLocation(Aws::String&& value) { SetMetadataLocation(std::move(value)); return *this;}
    inline UpdateTableMetadataLocationRequest& WithMetadataLocation(const char* value) { SetMetadataLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionToken;
    bool m_versionTokenHasBeenSet = false;

    Aws::String m_metadataLocation;
    bool m_metadataLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
