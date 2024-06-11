/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/TaskStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListRunTasksRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListRunTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRunTasks"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ListRunTasksRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ListRunTasksRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ListRunTasksRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the list by status.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListRunTasksRequest& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}
    inline ListRunTasksRequest& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetStartingToken() const{ return m_startingToken; }
    inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
    inline void SetStartingToken(const Aws::String& value) { m_startingTokenHasBeenSet = true; m_startingToken = value; }
    inline void SetStartingToken(Aws::String&& value) { m_startingTokenHasBeenSet = true; m_startingToken = std::move(value); }
    inline void SetStartingToken(const char* value) { m_startingTokenHasBeenSet = true; m_startingToken.assign(value); }
    inline ListRunTasksRequest& WithStartingToken(const Aws::String& value) { SetStartingToken(value); return *this;}
    inline ListRunTasksRequest& WithStartingToken(Aws::String&& value) { SetStartingToken(std::move(value)); return *this;}
    inline ListRunTasksRequest& WithStartingToken(const char* value) { SetStartingToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of run tasks to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRunTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    TaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_startingToken;
    bool m_startingTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
