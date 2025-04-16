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
  class GetTableEncryptionRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API GetTableEncryptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTableEncryption"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket containing the table.</p>
     */
    inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    template<typename TableBucketARNT = Aws::String>
    void SetTableBucketARN(TableBucketARNT&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::forward<TableBucketARNT>(value); }
    template<typename TableBucketARNT = Aws::String>
    GetTableEncryptionRequest& WithTableBucketARN(TableBucketARNT&& value) { SetTableBucketARN(std::forward<TableBucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace associated with the table.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    GetTableEncryptionRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetTableEncryptionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
