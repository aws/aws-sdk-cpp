/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/NotificationConfiguration.h>
#include <aws/sagemaker/model/WorkerAccessConfiguration.h>
#include <aws/sagemaker/model/MemberDefinition.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides details about a labeling work team.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Workteam">AWS
   * API Reference</a></p>
   */
  class Workteam
  {
  public:
    AWS_SAGEMAKER_API Workteam() = default;
    AWS_SAGEMAKER_API Workteam(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Workteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the work team.</p>
     */
    inline const Aws::String& GetWorkteamName() const { return m_workteamName; }
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }
    template<typename WorkteamNameT = Aws::String>
    void SetWorkteamName(WorkteamNameT&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::forward<WorkteamNameT>(value); }
    template<typename WorkteamNameT = Aws::String>
    Workteam& WithWorkteamName(WorkteamNameT&& value) { SetWorkteamName(std::forward<WorkteamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>.</p>
     */
    inline const Aws::Vector<MemberDefinition>& GetMemberDefinitions() const { return m_memberDefinitions; }
    inline bool MemberDefinitionsHasBeenSet() const { return m_memberDefinitionsHasBeenSet; }
    template<typename MemberDefinitionsT = Aws::Vector<MemberDefinition>>
    void SetMemberDefinitions(MemberDefinitionsT&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = std::forward<MemberDefinitionsT>(value); }
    template<typename MemberDefinitionsT = Aws::Vector<MemberDefinition>>
    Workteam& WithMemberDefinitions(MemberDefinitionsT&& value) { SetMemberDefinitions(std::forward<MemberDefinitionsT>(value)); return *this;}
    template<typename MemberDefinitionsT = MemberDefinition>
    Workteam& AddMemberDefinitions(MemberDefinitionsT&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.emplace_back(std::forward<MemberDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline const Aws::String& GetWorkteamArn() const { return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    template<typename WorkteamArnT = Aws::String>
    void SetWorkteamArn(WorkteamArnT&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::forward<WorkteamArnT>(value); }
    template<typename WorkteamArnT = Aws::String>
    Workteam& WithWorkteamArn(WorkteamArnT&& value) { SetWorkteamArn(std::forward<WorkteamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline const Aws::String& GetWorkforceArn() const { return m_workforceArn; }
    inline bool WorkforceArnHasBeenSet() const { return m_workforceArnHasBeenSet; }
    template<typename WorkforceArnT = Aws::String>
    void SetWorkforceArn(WorkforceArnT&& value) { m_workforceArnHasBeenSet = true; m_workforceArn = std::forward<WorkforceArnT>(value); }
    template<typename WorkforceArnT = Aws::String>
    Workteam& WithWorkforceArn(WorkforceArnT&& value) { SetWorkforceArn(std::forward<WorkforceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductListingIds() const { return m_productListingIds; }
    inline bool ProductListingIdsHasBeenSet() const { return m_productListingIdsHasBeenSet; }
    template<typename ProductListingIdsT = Aws::Vector<Aws::String>>
    void SetProductListingIds(ProductListingIdsT&& value) { m_productListingIdsHasBeenSet = true; m_productListingIds = std::forward<ProductListingIdsT>(value); }
    template<typename ProductListingIdsT = Aws::Vector<Aws::String>>
    Workteam& WithProductListingIds(ProductListingIdsT&& value) { SetProductListingIds(std::forward<ProductListingIdsT>(value)); return *this;}
    template<typename ProductListingIdsT = Aws::String>
    Workteam& AddProductListingIds(ProductListingIdsT&& value) { m_productListingIdsHasBeenSet = true; m_productListingIds.emplace_back(std::forward<ProductListingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the work team.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Workteam& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline const Aws::String& GetSubDomain() const { return m_subDomain; }
    inline bool SubDomainHasBeenSet() const { return m_subDomainHasBeenSet; }
    template<typename SubDomainT = Aws::String>
    void SetSubDomain(SubDomainT&& value) { m_subDomainHasBeenSet = true; m_subDomain = std::forward<SubDomainT>(value); }
    template<typename SubDomainT = Aws::String>
    Workteam& WithSubDomain(SubDomainT&& value) { SetSubDomain(std::forward<SubDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    Workteam& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    Workteam& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures SNS notifications of available or expiring work items for work
     * teams.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    Workteam& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes any access constraints that have been defined for Amazon S3
     * resources.</p>
     */
    inline const WorkerAccessConfiguration& GetWorkerAccessConfiguration() const { return m_workerAccessConfiguration; }
    inline bool WorkerAccessConfigurationHasBeenSet() const { return m_workerAccessConfigurationHasBeenSet; }
    template<typename WorkerAccessConfigurationT = WorkerAccessConfiguration>
    void SetWorkerAccessConfiguration(WorkerAccessConfigurationT&& value) { m_workerAccessConfigurationHasBeenSet = true; m_workerAccessConfiguration = std::forward<WorkerAccessConfigurationT>(value); }
    template<typename WorkerAccessConfigurationT = WorkerAccessConfiguration>
    Workteam& WithWorkerAccessConfiguration(WorkerAccessConfigurationT&& value) { SetWorkerAccessConfiguration(std::forward<WorkerAccessConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet = false;

    Aws::Vector<MemberDefinition> m_memberDefinitions;
    bool m_memberDefinitionsHasBeenSet = false;

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;

    Aws::String m_workforceArn;
    bool m_workforceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_productListingIds;
    bool m_productListingIdsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_subDomain;
    bool m_subDomainHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    WorkerAccessConfiguration m_workerAccessConfiguration;
    bool m_workerAccessConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
