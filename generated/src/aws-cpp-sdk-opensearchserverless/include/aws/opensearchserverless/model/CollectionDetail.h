/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CollectionStatus.h>
#include <aws/opensearchserverless/model/CollectionType.h>
#include <aws/opensearchserverless/model/StandbyReplicas.h>
#include <aws/opensearchserverless/model/FipsEndpoints.h>
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
   * endpoint, the OpenSearch Dashboards endpoint, and FIPS-compliant endpoints for
   * federal government workloads.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CollectionDetail">AWS
   * API Reference</a></p>
   */
  class CollectionDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CollectionDetail() = default;
    AWS_OPENSEARCHSERVERLESS_API CollectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API CollectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the collection.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CollectionDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the collection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CollectionDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the collection.</p>
     */
    inline CollectionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CollectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CollectionDetail& WithStatus(CollectionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of collection.</p>
     */
    inline CollectionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CollectionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CollectionDetail& WithType(CollectionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the collection.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CollectionDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CollectionDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services KMS key used to encrypt the
     * collection.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CollectionDetail& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an OpenSearch Serverless collection.</p>
     */
    inline StandbyReplicas GetStandbyReplicas() const { return m_standbyReplicas; }
    inline bool StandbyReplicasHasBeenSet() const { return m_standbyReplicasHasBeenSet; }
    inline void SetStandbyReplicas(StandbyReplicas value) { m_standbyReplicasHasBeenSet = true; m_standbyReplicas = value; }
    inline CollectionDetail& WithStandbyReplicas(StandbyReplicas value) { SetStandbyReplicas(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Epoch time when the collection was created.</p>
     */
    inline long long GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline CollectionDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline long long GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline CollectionDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Collection-specific endpoint used to submit index, search, and data upload
     * requests to an OpenSearch Serverless collection.</p>
     */
    inline const Aws::String& GetCollectionEndpoint() const { return m_collectionEndpoint; }
    inline bool CollectionEndpointHasBeenSet() const { return m_collectionEndpointHasBeenSet; }
    template<typename CollectionEndpointT = Aws::String>
    void SetCollectionEndpoint(CollectionEndpointT&& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = std::forward<CollectionEndpointT>(value); }
    template<typename CollectionEndpointT = Aws::String>
    CollectionDetail& WithCollectionEndpoint(CollectionEndpointT&& value) { SetCollectionEndpoint(std::forward<CollectionEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Collection-specific endpoint used to access OpenSearch Dashboards.</p>
     */
    inline const Aws::String& GetDashboardEndpoint() const { return m_dashboardEndpoint; }
    inline bool DashboardEndpointHasBeenSet() const { return m_dashboardEndpointHasBeenSet; }
    template<typename DashboardEndpointT = Aws::String>
    void SetDashboardEndpoint(DashboardEndpointT&& value) { m_dashboardEndpointHasBeenSet = true; m_dashboardEndpoint = std::forward<DashboardEndpointT>(value); }
    template<typename DashboardEndpointT = Aws::String>
    CollectionDetail& WithDashboardEndpoint(DashboardEndpointT&& value) { SetDashboardEndpoint(std::forward<DashboardEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>FIPS-compliant endpoints for the collection. These endpoints use FIPS 140-3
     * validated cryptographic modules and are required for federal government
     * workloads that must comply with FedRAMP security standards.</p>
     */
    inline const FipsEndpoints& GetFipsEndpoints() const { return m_fipsEndpoints; }
    inline bool FipsEndpointsHasBeenSet() const { return m_fipsEndpointsHasBeenSet; }
    template<typename FipsEndpointsT = FipsEndpoints>
    void SetFipsEndpoints(FipsEndpointsT&& value) { m_fipsEndpointsHasBeenSet = true; m_fipsEndpoints = std::forward<FipsEndpointsT>(value); }
    template<typename FipsEndpointsT = FipsEndpoints>
    CollectionDetail& WithFipsEndpoints(FipsEndpointsT&& value) { SetFipsEndpoints(std::forward<FipsEndpointsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A failure code associated with the request.</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    CollectionDetail& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message associated with the failure code.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    CollectionDetail& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CollectionStatus m_status{CollectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CollectionType m_type{CollectionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    StandbyReplicas m_standbyReplicas{StandbyReplicas::NOT_SET};
    bool m_standbyReplicasHasBeenSet = false;

    long long m_createdDate{0};
    bool m_createdDateHasBeenSet = false;

    long long m_lastModifiedDate{0};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_collectionEndpoint;
    bool m_collectionEndpointHasBeenSet = false;

    Aws::String m_dashboardEndpoint;
    bool m_dashboardEndpointHasBeenSet = false;

    FipsEndpoints m_fipsEndpoints;
    bool m_fipsEndpointsHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
