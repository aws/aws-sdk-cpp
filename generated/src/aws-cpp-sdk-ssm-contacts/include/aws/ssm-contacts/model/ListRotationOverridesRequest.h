/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ListRotationOverridesRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListRotationOverridesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRotationOverrides"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline const Aws::String& GetRotationId() const{ return m_rotationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline void SetRotationId(const Aws::String& value) { m_rotationIdHasBeenSet = true; m_rotationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline void SetRotationId(Aws::String&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline void SetRotationId(const char* value) { m_rotationIdHasBeenSet = true; m_rotationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline ListRotationOverridesRequest& WithRotationId(const Aws::String& value) { SetRotationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline ListRotationOverridesRequest& WithRotationId(Aws::String&& value) { SetRotationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to retrieve information
     * about.</p>
     */
    inline ListRotationOverridesRequest& WithRotationId(const char* value) { SetRotationId(value); return *this;}


    /**
     * <p>The date and time for the beginning of a time range for listing
     * overrides.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time for the beginning of a time range for listing
     * overrides.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time for the beginning of a time range for listing
     * overrides.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time for the beginning of a time range for listing
     * overrides.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time for the beginning of a time range for listing
     * overrides.</p>
     */
    inline ListRotationOverridesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time for the beginning of a time range for listing
     * overrides.</p>
     */
    inline ListRotationOverridesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time for the end of a time range for listing overrides.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time for the end of a time range for listing overrides.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time for the end of a time range for listing overrides.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time for the end of a time range for listing overrides.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time for the end of a time range for listing overrides.</p>
     */
    inline ListRotationOverridesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time for the end of a time range for listing overrides.</p>
     */
    inline ListRotationOverridesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListRotationOverridesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListRotationOverridesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListRotationOverridesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListRotationOverridesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_rotationId;
    bool m_rotationIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
