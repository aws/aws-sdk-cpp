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
   * <p>Details about the created OpenSearch Serverless collection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateCollectionDetail">AWS
   * API Reference</a></p>
   */
  class CreateCollectionDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionDetail();
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline CreateCollectionDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline CreateCollectionDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline CreateCollectionDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Epoch time when the collection was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The Epoch time when the collection was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The Epoch time when the collection was created.</p>
     */
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The Epoch time when the collection was created.</p>
     */
    inline CreateCollectionDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}


    /**
     * <p>A description of the collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the collection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the collection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the collection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the collection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the collection.</p>
     */
    inline CreateCollectionDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the collection.</p>
     */
    inline CreateCollectionDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the collection.</p>
     */
    inline CreateCollectionDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline CreateCollectionDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline CreateCollectionDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline CreateCollectionDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline CreateCollectionDetail& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline CreateCollectionDetail& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline CreateCollectionDetail& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline CreateCollectionDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The name of the collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the collection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the collection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the collection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the collection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the collection.</p>
     */
    inline CreateCollectionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the collection.</p>
     */
    inline CreateCollectionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the collection.</p>
     */
    inline CreateCollectionDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the collection.</p>
     */
    inline const CollectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the collection.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the collection.</p>
     */
    inline void SetStatus(const CollectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the collection.</p>
     */
    inline void SetStatus(CollectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the collection.</p>
     */
    inline CreateCollectionDetail& WithStatus(const CollectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the collection.</p>
     */
    inline CreateCollectionDetail& WithStatus(CollectionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of collection.</p>
     */
    inline const CollectionType& GetType() const{ return m_type; }

    /**
     * <p>The type of collection.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of collection.</p>
     */
    inline void SetType(const CollectionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of collection.</p>
     */
    inline void SetType(CollectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of collection.</p>
     */
    inline CreateCollectionDetail& WithType(const CollectionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of collection.</p>
     */
    inline CreateCollectionDetail& WithType(CollectionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

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
