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
  class RenameTableRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API RenameTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenameTable"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket. </p>
     */
    inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    template<typename TableBucketARNT = Aws::String>
    void SetTableBucketARN(TableBucketARNT&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::forward<TableBucketARNT>(value); }
    template<typename TableBucketARNT = Aws::String>
    RenameTableRequest& WithTableBucketARN(TableBucketARNT&& value) { SetTableBucketARN(std::forward<TableBucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace associated with the table. </p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    RenameTableRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current name of the table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RenameTableRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the namespace.</p>
     */
    inline const Aws::String& GetNewNamespaceName() const { return m_newNamespaceName; }
    inline bool NewNamespaceNameHasBeenSet() const { return m_newNamespaceNameHasBeenSet; }
    template<typename NewNamespaceNameT = Aws::String>
    void SetNewNamespaceName(NewNamespaceNameT&& value) { m_newNamespaceNameHasBeenSet = true; m_newNamespaceName = std::forward<NewNamespaceNameT>(value); }
    template<typename NewNamespaceNameT = Aws::String>
    RenameTableRequest& WithNewNamespaceName(NewNamespaceNameT&& value) { SetNewNamespaceName(std::forward<NewNamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the table.</p>
     */
    inline const Aws::String& GetNewName() const { return m_newName; }
    inline bool NewNameHasBeenSet() const { return m_newNameHasBeenSet; }
    template<typename NewNameT = Aws::String>
    void SetNewName(NewNameT&& value) { m_newNameHasBeenSet = true; m_newName = std::forward<NewNameT>(value); }
    template<typename NewNameT = Aws::String>
    RenameTableRequest& WithNewName(NewNameT&& value) { SetNewName(std::forward<NewNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version token of the table.</p>
     */
    inline const Aws::String& GetVersionToken() const { return m_versionToken; }
    inline bool VersionTokenHasBeenSet() const { return m_versionTokenHasBeenSet; }
    template<typename VersionTokenT = Aws::String>
    void SetVersionToken(VersionTokenT&& value) { m_versionTokenHasBeenSet = true; m_versionToken = std::forward<VersionTokenT>(value); }
    template<typename VersionTokenT = Aws::String>
    RenameTableRequest& WithVersionToken(VersionTokenT&& value) { SetVersionToken(std::forward<VersionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_newNamespaceName;
    bool m_newNamespaceNameHasBeenSet = false;

    Aws::String m_newName;
    bool m_newNameHasBeenSet = false;

    Aws::String m_versionToken;
    bool m_versionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
