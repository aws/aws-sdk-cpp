/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/QualificationStatus.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ListWorkersWithQualificationTypeRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ListWorkersWithQualificationTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkersWithQualificationType"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Qualification type of the Qualifications to return.</p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p> The status of the Qualifications to return. Can be <code>Granted |
     * Revoked</code>. </p>
     */
    inline const QualificationStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the Qualifications to return. Can be <code>Granted |
     * Revoked</code>. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the Qualifications to return. Can be <code>Granted |
     * Revoked</code>. </p>
     */
    inline void SetStatus(const QualificationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the Qualifications to return. Can be <code>Granted |
     * Revoked</code>. </p>
     */
    inline void SetStatus(QualificationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the Qualifications to return. Can be <code>Granted |
     * Revoked</code>. </p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithStatus(const QualificationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the Qualifications to return. Can be <code>Granted |
     * Revoked</code>. </p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithStatus(QualificationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Pagination Token</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination Token</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination Token</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination Token</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination Token</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination Token</p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination Token</p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination Token</p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Limit the number of results returned. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Limit the number of results returned. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Limit the number of results returned. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Limit the number of results returned. </p>
     */
    inline ListWorkersWithQualificationTypeRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    QualificationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
