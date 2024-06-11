/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/CommandFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class ListCommandInvocationsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API ListCommandInvocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCommandInvocations"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>(Optional) The invocations for a specific command ID.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }
    inline ListCommandInvocationsRequest& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline ListCommandInvocationsRequest& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline ListCommandInvocationsRequest& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The command execution details for a specific managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ListCommandInvocationsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ListCommandInvocationsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ListCommandInvocationsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The maximum number of items to return for this call. The call also
     * returns a token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCommandInvocationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCommandInvocationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCommandInvocationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCommandInvocationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) One or more filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline const Aws::Vector<CommandFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<CommandFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<CommandFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListCommandInvocationsRequest& WithFilters(const Aws::Vector<CommandFilter>& value) { SetFilters(value); return *this;}
    inline ListCommandInvocationsRequest& WithFilters(Aws::Vector<CommandFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListCommandInvocationsRequest& AddFilters(const CommandFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListCommandInvocationsRequest& AddFilters(CommandFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) If set this returns the response of the command executions and any
     * command output. The default value is <code>false</code>. </p>
     */
    inline bool GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(bool value) { m_detailsHasBeenSet = true; m_details = value; }
    inline ListCommandInvocationsRequest& WithDetails(bool value) { SetDetails(value); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CommandFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
