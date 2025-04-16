/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Contains details about a namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/NamespaceSummary">AWS
   * API Reference</a></p>
   */
  class NamespaceSummary
  {
  public:
    AWS_S3TABLES_API NamespaceSummary() = default;
    AWS_S3TABLES_API NamespaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API NamespaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::Vector<Aws::String>>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::Vector<Aws::String>>
    NamespaceSummary& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    template<typename NamespaceT = Aws::String>
    NamespaceSummary& AddNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace.emplace_back(std::forward<NamespaceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the namespace was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    NamespaceSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that created the namespace.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    NamespaceSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that owns the namespace.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    NamespaceSummary& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-assigned unique identifier for the namespace.</p>
     */
    inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    template<typename NamespaceIdT = Aws::String>
    void SetNamespaceId(NamespaceIdT&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::forward<NamespaceIdT>(value); }
    template<typename NamespaceIdT = Aws::String>
    NamespaceSummary& WithNamespaceId(NamespaceIdT&& value) { SetNamespaceId(std::forward<NamespaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-assigned unique identifier for the table bucket that contains this
     * namespace.</p>
     */
    inline const Aws::String& GetTableBucketId() const { return m_tableBucketId; }
    inline bool TableBucketIdHasBeenSet() const { return m_tableBucketIdHasBeenSet; }
    template<typename TableBucketIdT = Aws::String>
    void SetTableBucketId(TableBucketIdT&& value) { m_tableBucketIdHasBeenSet = true; m_tableBucketId = std::forward<TableBucketIdT>(value); }
    template<typename TableBucketIdT = Aws::String>
    NamespaceSummary& WithTableBucketId(TableBucketIdT&& value) { SetTableBucketId(std::forward<TableBucketIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_tableBucketId;
    bool m_tableBucketIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
