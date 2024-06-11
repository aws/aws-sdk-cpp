/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CollectionStatus.h>
#include <aws/opensearchserverless/model/CollectionType.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Details about an updated OpenSearch Serverless collection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateCollectionDetail">AWS
   * API Reference</a></p>
   */
  class UpdateCollectionDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionDetail();
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateCollectionDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateCollectionDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateCollectionDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the collection was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline UpdateCollectionDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateCollectionDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateCollectionDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateCollectionDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateCollectionDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateCollectionDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateCollectionDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline UpdateCollectionDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateCollectionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateCollectionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateCollectionDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the collection.</p>
     */
    inline const CollectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CollectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CollectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateCollectionDetail& WithStatus(const CollectionStatus& value) { SetStatus(value); return *this;}
    inline UpdateCollectionDetail& WithStatus(CollectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection type.</p>
     */
    inline const CollectionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CollectionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CollectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateCollectionDetail& WithType(const CollectionType& value) { SetType(value); return *this;}
    inline UpdateCollectionDetail& WithType(CollectionType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CollectionStatus m_status;
    bool m_statusHasBeenSet = false;

    CollectionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
