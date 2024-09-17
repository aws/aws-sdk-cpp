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
   * <p>Details about each OpenSearch Serverless collection, including the collection
   * endpoint and the OpenSearch Dashboards endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CollectionDetail">AWS
   * API Reference</a></p>
   */
  class CollectionDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CollectionDetail();
    AWS_OPENSEARCHSERVERLESS_API CollectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API CollectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CollectionDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CollectionDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CollectionDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Collection-specific endpoint used to submit index, search, and data upload
     * requests to an OpenSearch Serverless collection.</p>
     */
    inline const Aws::String& GetCollectionEndpoint() const{ return m_collectionEndpoint; }
    inline bool CollectionEndpointHasBeenSet() const { return m_collectionEndpointHasBeenSet; }
    inline void SetCollectionEndpoint(const Aws::String& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = value; }
    inline void SetCollectionEndpoint(Aws::String&& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = std::move(value); }
    inline void SetCollectionEndpoint(const char* value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint.assign(value); }
    inline CollectionDetail& WithCollectionEndpoint(const Aws::String& value) { SetCollectionEndpoint(value); return *this;}
    inline CollectionDetail& WithCollectionEndpoint(Aws::String&& value) { SetCollectionEndpoint(std::move(value)); return *this;}
    inline CollectionDetail& WithCollectionEndpoint(const char* value) { SetCollectionEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Epoch time when the collection was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline CollectionDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Collection-specific endpoint used to access OpenSearch Dashboards.</p>
     */
    inline const Aws::String& GetDashboardEndpoint() const{ return m_dashboardEndpoint; }
    inline bool DashboardEndpointHasBeenSet() const { return m_dashboardEndpointHasBeenSet; }
    inline void SetDashboardEndpoint(const Aws::String& value) { m_dashboardEndpointHasBeenSet = true; m_dashboardEndpoint = value; }
    inline void SetDashboardEndpoint(Aws::String&& value) { m_dashboardEndpointHasBeenSet = true; m_dashboardEndpoint = std::move(value); }
    inline void SetDashboardEndpoint(const char* value) { m_dashboardEndpointHasBeenSet = true; m_dashboardEndpoint.assign(value); }
    inline CollectionDetail& WithDashboardEndpoint(const Aws::String& value) { SetDashboardEndpoint(value); return *this;}
    inline CollectionDetail& WithDashboardEndpoint(Aws::String&& value) { SetDashboardEndpoint(std::move(value)); return *this;}
    inline CollectionDetail& WithDashboardEndpoint(const char* value) { SetDashboardEndpoint(value); return *this;}
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
    inline CollectionDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CollectionDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CollectionDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A failure code associated with the request.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline CollectionDetail& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline CollectionDetail& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline CollectionDetail& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message associated with the failure code.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline CollectionDetail& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline CollectionDetail& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline CollectionDetail& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the collection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CollectionDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CollectionDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CollectionDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services KMS key used to encrypt the
     * collection.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline CollectionDetail& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CollectionDetail& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CollectionDetail& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline CollectionDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
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
    inline CollectionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CollectionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CollectionDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an OpenSearch Serverless collection.</p>
     */
    inline const StandbyReplicas& GetStandbyReplicas() const{ return m_standbyReplicas; }
    inline bool StandbyReplicasHasBeenSet() const { return m_standbyReplicasHasBeenSet; }
    inline void SetStandbyReplicas(const StandbyReplicas& value) { m_standbyReplicasHasBeenSet = true; m_standbyReplicas = value; }
    inline void SetStandbyReplicas(StandbyReplicas&& value) { m_standbyReplicasHasBeenSet = true; m_standbyReplicas = std::move(value); }
    inline CollectionDetail& WithStandbyReplicas(const StandbyReplicas& value) { SetStandbyReplicas(value); return *this;}
    inline CollectionDetail& WithStandbyReplicas(StandbyReplicas&& value) { SetStandbyReplicas(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the collection.</p>
     */
    inline const CollectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CollectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CollectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CollectionDetail& WithStatus(const CollectionStatus& value) { SetStatus(value); return *this;}
    inline CollectionDetail& WithStatus(CollectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of collection.</p>
     */
    inline const CollectionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CollectionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CollectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CollectionDetail& WithType(const CollectionType& value) { SetType(value); return *this;}
    inline CollectionDetail& WithType(CollectionType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_collectionEndpoint;
    bool m_collectionEndpointHasBeenSet = false;

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_dashboardEndpoint;
    bool m_dashboardEndpointHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

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
