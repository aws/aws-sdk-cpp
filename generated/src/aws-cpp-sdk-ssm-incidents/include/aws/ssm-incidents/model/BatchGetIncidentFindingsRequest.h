/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class BatchGetIncidentFindingsRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetIncidentFindings"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline BatchGetIncidentFindingsRequest& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline BatchGetIncidentFindingsRequest& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline BatchGetIncidentFindingsRequest& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline BatchGetIncidentFindingsRequest& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs of findings for which you want to view details.</p>
     */
    inline BatchGetIncidentFindingsRequest& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline BatchGetIncidentFindingsRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline BatchGetIncidentFindingsRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident for which you want to view
     * finding details.</p>
     */
    inline BatchGetIncidentFindingsRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
