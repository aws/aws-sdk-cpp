﻿/**
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
namespace Http
{
    class URI;
} //namespace Http
namespace S3Tables
{
namespace Model
{

  /**
   */
  class GetTableRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API GetTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTable"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;

    AWS_S3TABLES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket associated with the
     * table.</p>
     */
    inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    template<typename TableBucketARNT = Aws::String>
    void SetTableBucketARN(TableBucketARNT&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::forward<TableBucketARNT>(value); }
    template<typename TableBucketARNT = Aws::String>
    GetTableRequest& WithTableBucketARN(TableBucketARNT&& value) { SetTableBucketARN(std::forward<TableBucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace the table is associated with.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    GetTableRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
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
    GetTableRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    GetTableRequest& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
