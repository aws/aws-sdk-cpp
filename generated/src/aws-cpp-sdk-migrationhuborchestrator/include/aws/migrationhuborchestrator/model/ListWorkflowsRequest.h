/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   */
  class ListWorkflowsRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkflows"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBORCHESTRATOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results that can be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkflowsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListWorkflowsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkflowsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkflowsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline ListWorkflowsRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline ListWorkflowsRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline ListWorkflowsRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline const Aws::String& GetAdsApplicationConfigurationName() const{ return m_adsApplicationConfigurationName; }
    inline bool AdsApplicationConfigurationNameHasBeenSet() const { return m_adsApplicationConfigurationNameHasBeenSet; }
    inline void SetAdsApplicationConfigurationName(const Aws::String& value) { m_adsApplicationConfigurationNameHasBeenSet = true; m_adsApplicationConfigurationName = value; }
    inline void SetAdsApplicationConfigurationName(Aws::String&& value) { m_adsApplicationConfigurationNameHasBeenSet = true; m_adsApplicationConfigurationName = std::move(value); }
    inline void SetAdsApplicationConfigurationName(const char* value) { m_adsApplicationConfigurationNameHasBeenSet = true; m_adsApplicationConfigurationName.assign(value); }
    inline ListWorkflowsRequest& WithAdsApplicationConfigurationName(const Aws::String& value) { SetAdsApplicationConfigurationName(value); return *this;}
    inline ListWorkflowsRequest& WithAdsApplicationConfigurationName(Aws::String&& value) { SetAdsApplicationConfigurationName(std::move(value)); return *this;}
    inline ListWorkflowsRequest& WithAdsApplicationConfigurationName(const char* value) { SetAdsApplicationConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the migration workflow.</p>
     */
    inline const MigrationWorkflowStatusEnum& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MigrationWorkflowStatusEnum& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MigrationWorkflowStatusEnum&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListWorkflowsRequest& WithStatus(const MigrationWorkflowStatusEnum& value) { SetStatus(value); return *this;}
    inline ListWorkflowsRequest& WithStatus(MigrationWorkflowStatusEnum&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListWorkflowsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListWorkflowsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListWorkflowsRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_adsApplicationConfigurationName;
    bool m_adsApplicationConfigurationNameHasBeenSet = false;

    MigrationWorkflowStatusEnum m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
