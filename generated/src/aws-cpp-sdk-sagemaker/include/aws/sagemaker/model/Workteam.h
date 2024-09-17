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
    AWS_SAGEMAKER_API Workteam();
    AWS_SAGEMAKER_API Workteam(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Workteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the work team.</p>
     */
    inline const Aws::String& GetWorkteamName() const{ return m_workteamName; }
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }
    inline void SetWorkteamName(const Aws::String& value) { m_workteamNameHasBeenSet = true; m_workteamName = value; }
    inline void SetWorkteamName(Aws::String&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::move(value); }
    inline void SetWorkteamName(const char* value) { m_workteamNameHasBeenSet = true; m_workteamName.assign(value); }
    inline Workteam& WithWorkteamName(const Aws::String& value) { SetWorkteamName(value); return *this;}
    inline Workteam& WithWorkteamName(Aws::String&& value) { SetWorkteamName(std::move(value)); return *this;}
    inline Workteam& WithWorkteamName(const char* value) { SetWorkteamName(value); return *this;}
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
    inline const Aws::Vector<MemberDefinition>& GetMemberDefinitions() const{ return m_memberDefinitions; }
    inline bool MemberDefinitionsHasBeenSet() const { return m_memberDefinitionsHasBeenSet; }
    inline void SetMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = value; }
    inline void SetMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = std::move(value); }
    inline Workteam& WithMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { SetMemberDefinitions(value); return *this;}
    inline Workteam& WithMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { SetMemberDefinitions(std::move(value)); return *this;}
    inline Workteam& AddMemberDefinitions(const MemberDefinition& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(value); return *this; }
    inline Workteam& AddMemberDefinitions(MemberDefinition&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }
    inline Workteam& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}
    inline Workteam& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}
    inline Workteam& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline const Aws::String& GetWorkforceArn() const{ return m_workforceArn; }
    inline bool WorkforceArnHasBeenSet() const { return m_workforceArnHasBeenSet; }
    inline void SetWorkforceArn(const Aws::String& value) { m_workforceArnHasBeenSet = true; m_workforceArn = value; }
    inline void SetWorkforceArn(Aws::String&& value) { m_workforceArnHasBeenSet = true; m_workforceArn = std::move(value); }
    inline void SetWorkforceArn(const char* value) { m_workforceArnHasBeenSet = true; m_workforceArn.assign(value); }
    inline Workteam& WithWorkforceArn(const Aws::String& value) { SetWorkforceArn(value); return *this;}
    inline Workteam& WithWorkforceArn(Aws::String&& value) { SetWorkforceArn(std::move(value)); return *this;}
    inline Workteam& WithWorkforceArn(const char* value) { SetWorkforceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductListingIds() const{ return m_productListingIds; }
    inline bool ProductListingIdsHasBeenSet() const { return m_productListingIdsHasBeenSet; }
    inline void SetProductListingIds(const Aws::Vector<Aws::String>& value) { m_productListingIdsHasBeenSet = true; m_productListingIds = value; }
    inline void SetProductListingIds(Aws::Vector<Aws::String>&& value) { m_productListingIdsHasBeenSet = true; m_productListingIds = std::move(value); }
    inline Workteam& WithProductListingIds(const Aws::Vector<Aws::String>& value) { SetProductListingIds(value); return *this;}
    inline Workteam& WithProductListingIds(Aws::Vector<Aws::String>&& value) { SetProductListingIds(std::move(value)); return *this;}
    inline Workteam& AddProductListingIds(const Aws::String& value) { m_productListingIdsHasBeenSet = true; m_productListingIds.push_back(value); return *this; }
    inline Workteam& AddProductListingIds(Aws::String&& value) { m_productListingIdsHasBeenSet = true; m_productListingIds.push_back(std::move(value)); return *this; }
    inline Workteam& AddProductListingIds(const char* value) { m_productListingIdsHasBeenSet = true; m_productListingIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the work team.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Workteam& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Workteam& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Workteam& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline const Aws::String& GetSubDomain() const{ return m_subDomain; }
    inline bool SubDomainHasBeenSet() const { return m_subDomainHasBeenSet; }
    inline void SetSubDomain(const Aws::String& value) { m_subDomainHasBeenSet = true; m_subDomain = value; }
    inline void SetSubDomain(Aws::String&& value) { m_subDomainHasBeenSet = true; m_subDomain = std::move(value); }
    inline void SetSubDomain(const char* value) { m_subDomainHasBeenSet = true; m_subDomain.assign(value); }
    inline Workteam& WithSubDomain(const Aws::String& value) { SetSubDomain(value); return *this;}
    inline Workteam& WithSubDomain(Aws::String&& value) { SetSubDomain(std::move(value)); return *this;}
    inline Workteam& WithSubDomain(const char* value) { SetSubDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline Workteam& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline Workteam& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline Workteam& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline Workteam& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures SNS notifications of available or expiring work items for work
     * teams.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }
    inline Workteam& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}
    inline Workteam& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes any access constraints that have been defined for Amazon S3
     * resources.</p>
     */
    inline const WorkerAccessConfiguration& GetWorkerAccessConfiguration() const{ return m_workerAccessConfiguration; }
    inline bool WorkerAccessConfigurationHasBeenSet() const { return m_workerAccessConfigurationHasBeenSet; }
    inline void SetWorkerAccessConfiguration(const WorkerAccessConfiguration& value) { m_workerAccessConfigurationHasBeenSet = true; m_workerAccessConfiguration = value; }
    inline void SetWorkerAccessConfiguration(WorkerAccessConfiguration&& value) { m_workerAccessConfigurationHasBeenSet = true; m_workerAccessConfiguration = std::move(value); }
    inline Workteam& WithWorkerAccessConfiguration(const WorkerAccessConfiguration& value) { SetWorkerAccessConfiguration(value); return *this;}
    inline Workteam& WithWorkerAccessConfiguration(WorkerAccessConfiguration&& value) { SetWorkerAccessConfiguration(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    WorkerAccessConfiguration m_workerAccessConfiguration;
    bool m_workerAccessConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
