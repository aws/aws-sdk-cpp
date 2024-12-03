/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace S3Tables
{
namespace Model
{

  /**
   */
  class CreateNamespaceRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API CreateNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNamespace"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket to create the namespace
     * in.</p>
     */
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN.assign(value); }
    inline CreateNamespaceRequest& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline CreateNamespaceRequest& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::Vector<Aws::String>& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::Vector<Aws::String>&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline CreateNamespaceRequest& WithNamespace(const Aws::Vector<Aws::String>& value) { SetNamespace(value); return *this;}
    inline CreateNamespaceRequest& WithNamespace(Aws::Vector<Aws::String>&& value) { SetNamespace(std::move(value)); return *this;}
    inline CreateNamespaceRequest& AddNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace.push_back(value); return *this; }
    inline CreateNamespaceRequest& AddNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace.push_back(std::move(value)); return *this; }
    inline CreateNamespaceRequest& AddNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
