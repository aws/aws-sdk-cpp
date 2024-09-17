/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/StandbyReplicas.h>
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CreateCollectionDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateCollectionDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateCollectionDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Epoch time when the collection was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline CreateCollectionDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateCollectionDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateCollectionDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateCollectionDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline CreateCollectionDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateCollectionDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateCollectionDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * collection.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline CreateCollectionDetail& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CreateCollectionDetail& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CreateCollectionDetail& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline CreateCollectionDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
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
    inline CreateCollectionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCollectionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCollectionDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates details about an OpenSearch Serverless collection.</p>
     */
    inline const StandbyReplicas& GetStandbyReplicas() const{ return m_standbyReplicas; }
    inline bool StandbyReplicasHasBeenSet() const { return m_standbyReplicasHasBeenSet; }
    inline void SetStandbyReplicas(const StandbyReplicas& value) { m_standbyReplicasHasBeenSet = true; m_standbyReplicas = value; }
    inline void SetStandbyReplicas(StandbyReplicas&& value) { m_standbyReplicasHasBeenSet = true; m_standbyReplicas = std::move(value); }
    inline CreateCollectionDetail& WithStandbyReplicas(const StandbyReplicas& value) { SetStandbyReplicas(value); return *this;}
    inline CreateCollectionDetail& WithStandbyReplicas(StandbyReplicas&& value) { SetStandbyReplicas(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the collection.</p>
     */
    inline const CollectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CollectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CollectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateCollectionDetail& WithStatus(const CollectionStatus& value) { SetStatus(value); return *this;}
    inline CreateCollectionDetail& WithStatus(CollectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of collection.</p>
     */
    inline const CollectionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CollectionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CollectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateCollectionDetail& WithType(const CollectionType& value) { SetType(value); return *this;}
    inline CreateCollectionDetail& WithType(CollectionType&& value) { SetType(std::move(value)); return *this;}
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

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    long long m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StandbyReplicas m_standbyReplicas;
    bool m_standbyReplicasHasBeenSet = false;

    CollectionStatus m_status;
    bool m_statusHasBeenSet = false;

    CollectionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
