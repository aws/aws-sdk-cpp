/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/TableType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains details about a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableSummary">AWS
   * API Reference</a></p>
   */
  class TableSummary
  {
  public:
    AWS_S3TABLES_API TableSummary();
    AWS_S3TABLES_API TableSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API TableSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::Vector<Aws::String>& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::Vector<Aws::String>&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline TableSummary& WithNamespace(const Aws::Vector<Aws::String>& value) { SetNamespace(value); return *this;}
    inline TableSummary& WithNamespace(Aws::Vector<Aws::String>&& value) { SetNamespace(std::move(value)); return *this;}
    inline TableSummary& AddNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace.push_back(value); return *this; }
    inline TableSummary& AddNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace.push_back(std::move(value)); return *this; }
    inline TableSummary& AddNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.push_back(value); return *this; }
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
    inline TableSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TableSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TableSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the table.</p>
     */
    inline const TableType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TableType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TableType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TableSummary& WithType(const TableType& value) { SetType(value); return *this;}
    inline TableSummary& WithType(TableType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const{ return m_tableARN; }
    inline bool TableARNHasBeenSet() const { return m_tableARNHasBeenSet; }
    inline void SetTableARN(const Aws::String& value) { m_tableARNHasBeenSet = true; m_tableARN = value; }
    inline void SetTableARN(Aws::String&& value) { m_tableARNHasBeenSet = true; m_tableARN = std::move(value); }
    inline void SetTableARN(const char* value) { m_tableARNHasBeenSet = true; m_tableARN.assign(value); }
    inline TableSummary& WithTableARN(const Aws::String& value) { SetTableARN(value); return *this;}
    inline TableSummary& WithTableARN(Aws::String&& value) { SetTableARN(std::move(value)); return *this;}
    inline TableSummary& WithTableARN(const char* value) { SetTableARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the table was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TableSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TableSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the table was last modified at.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline TableSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline TableSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TableType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_tableARN;
    bool m_tableARNHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
